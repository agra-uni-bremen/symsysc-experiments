#include <klee_conf.h>
#include <map_tlm.h>
#include <systemc.h>
#include <tlm_utils/simple_initiator_socket.h>
#include <map/VSBTaskMap.h>
#include <map/VSBTaskMap___024root.h>
#include <simple_bus_rtl.h>

#ifndef __UCLIBC__
#warning "Not using uclibc"
#endif

#define AMOUNT 8
#define WRITE_BUS 0

static constexpr uint32_t mAddr = 0x00;
static constexpr uint32_t mWdat = 0x04;
static constexpr uint32_t mRdat = 0x08;
static constexpr uint32_t mWREn = 0x0c;
static constexpr uint32_t mapV = 0x10;
static constexpr uint32_t valid = 0x14;
static constexpr uint32_t ready = 0x18;

void map_reference(uint8_t vSize, int32_t *buf, uint32_t mappingVal)
{
	for (unsigned i = 0; i < vSize; ++i)
	{
		buf[i] = (buf[i] & mappingVal) + 19;
	}
}

void tlm_write(map_tlm &tlm, uint32_t address, uint8_t *val) {
	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(address); // valid
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(val);
	tlm.transport(pl, delay);
}

struct functional_tlm_basic : public sc_core::sc_module {
	map_tlm &tlm;

	tlm_utils::simple_initiator_socket<functional_tlm_basic> isock;

	bool test_done = false;

	SC_HAS_PROCESS(functional_tlm_basic);
	functional_tlm_basic(sc_core::sc_module_name name, map_tlm &tlm)
		: sc_module(name), tlm(tlm) {
		isock.bind(tlm.tsock);

		SC_THREAD(run);
	};

	void run() {
		uint32_t wdat[AMOUNT];
		klee_make_symbolic(wdat, sizeof(wdat), "write data");
		uint32_t map_val = klee_int("mapping value");
		tlm.mapV = map_val;

		uint32_t enable = 1;
		for(int i=0;i<AMOUNT;++i) {
			tlm.mAddr = i;
			tlm.mWdat = wdat[i];
			tlm_write(tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
		}

		uint32_t valid_val = 1;
		tlm_write(tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

		wait(tlm.irq);
		assert(tlm.ready == 1);

		int32_t ref_vals[AMOUNT];
		for(int i=0;i<AMOUNT;++i) {
			ref_vals[i] = (int32_t)wdat[i];
		}
		map_reference(AMOUNT, ref_vals, map_val);
		for(int i=0;i<AMOUNT;++i) {
			tlm_write(tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
			assert(tlm.mRdat == ref_vals[i]);
		}
		test_done = true;
	}
};

struct functional_rtl_basic : public sc_core::sc_module {
	VSBTaskMap rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(functional_rtl_basic);
	functional_rtl_basic(sc_core::sc_module_name name, sc_clock &clock)
		: sc_core::sc_module(name), rtl{"map_rtl"}, clock(clock), bus(clock) {
		rtl.clk(clock);

		irq = false;
		rtl.io_irq(irq);
		rtl.reset(idle_reset);

		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);

		SC_THREAD(run);
	}

	void run() {
		uint32_t wdat[AMOUNT];
		klee_make_symbolic(wdat, sizeof(wdat), "write data");
//		uint32_t wdat[] = {0,1,2,3,4,5,6,7};
		uint32_t map_val = klee_int("mapping value");

#if WRITE_BUS == 1
		bus.write(mapV, map_val);
#else
		rtl.rootp->SBTaskMap__DOT__regMappingVal = map_val;
#endif

		uint32_t wen = 1;
		for(int i=0;i<AMOUNT;++i) {
			bus.write(mAddr, i);
#if WRITE_BUS == 1
			bus.write(mWdat, wdat[i]);
#else
			rtl.rootp->SBTaskMap__DOT__regWData = wdat[i];
#endif
			bus.write(mWREn, wen);
		}

		uint32_t valid_val = 1;
		bus.write(valid, valid_val);

		wait(irq.posedge_event());

		int32_t ref_vals[AMOUNT];
		for(int i=0;i<AMOUNT;++i) {
			ref_vals[i] = (int32_t)wdat[i];
		}
		map_reference(AMOUNT, ref_vals, map_val);
		for(int i=0;i<AMOUNT;++i) {
			bus.write(mAddr, i);
			uint32_t bus_res = bus.read(mRdat);
			assert(bus_res == ref_vals[i]);
		}

		test_done = true;
		sc_stop();
	}
};

struct comparison_basic : public sc_core::sc_module {
	VSBTaskMap rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	map_tlm &tlm;

	tlm_utils::simple_initiator_socket<comparison_basic> isock;

	bool test_done = false;

	SC_HAS_PROCESS(comparison_basic);
	comparison_basic(sc_core::sc_module_name name, sc_clock &clock, map_tlm &tlm) : sc_module(name), clock(clock), tlm(tlm), rtl{"map_rtl"}, bus(clock) {
		rtl.clk(clock);

		irq = false;
		rtl.io_irq(irq);
		rtl.reset(idle_reset);

		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);

		isock.bind(tlm.tsock);

		SC_THREAD(run);
	}

	void run() {
		uint32_t wdat[AMOUNT];
		klee_make_symbolic(wdat, sizeof(wdat), "write data");
		uint32_t map_val = klee_int("mapping value");

		// TLM
		tlm.mapV = map_val;

		uint32_t enable = 1;
		for(int i=0;i<AMOUNT;++i) {
			tlm.mAddr = i;
			tlm.mWdat = wdat[i];
			tlm_write(tlm, mWREn, reinterpret_cast<uint8_t *>(&enable));
		}

		uint32_t valid_val = 1;
		tlm_write(tlm, valid, reinterpret_cast<uint8_t *>(&valid_val));

		wait(tlm.irq);
		assert(tlm.ready == 1);

		uint32_t tlm_res[AMOUNT];
		for(int i=0;i<AMOUNT;++i) {
			tlm_write(tlm, mAddr, reinterpret_cast<uint8_t *>(&i));
			tlm_res[i] = tlm.mRdat;
		}

		// RTL
#if WRITE_BUS == 1
		bus.write(mapV, map_val);
#else
		rtl.rootp->SBTaskMap__DOT__regMappingVal = map_val;
#endif

		uint32_t wen = 1;
		for(int i=0;i<AMOUNT;++i) {
			bus.write(mAddr, i);
#if WRITE_BUS == 1
			bus.write(mWdat, wdat[i]);
#else
			rtl.rootp->SBTaskMap__DOT__regWData = wdat[i];
#endif
			bus.write(mWREn, wen);
		}

		bus.write(valid, valid_val);

		wait(irq.posedge_event());

		for(int i=0;i<AMOUNT;++i) {
			bus.write(mAddr, i);
			uint32_t bus_res = bus.read(mRdat);
			assert(bus_res == tlm_res[i]);
		}

		test_done = true;
		sc_stop();
	}
};

struct interface_tlm_write : public sc_core::sc_module {
	map_tlm& tlm;

