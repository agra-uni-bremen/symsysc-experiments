#include <klee_conf.h>
#include <plic_vanilla.hpp>
#include <tlm_utils/simple_initiator_socket.h>
#include <plic/VRVPLIC.h>
#include <plic/VRVPLIC___024root.h>
#include <simple_bus_rtl.h>
#include <systemc.h>
#include <mutex>

#ifndef __UCLIBC__
#warning "Not using uclibc...."
#endif


#include <boost/preprocessor/repetition/repeat.hpp>
#define IO_INIT_PENDING(z, n, data) rtl.io_has_pending_irq_##n(pending##n);
#define PLIC_NUM_IRQS 53

#define RESET_PENDING(z, n, data)                                                                                      \
	if (rtl.rootp->RVPLIC__DOT__pending_interrupts_##n)                                                              \
		pending##n = false;

#define SET_PENDING(z, n, data) \
	if(data==n)                            \
		pending##n = true;

#define ASSERT_PENDING(z, n, data) \
	if(data==n)                     \
		assert(pending##n.read());

#define ASSERT_SPECIFIC_NONPENDING(z, n, data) \
	assert(!pending##n.read());

#define INIT_SIGNALS(z,n,data) \
	sc_core::sc_signal<bool, SC_MANY_WRITERS> pending##n;

static constexpr uint32_t maxPriority = 7;

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;

template <class test>
struct Simple_interrupt_target : public external_interrupt_target
{
	bool was_triggered = false;
	bool was_cleared = false;
	PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm;
	tlm_utils::simple_initiator_socket<test>& isock;

	sc_event triggered;

	Simple_interrupt_target(PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm,
							tlm_utils::simple_initiator_socket<test>& isock)
			: tlm(tlm), isock(isock){};

	void trigger_external_interrupt()
	{
		INFO(std::cout << "Interrupt triggered" << std::endl);
		assert(!was_triggered && "interrupt triggered more than once");
		was_triggered = true;
		was_cleared = false;
		triggered.notify();
	};

	void clear_external_interrupt()
	{
		INFO(std::cout << "Interrupt cleared" << std::endl);
		assert(!was_cleared &&
			   "interrupt cleared more than once");
		was_cleared = true;
	};

	uint32_t claim_interrupt()
	{
		assert(was_triggered && "tried to claim untriggered interrupt target");
		was_triggered = false;

		sc_core::sc_time delay;
		tlm::tlm_generic_payload pl;
		uint32_t interrupt = 0;
		//0x200004 + n*8, &hart_claim_response[n]});
		pl.set_read();
		pl.set_address(0x200004);   //claim_response register
		pl.set_data_length(sizeof(uint32_t));
		pl.set_data_ptr(reinterpret_cast<unsigned char*>(&interrupt));

		tlm.transport(pl, delay);

		//If the interrupt was triggered, there has to be an interrupt in register
		assert(interrupt > 0);

		//Pending ITR shall be reset
		unsigned idx = interrupt / 32;
		unsigned off = interrupt % 32;
		assert(((tlm.pending_interrupts[idx] & (1 << off)) == 0) &&
			   "pending interrupt shall be reset after read");

		pl.set_write();
		isock->b_transport(pl, delay);	// notify finished interrupt

		//interrupt was either cleared or triggered for another prio
		assert(was_cleared || was_triggered);

		INFO(std::cout << "Interrupt " << interrupt << " claimed" << std::endl);
		return interrupt;
	}
};

uint32_t calculate_enable(uint32_t id) {
if(id <= 0 || id >= PLIC_NUM_IRQS) {
return 0;
}
uint32_t shift = id<32?0:32;
return 1UL << (id-shift);
}

struct comparison_priority : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm;
	Simple_interrupt_target<comparison_priority> sit;
	tlm_utils::simple_initiator_socket<comparison_priority> isock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(comparison_priority);
	comparison_priority(sc_core::sc_module_name name, sc_clock& clock, PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm)
			: sc_module(name), clock(clock), bus(clock), rtl("rtl_plic"), tlm(tlm), sit(tlm, isock) {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, IO_INIT_PENDING, void)
		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);

		rtl.clk(clock);
		rtl.reset(idle_reset);
		
		tlm.target_harts[0] = &sit;
		isock.bind(tlm.tsock);

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, RESET_PENDING, void)
	}

	void run() {
		uint32_t id_a = klee_int("id a");
		uint32_t id_b = klee_int("id b");
		klee_assume(id_a != id_b);
		klee_assume(id_a > 0);
		klee_assume(id_a < PLIC_NUM_IRQS);
		klee_assume(id_b > 0);
		klee_assume(id_b < PLIC_NUM_IRQS);
		uint32_t prio_a = klee_int("prio_a");
		uint32_t prio_b = klee_int("prio_b");
		klee_assume(prio_a > 0);
		klee_assume(prio_b > 0);

		// tlm
		tlm.interrupt_priorities[id_a] = prio_a;
		tlm.interrupt_priorities[id_b] = prio_b;

		tlm.gateway_trigger_interrupt(id_a);
		tlm.gateway_trigger_interrupt(id_b);

		uint32_t tlm_first_itr = tlm.hart_get_next_pending_interrupt(0, false);

		tlm.clear_pending_interrupt(tlm_first_itr);
		uint32_t tlm_second_itr = tlm.hart_get_next_pending_interrupt(0, false);

		// RTL
		uint32_t prio_threshold = 7; // 0 for mutation
		bus.write(kPlicThresholdReg, prio_threshold);

		if(id_a<32 && id_b<32) {
			uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
			bus.write(kPlicEnableReg, enable);
		} else if(id_a>=32&&id_b>=32) {
			uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
			bus.write(kPlicEnableReg+sizeof(uint32_t), enable);
		} else {
			uint32_t enable_a = calculate_enable(id_a);
			uint32_t en_addr_offset_a = id_a<32?0:sizeof(uint32_t);
			uint32_t enable_address_a = kPlicEnableReg+en_addr_offset_a;
			bus.write(enable_address_a, enable_a);
			uint32_t enable_b = calculate_enable(id_b);
			uint32_t enable_address_b = kPlicEnableReg-(en_addr_offset_a-sizeof(uint32_t));
			bus.write(enable_address_b, enable_b);
		}

		bus.write(sizeof(uint32_t)*id_a, prio_a);
		bus.write(sizeof(uint32_t)*id_b, prio_b);

		BOOST_PP_REPEAT(PLIC_NUM_IRQS, SET_PENDING, id_a)
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, SET_PENDING, id_b)

		wait(sc_time(40,sc_core::SC_NS));

		uint32_t rtl_first_itr = bus.read(kPlicClaimReg);
		assert(tlm_first_itr == rtl_first_itr);

		bus.write(kPlicClaimReg, rtl_first_itr);
		wait(sc_time(40,sc_core::SC_NS));
		uint32_t rtl_second_itr = bus.read(kPlicClaimReg);
		assert(rtl_second_itr == tlm_second_itr);

		sc_stop();
	}
};

