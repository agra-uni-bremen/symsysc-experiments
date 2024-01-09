
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


struct hash_basic : public sc_module {
	sc_in<uint32_t> io_sb_SBaddress;
	sc_in<uint32_t> io_sb_SBwdata;
	sc_out<uint32_t> io_sb_SBrdata;
	sc_in<bool> io_sb_SBvalid;
	sc_in<bool> io_sb_SBwrite;
	sc_in<uint32_t> io_sb_SBsize;
	sc_out<bool> io_sb_SBready;

	sc_in<bool> io_sel;
	
	sc_out<bool> io_irq;
	sc_in<bool> clk;
	
	sc_signal<uint32_t,SC_MANY_WRITERS> res_ugly;

	uint32_t a;
	uint32_t b;
	uint32_t res;
	bool has_res = false;

	SC_HAS_PROCESS(hash_basic);
	hash_basic() : sc_module("hash rtl basic")
	, io_sb_SBaddress("address")
	, io_sb_SBwdata("wdata")
	, io_sb_SBrdata("rdata")
	, io_sb_SBvalid()
	, io_sb_SBwrite()
	, io_sb_SBsize("size")
	, io_sb_SBready("ready")
	, io_sel()
	, io_irq("irq")
	, res_ugly{"result without sc out"}
	, clk() {
		a = 0;
		b = 0;
		res = 0;

		SC_METHOD(update);
		sensitive << io_sb_SBvalid;
		sensitive << clk;
	}

	void update() {
		if(io_sb_SBvalid.read()) {
			if (!has_res && io_sb_SBwrite.read() && io_sb_SBaddress.read() == 0x10 && io_sb_SBwdata.read() == 1) {
				res = task_hash_f(a, b);
				has_res = true;
				io_irq.write(true);
			} else if (io_sb_SBwrite.read() && io_sb_SBaddress.read() == 0x00) {
				a = io_sb_SBwdata.read();
			} else if (io_sb_SBwrite.read() && io_sb_SBaddress.read() == 0x04) {
				b = io_sb_SBwdata.read();
			} else if (!io_sb_SBwrite.read() && io_sb_SBaddress.read() == 0x08) {
				io_irq.write(false);
				//io_sb_SBrdata.write(res);
				io_sb_SBrdata.write(0);
				res_ugly.write(res);
			}
		}
	}
};

struct babyrunner : public sc_module {
	hash_basic m_dut;
	SimpleBusRtl m_bus;
	sc_clock& m_clock;
	
	int neg = 0;

	sc_signal<bool> irq;
	
	sc_in<uint32_t> res_ugly;

	bool result_ready = false;
	
	uint32_t a=0;
	uint32_t b=0;
	uint32_t res=0;

	SC_HAS_PROCESS(babyrunner);
	babyrunner(sc_clock& clock) : sc_module("baby runner"), m_clock(clock), m_bus(clock), m_dut(), res_ugly("res without sc out") {
		m_dut.clk(clock);

		irq = false;
		m_dut.io_irq(irq);

		m_dut.io_sel(m_bus.sel);
		m_dut.io_sb_SBaddress(m_bus.SBaddress);
		m_dut.io_sb_SBvalid(m_bus.SBvalid);
		m_dut.io_sb_SBwdata(m_bus.SBwdata);
		m_dut.io_sb_SBwrite(m_bus.SBwrite);
		m_dut.io_sb_SBsize(m_bus.SBsize);
		m_dut.io_sb_SBready(m_bus.SBready);
		m_dut.io_sb_SBrdata(m_bus.SBrdata);
		
		res_ugly(m_dut.res_ugly);
		
		SC_METHOD(resultUpdate);
		sensitive << res_ugly;
		dont_initialize();

		/*SC_METHOD(resultReady);
		sensitive << irq.posedge_event();
		dont_initialize();*/
		
		SC_METHOD(run);
		sensitive << m_clock.negedge_event();
		dont_initialize();
	}

private:

