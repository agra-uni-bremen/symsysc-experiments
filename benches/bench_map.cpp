
#include <stdint.h>
#include <map_tlm.h>
#include <map/VSBTaskMap.h>
#include <map/VSBTaskMap___024root.h>
#include <simple_bus_rtl.h>
#include <testrunner.h>

static constexpr uint32_t mAddr = 0x00;
static constexpr uint32_t mWdat = 0x04;
static constexpr uint32_t mRdat = 0x08;
static constexpr uint32_t mWREn = 0x0c;
static constexpr uint32_t mapV = 0x10;
static constexpr uint32_t valid = 0x14;
static constexpr uint32_t ready = 0x18;


struct map_test_runner : public test_runner {
	VSBTaskMap map;
	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	uint32_t result;

	SC_HAS_PROCESS(map_test_runner);
	explicit map_test_runner(sc_clock& clock) : test_runner(clock), map{"map rtl"}, irq{"map rtl irq"} {
		map.clk(clock);

		irq = false;
		map.io_irq(irq);
		map.reset(idle_reset);

		map.io_sel(m_bus.sel);
		map.io_sb_SBaddress(m_bus.SBaddress);
		map.io_sb_SBvalid(m_bus.SBvalid);
		map.io_sb_SBwdata(m_bus.SBwdata);
		map.io_sb_SBwrite(m_bus.SBwrite);
		map.io_sb_SBsize(m_bus.SBsize);
		map.io_sb_SBready(m_bus.SBready);
		map.io_sb_SBrdata(m_bus.SBrdata);
	}

private:
	void run() override {
		neg++;

		if(neg == read_time) { // call read on negedge
			m_bus.r1(rw_address);
		}
		else if(neg == read_time+1) { // read from read_address: part 2
			result = map.rootp->SBTaskMap__DOT__sbDataOutputReg;
			read_time = -1;
		}
		else if(neg == write_time) {
			m_bus.w1(rw_address, rw_value);
		}
		else if(neg == write_time+1) {
			m_bus.w2();
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
	dut_tlm.mapV = map_val;

	uint32_t enable = 1;
	for(int i=0;i<8;i++) {
		dut_tlm.mAddr = i;
		dut_tlm.mWdat = wdat[i];

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

void functional_rtl_basic(map_test_runner &tr) {
//	uint32_t wdat[] = {1,2,3,4,5,6,7,8};
	uint32_t wdat[8];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");
//	uint32_t map_val = 10;
	uint32_t map_val = klee_int("mapping value");

	tr.call_write(mapV, map_val);
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	uint32_t wen = 1;
	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		tr.call_write(mWdat,wdat[i]);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		tr.call_write(mWREn, wen);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
	}

	uint32_t valid_val = 1;
	tr.call_write(valid, valid_val);
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<20;i++) {
		minikernel_step();
	}

	int32_t ref_vals[] = {(int32_t)wdat[0],(int32_t)wdat[1],(int32_t)wdat[2],(int32_t)wdat[3],(int32_t)wdat[4],(int32_t)wdat[5],(int32_t)wdat[6],(int32_t)wdat[7]};
	task_map_f(8, ref_vals, map_val);
	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) { // write address
			minikernel_step();
		}
		tr.call_read(mRdat);
		for (int j=0; j<4; j++) { // read
			minikernel_step();
		}
		assert(tr.result == ref_vals[i]);
	}

}

void comparison_basic(map_tlm &dut_tlm, map_test_runner &tr) {
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
	tr.call_write(mapV, map_val);
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		tr.call_write(mWdat, wdat[i]);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		tr.call_write(mWREn, enable);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
	}

	tr.call_write(valid, valid_val);
	for(int i=0;i<4;i++) {
		minikernel_step();
	}

	for(int i=0;i<20;i++) {
		minikernel_step();
	}

	for(int i=0;i<8;i++) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		tr.call_read(mRdat);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
		assert(tr.result == tlm_res[i]);
	}
}

int main(int argc, char* argv[])
{
	map_tlm dut_tlm("map TLM");

	sc_clock clk{"map clk", sc_core::sc_time(20, sc_core::SC_NS)};
	map_test_runner tr(clk);

	Simcontext::get().initialize();
	minikernel_step(); // 0ns

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
	return 0;
}