	tlm_utils::simple_initiator_socket<interface_tlm_write> isock;

	bool test_done = false;

	SC_HAS_PROCESS(interface_tlm_write);
	interface_tlm_write(sc_core::sc_module_name name, map_tlm& dut) : sc_module(name), tlm(dut) {

		isock.bind(dut.tsock);
		SC_THREAD(run);
	}

	void run() {
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

		tlm.transport(pl, delay);

		assert(tlm.mRdat==0);
		assert(tlm.ready==0);

		uint8_t adrm = address % 4;
		if(data_length > 0 && data_length+adrm<=4) {
			uint32_t adrc = address - adrm;
			if(adrc == mapV) {
				assert(memcmp(((unsigned char*)&tlm.mapV)+adrm, data, data_length)==0);
			} else {
				assert(tlm.mapV==0);
			}
			if(adrc == mAddr && adrm == 0) {
				uint32_t datacp = data[0];
				datacp = datacp&0b111;
				assert(tlm.mAddr == datacp);
			} else {
				assert(tlm.mAddr==0);
			}
			if(adrc == mWdat) {
				assert(memcmp(((unsigned char*)&tlm.mWdat)+adrm, data, data_length)==0);
			} else {
				assert(tlm.mWdat==0);
			}
			if(adrc == valid) {
				assert(memcmp(((unsigned char*)&tlm.valid)+adrm, data, data_length)==0);
			} else {
				assert(tlm.valid==0);
			}
			if(adrc == mWREn) {
				assert(memcmp(((unsigned char*)&tlm.mWREn)+adrm, data, data_length)==0);
			} else {
				assert(tlm.mWREn==0);
			}
		} else {
			assert(tlm.mapV==0);
			assert(tlm.mAddr==0);
			assert(tlm.mWdat==0);
			assert(tlm.valid==0);
			assert(tlm.mWREn==0);
		}

		test_done = true;
	}
};

struct interface_tlm_read : public sc_core::sc_module {
	map_tlm& tlm;

	tlm_utils::simple_initiator_socket<interface_tlm_read> isock;

	bool test_done = false;

	SC_HAS_PROCESS(interface_tlm_read);
	interface_tlm_read(sc_core::sc_module_name name, map_tlm& dut) : sc_module(name), tlm(dut) {

		isock.bind(dut.tsock);
		SC_THREAD(run);
	}

	void run() {
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
		tlm.transport(pl, delay);

		assert(tlm.mAddr==0);
		assert(tlm.mWdat==0);
		assert(tlm.mRdat==0);
		assert(tlm.mWREn==0);
		assert(tlm.mapV==0);
		assert(tlm.valid==0);
		assert(tlm.ready==0);

		test_done = true;
	}
};

struct interface_rtl_write : public sc_core::sc_module {
	VSBTaskMap rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(interface_rtl_write);
	interface_rtl_write(sc_core::sc_module_name name, sc_clock &clock)
			: sc_core::sc_module(name), rtl{"map_rtl"}, clock(clock), bus(clock) {
		rtl.clk(clock);

		irq = false;
		rtl.io_irq(irq);
		rtl.reset(idle_reset);

		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);
		SC_THREAD(run);
	}