	void run() {
		neg++;
		if(neg == 1) { // write a
			//a = klee_int("testrunner a");
			m_bus.w1(0x00, a);
		} else if(neg == 2) { // write a pt 2
			m_bus.w2();
		} else if(neg == 3) { // write b
			//b = klee_int("testrunner b");
			m_bus.w1(0x04, b);
		} else if(neg == 4) { // write b pt 2
			m_bus.w2();
		} else if(neg == 5) { // write valid
			m_bus.w1(0x10, 1);
		} else if(neg == 6) { // write valid pt 2
			m_bus.w2();
		} else if(neg == 7) { // read res
			m_bus.r1(0x08);
		} else if(neg == 8) { // read res pt 2
			m_bus.r2();
			//res = m_bus.SBrdata.read();
			//assert(m_bus.r2()==task_hash_f(a,b));
		}
	}
	
	void resultUpdate() {
		res = res_ugly.read();
		assert(res == task_hash_f(a,b));
	}
	
	/*void resultReady() {
		result_ready = true;
		a = m_dut.a;
		b = m_dut.b;
		res = m_dut.res;
	}*/
};

void babytest(babyrunner& tr) {

	/*uint32_t a = 0;
	uint32_t b = 0;
//	uint32_t a = klee_int("a");
//	uint32_t b = klee_int("b");

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

	assert(tr.result_ready);
	tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tr.res == task_hash_f(tr.a,tr.b));*/
	for(int i=0;i<12;i++) {
		minikernel_step();
	}
	// assert ready
	for(int i=0;i<4;i++) {
		minikernel_step();
	}
	
}

/*
struct hash_test_runner : public sc_module {
	VSBTaskHash m_dut;
	SimpleBusRtl m_bus;
	sc_clock& m_clock;
	
	int neg=0;
	
	uint32_t a=0;
	uint32_t b=0;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool result_ready = false;

	SC_HAS_PROCESS(hash_test_runner);
	explicit hash_test_runner(sc_clock& clock) : sc_module("test runner"), m_clock(clock), m_bus(clock), m_dut{"rtl hash"} {
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
		
		SC_METHOD(run);
		sensitive << m_clock.negedge_event();
		dont_initialize();

		SC_METHOD(resultReady);
		sensitive << irq.posedge_event();
		dont_initialize();
	}

private:
	void run() {
		neg++;
		if(neg == 1) { // write a
			a = klee_int("testrunner a");
			m_bus.w1(0x00, a);
		} else if(neg == 2) { // write a pt 2
			m_bus.w2();
		} else if(neg == 3) { // write b
			b = klee_int("testrunner b");
			m_bus.w1(0x04, b);
		} else if(neg == 4) { // write b pt 2
			m_bus.w2();
		} else if(neg == 5) { // write valid
			m_bus.w1(0x10, 1);
		} else if(neg == 6) { // write valid pt 2
			m_bus.w2();
		} /*else if(neg == 7) { // read res
			m_bus.r1(0x08);
		} else if(neg == 8) { // read res pt 2
			m_bus.r2();
			//res = m_bus.SBrdata.read();
			//assert(m_bus.r2()==task_hash_f(a,b));
		}
	}
	
	void resultReady() {
		result_ready = true;
	}
};*/

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
/*
	for(int i=0;i<12;i++) {
		minikernel_step();
	}
	// done writing
	for(int i=0;i<52;i++) {
		minikernel_step();
	}
	assert(tr.result_ready);
	//std::cout << "survived" << std::endl;
*/
//	uint32_t a = 6;
//	uint32_t b = 24;
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
	//std::cout << "normal result: " << task_hash_f(a,b) << std::endl;
	
	
	/*for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tr.rw_value == task_hash_f(a,b));*/
}

void functional_tlm_basic(hash_tlm &dut_tlm) {
//	uint32_t a = 1000;
//	uint32_t b = 3124;
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

	uint32_t tlm_res = dut_tlm.hash;

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

	for(int i=0;i<52;i++) {
		minikernel_step();
	}
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

	//babyrunner br(clk);

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
	/*
	 *TODO:
	 * - Mehr Testfälle?
	 */
	return 0;
}

