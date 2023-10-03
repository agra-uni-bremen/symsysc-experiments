
#include <stdint.h>
#include <gcd_tlm.h>
#include <gcd_rtl.h>

static constexpr uint32_t addrA = 0x00;
static constexpr uint32_t addrB = 0x04;
static constexpr uint32_t addrRes = 0x08;
static constexpr uint32_t addrReady = 0x0c;
static constexpr uint32_t addrValid = 0x10;


struct test_runner : public sc_module {
	GcdRtlWrapper& m_dut;
	sc_clock& m_clock;
	int neg = 0;

	int read_time = -1;
	int write_time = -1;
	uint64_t rw_address;
	uint8_t *rw_data;
	unsigned rw_num_bytes;

	uint32_t read_value = 0;
	uint32_t read_result = 0;

	bool result_ready = false;

	test_runner(sc_clock& clock, GcdRtlWrapper& dut) : sc_module("test_runner"), m_dut(dut),m_clock(clock) {
		SC_HAS_PROCESS(test_runner);
		SC_METHOD(run);
		sensitive << m_clock.negedge_event();
		dont_initialize();

		SC_METHOD(resultReady);
		sensitive << m_dut.irq.posedge_event();
		dont_initialize();
	}

	void call_read_easy(uint64_t address) {
		call_read(address, reinterpret_cast<uint8_t *>(&read_value), sizeof(uint32_t));
	}

	void call_read(uint64_t address, uint8_t *data, unsigned num_bytes) {
		if(read_time == -1 && write_time == -1) {
			read_time = neg+1;
			rw_address = address;
			rw_data = data;
			rw_num_bytes = num_bytes;
		}
		else {
			INFO(std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl);
		}
	}

	void call_write(uint64_t address, uint8_t *data, unsigned num_bytes) {
		if(read_time == -1 && write_time == -1) {
			write_time = neg + 1;
			rw_address = address;
			rw_data = data;
			rw_num_bytes = num_bytes;
		}
		else {
			INFO(std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl);
		}
	}

private:
	void read() {
		tlm::tlm_generic_payload trans;
		trans.set_command(tlm::TLM_READ_COMMAND);
		trans.set_address(rw_address);
		trans.set_data_ptr(rw_data);
		trans.set_data_length(rw_num_bytes);

		auto delay = sc_core::sc_time(0, sc_core::SC_NS);
		m_dut.transport(trans, delay);
	}

	void write() {
		tlm::tlm_generic_payload trans;
		trans.set_command(tlm::TLM_WRITE_COMMAND);
		trans.set_address(rw_address);
		trans.set_data_ptr(rw_data);
		trans.set_data_length(rw_num_bytes);

		auto delay = sc_core::sc_time(0, sc_core::SC_NS);
		m_dut.transport(trans, delay);
	}

	void resultReady() {
		result_ready = true;
		call_read_easy(addrRes);
	}

	void run() {
		neg++;

		if(neg == read_time) { // call read on negedge
			read();
		}
		else if(neg == read_time+1) { // read from read_address: part 2
			read_result = m_dut.r2(rw_address);
			read_time = -1;
		}
		else if(neg == write_time) {
			write();
		}
		else if(neg == write_time+1) {
			m_dut.w2();
			write_time = -1;
		}
	}
};

void functional_tlm_basic(gcd_tlm &dut_tlm) {
	uint32_t a = 6;
	uint32_t b = 12;
//	uint32_t a = klee_int("a");
//	uint32_t b = klee_int("b");

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
	assert(dut_tlm.res == gcd(a, b));

	uint32_t res;
	pl.set_read();
	pl.set_address(addrRes);
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
	dut_tlm.transport(pl, delay);

	assert(!dut_tlm.ready);
}

void functional_rtl_basic(GcdRtlWrapper &dut_rtl, test_runner &tr) {
	uint32_t a = 1000;
	uint32_t b = 3124;
//	uint32_t a = klee_int("a");
//	uint32_t b = klee_int("b");

	tr.call_write(addrA, reinterpret_cast<uint8_t *>(&a), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, reinterpret_cast<uint8_t *>(&b), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	uint32_t valid = 1;
	tr.call_write(addrValid, reinterpret_cast<uint8_t *>(&valid), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	while(!tr.result_ready) {
		minikernel_step();
	}
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tr.read_result == gcd(a,b));
}

void comparison_basic(gcd_tlm &dut_tlm, GcdRtlWrapper &dut_rtl, test_runner &tr) {
	uint32_t a = 6;
	uint32_t b = 12;
//	uint32_t a = klee_int("a");
//	uint32_t b = klee_int("b");

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

	uint32_t res;
	pl.set_read();
	pl.set_address(addrRes);
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
	dut_tlm.transport(pl, delay);

	// RTL
	tr.call_write(addrA, reinterpret_cast<uint8_t *>(&a), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, reinterpret_cast<uint8_t *>(&b), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrValid, reinterpret_cast<uint8_t *>(&valid), sizeof(uint32_t));
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	while(!tr.result_ready) {
		minikernel_step();
	}
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}

	assert(tlm_res == tr.read_result);
}

int main(int argc, char* argv[])
{
	gcd_tlm dut_tlm("GCD TLM");

	sc_clock clk{"gcd clk", sc_core::sc_time(20, sc_core::SC_NS)};
	GcdRtlWrapper dut_rtl("gcd rtl", clk);
	test_runner tr = test_runner(clk, dut_rtl);

	Simcontext::get().initialize();
	minikernel_step(); //0ns

	if(argc == 2) {
		if(strcmp(argv[1], "functional_tlm_basic") == 0) {
			functional_tlm_basic(dut_tlm);
		} else if(strcmp(argv[1], "functional_rtl_basic") == 0) {
			functional_rtl_basic(dut_rtl,tr);
		} else if(strcmp(argv[1], "comparison_basic") == 0) {
			comparison_basic(dut_tlm,dut_rtl,tr);
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

