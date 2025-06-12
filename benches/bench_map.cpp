
#include <stdint.h>
#include <testrunner.h>
#include <map_tlm.h>
#include <map/VSBTaskMap.h>
#include <map/VSBTaskMap___024root.h>
#include <simple_bus_rtl.h>

static constexpr uint32_t mAddr = 0x00;
static constexpr uint32_t mWdat = 0x04;
static constexpr uint32_t mRdat = 0x08;
static constexpr uint32_t mWREn = 0x0c;
static constexpr uint32_t mapV = 0x10;
static constexpr uint32_t valid = 0x14;
static constexpr uint32_t ready = 0x18;

#define AMOUNT 8
#define WRITE_BUS 0

void map_reference(uint8_t vSize, int32_t *buf, uint32_t mappingVal)
{
	for (unsigned i = 0; i < vSize; ++i)
	{
		buf[i] = (buf[i] & mappingVal) + 19;
	}
}


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
			result = m_bus.r2(); //map.rootp->SBTaskMap__DOT__sbDataOutputReg;
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

	//minikernel_step();
}

void functional_tlm_basic(map_tlm &dut_tlm) {
	uint32_t wdat[AMOUNT];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");

	uint32_t map_val = klee_int("mapping value");
	dut_tlm.mapV = map_val;

	uint32_t enable = 1;
	for(int i=0;i<AMOUNT;++i) {
		dut_tlm.mAddr = i;
		dut_tlm.mWdat = wdat[i];

		write_tlm(dut_tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
	}

	uint32_t valid_val = 1;
	write_tlm(dut_tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

	minikernel_step();
	assert(dut_tlm.ready == 1);

	int32_t ref_vals[AMOUNT];
	for(int i=0;i<AMOUNT;++i) {
		ref_vals[i] = (int32_t)wdat[i];
	}
	map_reference(AMOUNT, ref_vals, map_val);
	for(int i=0;i<AMOUNT;++i) {
		write_tlm(dut_tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
		assert(dut_tlm.mRdat == ref_vals[i]);
	}
}

void functional_rtl_basic(map_test_runner &tr) {
	uint32_t wdat[AMOUNT];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");
//	uint32_t wdat[] = {0,1,2,3,4,5,6,7};
	uint32_t map_val = klee_int("mapping value");

#if WRITE_BUS == 1
	tr.call_write(mapV, map_val);
	for(int i=0;i<4;++i) {
		minikernel_step();
	}
#else
	tr.map.rootp->SBTaskMap__DOT__regMappingVal = map_val;
#endif

	uint32_t wen = 1;
	for(int i=0;i<AMOUNT;++i) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
#if WRITE_BUS == 1
		tr.call_write(mWdat,wdat[i]);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
#else
		tr.map.rootp->SBTaskMap__DOT__regWData = wdat[i];
#endif
		tr.call_write(mWREn, wen);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
	}

	uint32_t valid_val = 1;
	tr.call_write(valid, valid_val);
	for(int i=0;i<4;++i) {
		minikernel_step();
	}

	for(int i=0;i<20;++i) {
		minikernel_step();
	}

	int32_t ref_vals[AMOUNT];
	for(int i=0;i<AMOUNT;++i) {
		ref_vals[i] = (int32_t)wdat[i];
	}
	map_reference(AMOUNT, ref_vals, map_val);
	for(int i=0;i<AMOUNT;++i) {
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
	uint32_t wdat[AMOUNT];
	klee_make_symbolic(wdat, sizeof(wdat), "write data");
//	uint32_t wdat[] = {0,1,2,3,4,5,6,7};
	uint32_t map_val = klee_int("mapping value");

	// TLM
	uint32_t enable = 1;
	for(int i=0;i<AMOUNT;++i) {
		dut_tlm.mAddr = i;
		dut_tlm.mWdat = wdat[i];
		dut_tlm.mapV = map_val;

		write_tlm(dut_tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
	}

	uint32_t valid_val = 1;
	write_tlm(dut_tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

	minikernel_step();
//	assert(dut_tlm.ready == 1);

	uint32_t tlm_res[AMOUNT];
	for(int i=0;i<AMOUNT;++i) {
		write_tlm(dut_tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
		tlm_res[i] = dut_tlm.mRdat;
	}

	// RTL
	minikernel_step();
#if WRITE_BUS == 1
	tr.call_write(mapV, map_val);
	for(int i=0;i<4;++i) {
		minikernel_step();
	}
#else
	tr.map.rootp->SBTaskMap__DOT__regMappingVal = map_val;
#endif

	for(int i=0;i<AMOUNT;++i) {
		tr.call_write(mAddr, i);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
#if WRITE_BUS == 1
		tr.call_write(mWdat,wdat[i]);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
#else
		tr.map.rootp->SBTaskMap__DOT__regWData = wdat[i];
#endif
		tr.call_write(mWREn, enable);
		for (int j=0; j<4; j++) {
			minikernel_step();
		}
	}

	tr.call_write(valid, valid_val);
	for(int i=0;i<4;++i) {
		minikernel_step();
	}

	for(int i=0;i<20;++i) {
		minikernel_step();
	}

	for(int i=0;i<AMOUNT;++i) {
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

void interface_tlm_write(map_tlm &dut_tlm) {
	uint32_t address = klee_int("address");

	unsigned constexpr max_data_length = 100;
	unsigned data_length = klee_int("data_length");
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];
	klee_make_symbolic(data, max_data_length, "write data");

	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(address);
	pl.set_data_length(data_length);
	pl.set_data_ptr(data);

	dut_tlm.transport(pl, delay);

	assert(dut_tlm.mRdat==0);
	assert(dut_tlm.ready==0);

	uint8_t adrm = address % 4;
	if(data_length > 0 && data_length+adrm<=4) {
		uint32_t adrc = address - adrm;
		if(adrc == mapV) {
			assert(memcmp(((unsigned char*)&dut_tlm.mapV)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.mapV==0);
		}
		if(adrc == mAddr && adrm == 0) {
			uint32_t datacp = data[0];
			datacp = datacp&0b111;
			assert(dut_tlm.mAddr == datacp);
		} else {
			assert(dut_tlm.mAddr==0);
		}
		if(adrc == mWdat) {
			assert(memcmp(((unsigned char*)&dut_tlm.mWdat)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.mWdat==0);
		}
		if(adrc == valid) {
			assert(memcmp(((unsigned char*)&dut_tlm.valid)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.valid==0);
		}
		if(adrc == mWREn) {
			assert(memcmp(((unsigned char*)&dut_tlm.mWREn)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.mWREn==0);
		}
	} else {
		assert(dut_tlm.mapV==0);
		assert(dut_tlm.mAddr==0);
		assert(dut_tlm.mWdat==0);
		assert(dut_tlm.valid==0);
		assert(dut_tlm.mWREn==0);
	}

	minikernel_step();
}

void interface_tlm_read(map_tlm &dut_tlm) {
	uint32_t address = klee_int("address");

	unsigned constexpr max_data_length = 100;
	unsigned data_length = klee_int("data_length");
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];

	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_read();
	pl.set_address(address);
	pl.set_data_length(data_length);
	pl.set_data_ptr(data);

	dut_tlm.transport(pl, delay);

	assert(dut_tlm.mAddr==0);
	assert(dut_tlm.mWdat==0);
	assert(dut_tlm.mRdat==0);
	assert(dut_tlm.mWREn==0);
	assert(dut_tlm.mapV==0);
	assert(dut_tlm.valid==0);
	assert(dut_tlm.ready==0);

	minikernel_step();
}

void interface_rtl_write(map_test_runner &tr) {
	uint32_t address = klee_int("address");
	uint32_t value = klee_int("value");

	tr.call_write(address, value);
	for(unsigned i=0;i<3;++i) {
		minikernel_step();
	}

	if((address&0xFF) == valid)
		assert(tr.map.rootp->SBTaskMap__DOT__regValid == (value==1));
	else
		assert(tr.map.rootp->SBTaskMap__DOT__regValid == 0);

	if((address&0xFF) == mWREn)
		assert(tr.map.rootp->SBTaskMap__DOT__regWREna == (value==1));
	else
		assert(tr.map.rootp->SBTaskMap__DOT__regWREna == 0);

	if((address&0xFF) == mAddr) {
		assert(tr.map.rootp->SBTaskMap__DOT__regAddr == (value&0b111));
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regAddr == 0);
	}
	if((address&0xFF) == mapV) {
		assert(tr.map.rootp->SBTaskMap__DOT__regMappingVal == value);
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regMappingVal == 0);
	}
	if((address&0xFF) == mWdat) {
		assert(tr.map.rootp->SBTaskMap__DOT__regWData == value);
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regWData == 0);
	}

	assert(tr.map.rootp->SBTaskMap__DOT__regReadyBuf == 0);

	minikernel_step();

	assert(tr.map.rootp->SBTaskMap__DOT__regValid == 0);
	assert(tr.map.rootp->SBTaskMap__DOT__regWREna == 0);
	assert(tr.map.rootp->SBTaskMap__DOT__regReadyBuf == 0);

	if((address&0xFF) == mAddr) {
		assert(tr.map.rootp->SBTaskMap__DOT__regAddr == (value&0b111));
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regAddr == 0);
	}
	if((address&0xFF) == mapV) {
		assert(tr.map.rootp->SBTaskMap__DOT__regMappingVal == value);
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regMappingVal == 0);
	}
	if((address&0xFF) == mWdat) {
		assert(tr.map.rootp->SBTaskMap__DOT__regWData == value);
	} else {
		assert(tr.map.rootp->SBTaskMap__DOT__regWData == 0);
	}
}

void interface_rtl_read(map_test_runner &tr) {
	uint32_t address = klee_int("address");

	tr.call_read(address);
	for(unsigned i=0;i<4;++i) {
		minikernel_step();
		assert(tr.map.rootp->SBTaskMap__DOT__regValid == 0);
		assert(tr.map.rootp->SBTaskMap__DOT__regAddr == 0);
		assert(tr.map.rootp->SBTaskMap__DOT__regWREna == 0);
		assert(tr.map.rootp->SBTaskMap__DOT__regReadyBuf == 0);
		assert(tr.map.rootp->SBTaskMap__DOT__regMappingVal == 0);
		assert(tr.map.rootp->SBTaskMap__DOT__regWData == 0);
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
		} else if(strcmp(argv[1], "interface_tlm_write") == 0) {
			interface_tlm_write(dut_tlm);
		} else if(strcmp(argv[1], "interface_tlm_read") == 0) {
			interface_tlm_read(dut_tlm);
		} else if(strcmp(argv[1], "interface_rtl_write") == 0) {
			interface_rtl_write(tr);
		} else if(strcmp(argv[1], "interface_rtl_read") == 0) {
			interface_rtl_read(tr);
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

