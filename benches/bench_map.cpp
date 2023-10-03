
#include <stdint.h>
#include <map_tlm.h>
#include <map_rtl.h>

static constexpr uint32_t mAddr = 0x00;
static constexpr uint32_t mWdat = 0x04;
static constexpr uint32_t mRdat = 0x08;
static constexpr uint32_t mWREn = 0x0c;
static constexpr uint32_t mapV = 0x10;
static constexpr uint32_t valid = 0x14;
static constexpr uint32_t ready = 0x18;


struct test_runner : public sc_module {
	MapRtlWrapper& m_dut;
	sc_clock& m_clock;
	int neg = 0;

	int read_time = -1;
	int write_time = -1;
	uint64_t rw_address;
	uint8_t *rw_data;
	unsigned rw_num_bytes;

	uint32_t read_value = 0;
	uint32_t read_result = 0;

	test_runner(sc_clock& clock, MapRtlWrapper& dut) : sc_module("test_runner"), m_dut(dut),m_clock(clock) {
		SC_HAS_PROCESS(test_runner);
		SC_METHOD(run);
		sensitive << m_clock.negedge_event();
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

void write_tlm(map_tlm &dut_tlm, uint32_t addr, uint8_t *val) {
	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(addr); // valid
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(val);
	dut_tlm.transport(pl, delay);

	minikernel_step();
}

void functional_tlm_basic(map_tlm &dut_tlm) {
//	uint32_t wdat[] = {1,2,3,4,5,6,7,8};
	uint32_t wdat[8];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");

//	uint32_t map_val = 7;
	uint32_t map_val = klee_int("mapping value");

	uint32_t enable = 1;
	for(int i=0;i<8;i++) {
		dut_tlm.mAddr = i;
		dut_tlm.mWdat = wdat[i];
		dut_tlm.mapV = map_val;

		write_tlm(dut_tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
	}

	uint32_t valid_val = 1;
	write_tlm(dut_tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

	assert(dut_tlm.ready == 1);

	int32_t ref_vals[] = {(int32_t)wdat[0],(int32_t)wdat[1],(int32_t)wdat[2],(int32_t)wdat[3],(int32_t)wdat[4],(int32_t)wdat[5],(int32_t)wdat[6],(int32_t)wdat[7]};
	task_map_f(8, ref_vals, map_val);
	for(int i=0;i<8;i++) {
		write_tlm(dut_tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
		assert(dut_tlm.mRdat == ref_vals[i]);
	}
}

void functional_rtl_basic(MapRtlWrapper &dut_rtl, test_runner &tr) {
//	uint32_t wdat[] = {1,2,3,4,5,6,7,8};
	uint32_t wdat[8];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");

//	uint32_t map_val = 10;
	uint32_t map_val = klee_int("mapping value");

	tr.call_write(mapV, reinterpret_cast<uint8_t *>(&map_val), sizeof(uint32_t ));
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	uint32_t wen = 1;
	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, reinterpret_cast<uint8_t *>(&i), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
		tr.call_write(mWdat, reinterpret_cast<uint8_t *>(&wdat[i]), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
		tr.call_write(mWREn, reinterpret_cast<uint8_t *>(&wen), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
	}

	uint32_t valid_val = 1;
	tr.call_write(valid, reinterpret_cast<uint8_t *>(&valid_val), sizeof(uint32_t));
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<20;i++) {
		minikernel_step();
	}

	int32_t ref_vals[] = {(int32_t)wdat[0],(int32_t)wdat[1],(int32_t)wdat[2],(int32_t)wdat[3],(int32_t)wdat[4],(int32_t)wdat[5],(int32_t)wdat[6],(int32_t)wdat[7]};
	task_map_f(8, ref_vals, map_val);
	for(int j=0;j<8;j++) {
		tr.call_write(mAddr, reinterpret_cast<uint8_t *>(&j), sizeof(uint32_t));
		for (int i = 0; i < 4; i++) { // write address
			minikernel_step();
		}
		tr.call_read_easy(mRdat);
		for (int i = 0; i < 4; i++) { // read
			minikernel_step();
		}
		assert(tr.read_result == ref_vals[j]);
	}
}

void comparison_basic(map_tlm &dut_tlm, MapRtlWrapper &dut_rtl, test_runner &tr) {
	// data
//	uint32_t wdat[] = {1,2,3,4,5,6,7,8};
	uint32_t wdat[8];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");

//	uint32_t map_val = 7;
	uint32_t map_val = klee_int("mapping value");

	// TLM
	uint32_t enable = 1;
	for(int i=0;i<8;i++) {
		dut_tlm.mAddr = i;
		dut_tlm.mWdat = wdat[i];
		dut_tlm.mapV = map_val;

		write_tlm(dut_tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
	}

	uint32_t valid_val = 1;
	write_tlm(dut_tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

	assert(dut_tlm.ready == 1);

	uint32_t tlm_res[8];
	for(int i=0;i<8;i++) {
		write_tlm(dut_tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
		tlm_res[i] = dut_tlm.mRdat;
	}

	// RTL
	tr.call_write(mapV, reinterpret_cast<uint8_t *>(&map_val), sizeof(uint32_t ));
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, reinterpret_cast<uint8_t *>(&i), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
		tr.call_write(mWdat, reinterpret_cast<uint8_t *>(&wdat[i]), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
		tr.call_write(mWREn, reinterpret_cast<uint8_t *>(&enable), sizeof(uint32_t));
		for (int j = 0; j < 4; j++) {
			minikernel_step();
		}
	}

	tr.call_write(valid, reinterpret_cast<uint8_t *>(&valid_val), sizeof(uint32_t));
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<20;i++) {
		minikernel_step();
	}

	for(int j=0;j<8;j++) {
		tr.call_write(mAddr, reinterpret_cast<uint8_t *>(&j), sizeof(uint32_t));
		for (int i = 0; i < 4; i++) { // write address
			minikernel_step();
		}
		tr.call_read_easy(mRdat);
		for (int i = 0; i < 4; i++) { // read
			minikernel_step();
		}
		assert(tr.read_result == tlm_res[j]);
	}
}

int main(int argc, char* argv[])
{
	map_tlm dut_tlm("map TLM");

	sc_clock clk{"map clk", sc_core::sc_time(20, sc_core::SC_NS)};
	MapRtlWrapper dut_rtl("map rtl", clk);
	test_runner tr = test_runner(clk,dut_rtl);

	Simcontext::get().initialize();
	minikernel_step(); // 0ns

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
	return 0;
}

