#include <klee_conf.h>
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
#define PLIC_RTL_NUM_IRQS 53

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

#define SB_PRIO_VAL(z,n,data) \
	assert(rtl.rootp->RVPLIC__DOT__interrupt_priorities_##n == data);

#define SB_CHECK_PRIO(z,n,data) \
    if(data==n)                               \
    	assert(rtl.rootp->RVPLIC__DOT__interrupt_priorities_##n == (value&0b111));                               \
    else                               \
		assert(rtl.rootp->RVPLIC__DOT__interrupt_priorities_##n == 0);

#define SB_PENDING_VAL(z,n,data) \
	assert(rtl.rootp->RVPLIC__DOT__pending_interrupts_##n == data);

#define SB_CHECK_PENDING(z,n,data) \
    if(data==n)                               \
    	assert(rtl.rootp->RVPLIC__DOT__pending_interrupts_##n == 1);                               \
    else                               \
		assert(rtl.rootp->RVPLIC__DOT__pending_interrupts_##n == 0);

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;


uint32_t calculate_enable(uint32_t id) {
	if(id <= 0 || id >= PLIC_RTL_NUM_IRQS) {
		return 0;
	}
	uint32_t shift = id<32?0:32;
	return 1UL << (id-shift);
}

struct functional_test_basic : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	uint32_t id = 0;
	bool test_done = false;

	SC_HAS_PROCESS(functional_test_basic);
	functional_test_basic(sc_clock& clock)
			: sc_module(sc_module_name("basic")), clock(clock), bus(clock), rtl("rtl_plic") {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void checkUnfinished() {
		assert((test_done || (!(id > 0 && id < PLIC_RTL_NUM_IRQS))) && "valid interrupt number did not finish");
	}

	void run() {
		id = klee_int("interrupt number");
		//klee_assume(id > 0);
		//klee_assume(id < PLIC_RTL_NUM_IRQS);

		uint32_t prio_threshold = 7;
		bus.write(kPlicThresholdReg, prio_threshold);

		uint32_t enable = calculate_enable(id);
		uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
		uint32_t enable_address = kPlicEnableReg+en_addr_offset;
		bus.write(enable_address, enable);

		uint32_t prio = 1;
		bus.write(sizeof(uint32_t)*id, prio);

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, id)
//		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_PENDING, id)

		auto before = sc_core::sc_time_stamp();
		wait(irq_pending.posedge_event());
		auto after = sc_core::sc_time_stamp();
		assert(after-before == sc_core::sc_time(40,sc_core::SC_NS));

		uint32_t res = bus.read(kPlicClaimReg);
		if(id > 0 && id < PLIC_RTL_NUM_IRQS)
			assert(res == id);

		bus.write(kPlicClaimReg, id);
		//assert(irq_pending.negedge());

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_SPECIFIC_NONPENDING, void)
		test_done = true;
		sc_stop();
	}
};

struct functional_test_priority : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(functional_test_priority);
	functional_test_priority(sc_clock& clock)
			: sc_module(sc_module_name("prio")), clock(clock), bus(clock), rtl("rtl_plic") {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void run() {
		uint32_t id_a = klee_int("id a");
		uint32_t id_b = klee_int("id b");
		klee_assume(id_a != id_b);
		klee_assume(id_a > 0);
		klee_assume(id_a < PLIC_RTL_NUM_IRQS);
		klee_assume(id_b > 0);
		klee_assume(id_b < PLIC_RTL_NUM_IRQS);
		uint32_t prio_a = klee_int("prio_a");
		uint32_t prio_b = klee_int("prio_b");
		klee_assume(prio_a > 0);
		klee_assume(prio_b > 0);

		uint32_t prio_threshold = 7; // 0 für mutationstests
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

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, id_a)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, id_b)

		wait(sc_time(40,sc_core::SC_NS));

		uint32_t prio_a3 = prio_a&0b111;
		uint32_t prio_b3 = prio_b&0b111;
		uint32_t first_itr = (prio_a3) > (prio_b3) ? id_a : id_b;
		uint32_t second_itr = (prio_a3) > (prio_b3) ? id_b : id_a;
		if((prio_a3) == (prio_b3)) {
			first_itr = id_a > id_b ? id_b : id_a;
			second_itr = id_a > id_b ? id_a : id_b;
		}

		uint32_t res1 = bus.read(kPlicClaimReg);
		assert(res1 == first_itr);

		bus.write(kPlicClaimReg, first_itr);
		wait(sc_time(40,sc_core::SC_NS));
		uint32_t res2 = bus.read(kPlicClaimReg);
		assert(res2 == second_itr);

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_SPECIFIC_NONPENDING, void)
		sc_stop();
	}
};

struct functional_test_threshold : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(functional_test_threshold);
	functional_test_threshold(sc_clock& clock)
			: sc_module(sc_module_name("treshold")), clock(clock), bus(clock), rtl("rtl_plic") {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void run() {
		uint32_t id = klee_int("id");
		klee_assume(id > 0);
		klee_assume(id < PLIC_RTL_NUM_IRQS);
		uint32_t prio = klee_int("priority");
		uint32_t threshold = klee_int("priority threshold");

		bus.write(kPlicThresholdReg, threshold);

		uint32_t enable = calculate_enable(id);
		uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
		uint32_t enable_address = kPlicEnableReg+en_addr_offset;
		bus.write(enable_address, enable);

		bus.write(sizeof(uint32_t)*id, prio);

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, id)

		wait(sc_time(40,sc_core::SC_NS));
		if(((prio&0b111) > 0) && ((prio&0b111) > (threshold&0b111))) {
			assert(irq_pending.posedge()); // fails
		} else {
			assert(irq_pending.negedge()); // fails
		}

		sc_stop();
	}
};

