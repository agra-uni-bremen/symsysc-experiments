
#include <stdint.h>
#include <gcd_tlm.h>
#include <testrunner.h>
#include <gcd/VSBGCDCtrl.h>
#include <gcd/VSBGCDCtrl___024root.h>

static constexpr uint32_t addrA = 0x00;
static constexpr uint32_t addrB = 0x04;
static constexpr uint32_t addrRes = 0x08;
static constexpr uint32_t addrReady = 0x0c;
static constexpr uint32_t addrValid = 0x10;

uint32_t gcd_euclid(uint32_t a, uint32_t b)
{
	if (a == 0)
		return b;
	return gcd_euclid(b % a, a);
}


struct gcd_test_runner : public test_runner {
	VSBGCDCtrl m_dut;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool result_ready = false;
	uint32_t result = 0;

	SC_HAS_PROCESS(gcd_test_runner);
	explicit gcd_test_runner(sc_clock& clock) : test_runner(clock), m_dut{"rtl gcd"} {
		m_dut.clk(clock);

		irq = false;
		m_dut.io_irq(irq);
		m_dut.reset(idle_reset);

		m_dut.io_sel(m_bus.sel);
		m_dut.io_sb_SBaddress(m_bus.SBaddress);
		m_dut.io_sb_SBvalid(m_bus.SBvalid);
		m_dut.io_sb_SBwdata(m_bus.SBwdata);
		m_dut.io_sb_SBwrite(m_bus.SBwrite);
		m_dut.io_sb_SBsize(m_bus.SBsize);
		m_dut.io_sb_SBready(m_bus.SBready);
		m_dut.io_sb_SBrdata(m_bus.SBrdata);

		SC_METHOD(resultReady);
		sensitive << irq.posedge_event();
		dont_initialize();
	}

private:
	void resultReady() {
		result_ready = true;
		result = m_dut.rootp->SBGCDCtrl__DOT__regResBuf;
	}
};

void functional_tlm_basic(gcd_tlm &dut_tlm) {
//	uint32_t a = 2147487755;//3087007744;
//	uint32_t b = 2147483648;//1543503872;
	uint32_t a = klee_int("a");
	uint32_t b = klee_int("b");

	// TLM
	dut_tlm.a = a;
	dut_tlm.b = b;

	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(addrValid); // valid
	uint32_t valid = 1;
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&valid));
	dut_tlm.transport(pl, delay);

	minikernel_step();

	assert(dut_tlm.ready == 1);
	assert(dut_tlm.res == gcd_euclid(a, b));

	uint32_t res;
	pl.set_read();
	pl.set_address(addrRes);
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
	dut_tlm.transport(pl, delay);

	assert(!dut_tlm.ready);
}

void functional_rtl_basic(gcd_test_runner &tr) {
//	uint32_t a = 0;
//	uint32_t b = 1;
	uint32_t a = klee_int("a");
	uint32_t b = klee_int("b");

	tr.call_write(addrA, a);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, b);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	uint32_t valid = 1;
	tr.call_write(addrValid, valid);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	unsigned counter=0;
	unsigned counter_max=100;
	while(!tr.result_ready&&counter++<counter_max) {
		minikernel_step();
	}
	assert(tr.result_ready && "calculations apparently do not terminate");
	assert(tr.result == gcd_euclid(a,b));

/*	tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tr.rw_value == gcd_euclid(a,b));*/
}

void comparison_basic(gcd_tlm &dut_tlm, gcd_test_runner &tr) {
//	uint32_t a = 6;
//	uint32_t b = 12;
	uint32_t a = klee_int("a");
	uint32_t b = klee_int("b");

	// TLM
	dut_tlm.a = a;
	dut_tlm.b = b;

	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(addrValid); // valid
	uint32_t valid = 1;
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&valid));
	dut_tlm.transport(pl, delay);

	minikernel_step();

	uint32_t tlm_res = dut_tlm.res;

	// RTL
	tr.call_write(addrA, a);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, b);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrValid, valid);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	unsigned counter=0;
	unsigned counter_max=100;
	while(!tr.result_ready&&counter<counter_max) {
		minikernel_step();
		counter++;
	}
	assert(tr.result_ready && "calculations apparently do not terminate");
	assert(tr.result == tlm_res);
	/*tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}
	assert(tlm_res == tr.rw_value);*/
}

int main(int argc, char* argv[])
{
	gcd_tlm dut_tlm("GCD TLM");

	sc_clock clk{"gcd clk", sc_core::sc_time(20, sc_core::SC_NS)};
	gcd_test_runner tr(clk);

	Simcontext::get().initialize();
	minikernel_step(); //0ns

	if(argc == 2) {
		if(strcmp(argv[1], "functional_tlm_basic") == 0) {
			functional_tlm_basic(dut_tlm);
		} else if(strcmp(argv[1], "functional_rtl_basic") == 0) {
			functional_rtl_basic(tr);
		} else if(strcmp(argv[1], "comparison_basic") == 0) {
			comparison_basic(dut_tlm,tr);
		}
		else
			INFO(std::cout << "Invalid test given." << std::endl);
	} else {
		INFO(std::cout << "No test given." << std::endl);
		//Test info output
		sc_core::sc_time a(1002, sc_core::SC_MS), b (1, sc_core::SC_SEC), c (1, sc_core::SC_FS);
		INFO(std::cout << a.to_string() << " + " << b.to_string() << " = " << (a+b).to_string() << std::endl);
		INFO(std::cout << c.to_string() << " in default units is " << c.to_default_time_units() << " " << sc_core::unit_to_string(sc_core::default_time_unit) << std::endl);
		INFO(std::cout << "Number of registered transports: " << transports.size() << std::endl);
		sc_core::Simcontext::get().printInfo();
	}


	INFO(std::cout << "finished at " << minikernel_current_time() << std::endl);
	/*
	 *TODO:
	 * - Mehr Testfälle?
	 */
	return 0;
}