struct comparison_threshold : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm;
	Simple_interrupt_target<comparison_threshold> sit;
	tlm_utils::simple_initiator_socket<comparison_threshold> isock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(comparison_threshold);
	comparison_threshold(sc_core::sc_module_name name, sc_clock& clock, PLIC<1, PLIC_NUM_IRQS, maxPriority>& tlm)
			: sc_module(name), clock(clock), bus(clock), rtl("rtl_plic"), tlm(tlm), sit(tlm, isock) {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, IO_INIT_PENDING, void)
		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);

		rtl.clk(clock);
		rtl.reset(idle_reset);

		tlm.target_harts[0] = &sit;
		isock.bind(tlm.tsock);

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, RESET_PENDING, void)
	}

	void run() {
		uint32_t id = klee_int("id");
		klee_assume(id > 0);
		klee_assume(id < PLIC_NUM_IRQS);
		uint32_t prio = klee_int("priority");
		uint32_t threshold = klee_int("priority threshold");

		// tlm
		tlm.interrupt_priorities[id] = prio;
		tlm.hart_priority_threshold[0] = threshold;

		//first trigger may be low or high prio
		tlm.gateway_trigger_interrupt(id);

		uint32_t tlm_itr = tlm.hart_get_next_pending_interrupt(0, true);

		// rtl
		bus.write(kPlicThresholdReg, threshold);

		uint32_t enable = calculate_enable(id);
		uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
		uint32_t enable_address = kPlicEnableReg+en_addr_offset;
		bus.write(enable_address, enable);

		bus.write(sizeof(uint32_t)*id, prio);

		BOOST_PP_REPEAT(PLIC_NUM_IRQS, SET_PENDING, id)

		wait(sc_time(40,sc_core::SC_NS));
		assert(irq_pending.posedge() == (tlm_itr == id));

		sc_stop();
	}
};

int sc_main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	PLIC<1, PLIC_NUM_IRQS, maxPriority> tlm("DUT");

	if(argc == 2)
	{
		if(strcmp(argv[1], "comparison_priority") == 0)
		{
			comparison_priority testbench("prio", clk, tlm);
			sc_start();
		} else if(strcmp(argv[1], "comparison_threshold") == 0)
		{
			comparison_threshold testbench("threshold", clk, tlm);
			sc_start();
		}
		else
			INFO(std::cout << "Invalid test " << argv[1] << " given." << std::endl);

	} else
	{
		INFO(std::cout << "No test given." << std::endl);
		//Test info output
		sc_core::sc_time a(1002, sc_core::SC_MS), b (1, sc_core::SC_SEC), c (1, sc_core::SC_FS);
		INFO(std::cout << a.to_string() << " + " << b.to_string() << " = " << (a+b).to_string() << std::endl);
		//INFO(std::cout << c.to_string() << " in default units is " << c.to_default_time_units() << " " << sc_core::unit_to_string(sc_core::default_time_unit) << std::endl);
		//INFO(std::cout << "Number of registered transports: " << transports.size() << std::endl);
		//sc_core::Simcontext::get().printInfo();
	}



	INFO(std::cout << "finished at " << sc_core::sc_time_stamp() << std::endl);

	return 0;
}