struct interface_test_write : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(interface_test_write);
	interface_test_write(sc_clock& clock)
			: sc_module(sc_module_name("interface-write")), clock(clock), bus(clock), rtl("rtl_plic") {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void run() {
		uint32_t address = klee_int("address");
		uint32_t value = klee_int("value");

		bus.write(address, value);

		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PENDING_VAL, 0)
		assert(rtl.rootp->RVPLIC__DOT__claim_complete == 0);

		uint32_t adrc = address&0x3fffff;
		if(adrc==kPlicThresholdReg) {
			assert(rtl.rootp->RVPLIC__DOT__interrupt_threshold == (value&0b111));
		} else {
			assert(rtl.rootp->RVPLIC__DOT__interrupt_threshold == 0);
		}
		if(adrc==kPlicEnableReg) {
			assert(rtl.rootp->RVPLIC__DOT__interrupts_enabled == (value&(~1)));
		} else if(adrc==kPlicEnableReg+4) {
			assert(rtl.rootp->RVPLIC__DOT__interrupts_enabled == ((0x1fffffU&(uint64_t)value)<<32));
		} else {
			assert(rtl.rootp->RVPLIC__DOT__interrupts_enabled == 0);
		}
		if(adrc >= 0x04 && adrc <= 0x0+52*4) {
			BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_CHECK_PRIO, adrc/4)
		} else {
			BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PRIO_VAL, 0)
		}

		sc_stop();
	}
};

struct interface_test_read : public sc_core::sc_module {
	VRVPLIC rtl;
	SimpleBusRtl bus;
	sc_clock& clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_cleared = false;
	bool was_triggered = false;

	SC_HAS_PROCESS(interface_test_read);
	interface_test_read(sc_clock& clock)
			: sc_module(sc_module_name("interface-read")), clock(clock), bus(clock), rtl("rtl_plic") {
		rtl.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

		SC_METHOD(checkRegisters);
		sensitive << clock.negedge_event();
		sensitive << clock.posedge_event();

		SC_THREAD(run);
	};

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void checkRegisters() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PRIO_VAL, 0)
		assert(rtl.rootp->RVPLIC__DOT__interrupts_enabled == 0);
		assert(rtl.rootp->RVPLIC__DOT__interrupt_threshold == 0);
		assert(rtl.rootp->RVPLIC__DOT__claim_complete == 0);
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PENDING_VAL, 0)
	}

	void run() {
		uint32_t address = klee_int("address");

		bus.read(address);

		sc_stop();
	}
};

int sc_main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};

	if(argc == 2)
	{
		if(strcmp(argv[1], "functional_test_basic") == 0)
		{
			functional_test_basic testbench(clk);
			sc_start(sc_time(250,SC_NS));
			testbench.checkUnfinished();
		} else if(strcmp(argv[1], "functional_test_priority") == 0)
		{
			functional_test_priority testbench(clk);
			sc_start();
		} else if(strcmp(argv[1], "functional_test_threshold") == 0)
		{
			functional_test_threshold testbench(clk);
			sc_start();
		} else if(strcmp(argv[1], "interface_test_write") == 0)
		{
			interface_test_write testbench(clk);
			sc_start();
		} else if(strcmp(argv[1], "interface_test_read") == 0)
		{
			interface_test_read testbench(clk);
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