	void run() {
		uint32_t address = klee_int("address");
		uint32_t value = klee_int("value");

		wait(clock.negedge_event());
		bus.sel = true;
		bus.SBaddress = address;
		bus.SBvalid = true;
		bus.SBwdata = value;
		bus.SBwrite = true;
		wait(clock.posedge_event());
		wait(clock.negedge_event());

		if((address&0xFF) == valid)
			assert(rtl.rootp->SBTaskMap__DOT__regValid == (value==1));
		else
			assert(rtl.rootp->SBTaskMap__DOT__regValid == 0);

		if((address&0xFF) == mWREn)
			assert(rtl.rootp->SBTaskMap__DOT__regWREna == (value==1));
		else
			assert(rtl.rootp->SBTaskMap__DOT__regWREna == 0);

		if((address&0xFF) == mAddr) {
			assert(rtl.rootp->SBTaskMap__DOT__regAddr == (value&0b111));
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regAddr == 0);
		}
		if((address&0xFF) == mapV) {
			assert(rtl.rootp->SBTaskMap__DOT__regMappingVal == value);
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regMappingVal == 0);
		}
		if((address&0xFF) == mWdat) {
			assert(rtl.rootp->SBTaskMap__DOT__regWData == value);
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regWData == 0);
		}

		assert(rtl.rootp->SBTaskMap__DOT__regReadyBuf == 0);

		bus.SBvalid = false;
		bus.sel = false;
		wait(clock.posedge_event());

		assert(rtl.rootp->SBTaskMap__DOT__regValid == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regWREna == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regReadyBuf == 0);


		if((address&0xFF) == mAddr) {
			assert(rtl.rootp->SBTaskMap__DOT__regAddr == (value&0b111));
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regAddr == 0);
		}
		if((address&0xFF) == mapV) {
			assert(rtl.rootp->SBTaskMap__DOT__regMappingVal == value);
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regMappingVal == 0);
		}
		if((address&0xFF) == mWdat) {
			assert(rtl.rootp->SBTaskMap__DOT__regWData == value);
		} else {
			assert(rtl.rootp->SBTaskMap__DOT__regWData == 0);
		}

		test_done = true;
	}
};

struct interface_rtl_read : public sc_core::sc_module {
	VSBTaskMap rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(interface_rtl_read);
	interface_rtl_read(sc_core::sc_module_name name, sc_clock &clock)
			: sc_core::sc_module(name), rtl{"map_rtl"}, clock(clock), bus(clock) {
		rtl.clk(clock);

		irq = false;
		rtl.io_irq(irq);
		rtl.reset(idle_reset);

		rtl.io_sel(bus.sel);
		rtl.io_sb_SBaddress(bus.SBaddress);
		rtl.io_sb_SBvalid(bus.SBvalid);
		rtl.io_sb_SBwdata(bus.SBwdata);
		rtl.io_sb_SBwrite(bus.SBwrite);
		rtl.io_sb_SBsize(bus.SBsize);
		rtl.io_sb_SBready(bus.SBready);
		rtl.io_sb_SBrdata(bus.SBrdata);
		SC_THREAD(run);

		SC_METHOD(assertRegs);
		sensitive << clock.negedge_event();
		sensitive << clock.posedge_event();
	}

	void assertRegs() {
		assert(rtl.rootp->SBTaskMap__DOT__regValid == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regAddr == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regWREna == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regReadyBuf == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regMappingVal == 0);
		assert(rtl.rootp->SBTaskMap__DOT__regWData == 0);
	}

	void run() {
		uint32_t address = klee_int("address");

		bus.read(address);

		test_done = true;
	}
};

int sc_main(int argc, char* argv[])
{

	if(argc == 2)
	{
		if(strcmp(argv[1], "functional_tlm_basic") == 0)
		{
			map_tlm tlm("map_tlm");
			functional_tlm_basic testbench("name", tlm);
			sc_start();
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "functional_rtl_basic") == 0)
		{
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			functional_rtl_basic testbench("name", clk);
			sc_start(sc_time(1890,sc_core::SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "comparison_basic") == 0)
		{
			map_tlm tlm("map_tlm");
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			comparison_basic testbench("name", clk, tlm);
			sc_start(sc_time(1890,sc_core::SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_tlm_write") == 0)
		{
			map_tlm tlm("map_tlm");
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_tlm_write testbench("name", tlm);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_tlm_read") == 0)
		{
			map_tlm tlm("map_tlm");
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_tlm_read testbench("name", tlm);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_rtl_write") == 0)
		{
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_rtl_write testbench("name", clk);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_rtl_read") == 0)
		{
			sc_clock clk{"map_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_rtl_read testbench("name", clk);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
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
