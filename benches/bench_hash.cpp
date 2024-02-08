
#include <stdint.h>
#include <hash_tlm.h>
#include <testrunner.h>
#include <hash/VSBTaskHash.h>
#include <hash/VSBTaskHash___024root.h>

static constexpr uint32_t addrA = 0x00;
static constexpr uint32_t addrB = 0x04;
static constexpr uint32_t addrRes = 0x08;
static constexpr uint32_t addrReady = 0x0c;
static constexpr uint32_t addrValid = 0x10;


struct hash_test_runner : public test_runner {
	VSBTaskHash m_dut;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool result_ready = false;
	uint32_t result=0;

	SC_HAS_PROCESS(hash_test_runner);
	explicit hash_test_runner(sc_clock& clock) : test_runner(clock), m_dut{"rtl hash"} {
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
		result = m_dut.rootp->SBTaskHash__DOT__regHashBuf;
	}
};

void functional_rtl_basic(hash_test_runner &tr) {
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

	for(unsigned i=0;i<52;i++){
		minikernel_step();
	}
	assert(tr.result_ready);
	assert(tr.result == task_hash_f(a,b));
	
	/*for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tr.rw_value == task_hash_f(a,b));*/
}

void functional_tlm_basic(hash_tlm &dut_tlm) {
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
	assert(dut_tlm.hash == task_hash_f(a, b));

	uint32_t res;
	pl.set_read();
	pl.set_address(addrRes);
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
	dut_tlm.transport(pl, delay);

	assert(!dut_tlm.ready);
}

void comparison_basic(hash_tlm &dut_tlm, hash_test_runner &tr) {
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

	uint32_t tlm_res = dut_tlm.hash;

	// RTL
	minikernel_step(); // posedge, so that writing can start immediately
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

	for(int i=0;i<52;i++) {
		minikernel_step();
	}
	assert(tr.result_ready);
	assert(tr.result == tlm_res);

	/*tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tlm_res == tr.rw_value);*/
}

int main(int argc, char* argv[])
{
	hash_tlm dut_tlm("hash TLM");

	sc_clock clk{"hash clk", sc_core::sc_time(20, sc_core::SC_NS)};
	hash_test_runner tr(clk);

	Simcontext::get().initialize();
	minikernel_step(); //0ns

	if(argc == 2) {
		if(strcmp(argv[1], "functional_tlm_basic") == 0) {
			functional_tlm_basic(dut_tlm);
		} else if(strcmp(argv[1], "functional_rtl_basic") == 0) {
			functional_rtl_basic(tr);
			// babytest(br);
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
	return 0;
}

