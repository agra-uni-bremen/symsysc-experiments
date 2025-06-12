#include <klee_conf.h>
#include <gcd_tlm.h>
#include <gcd/VSBGCDCtrl.h>
#include <gcd/VSBGCDCtrl___024root.h>
#include <systemc.h>
#include <tlm_utils/simple_initiator_socket.h>
#include <simple_bus_rtl.h>

#ifndef __UCLIBC__
#warning "Not using uclibc...."
#endif

#define WRITE_BUS 0 // writing symbolic over bus can create more paths due to value comparison in sysc signal write

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

void tlm_write(gcd_tlm &tlm, uint32_t address, uint8_t *val) {
	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(address); // valid
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(val);
	tlm.transport(pl, delay);
}

struct functional_tlm_basic : public sc_core::sc_module {
	gcd_tlm& tlm;

	tlm_utils::simple_initiator_socket<functional_tlm_basic> isock;

	bool test_done = false;

	SC_HAS_PROCESS(functional_tlm_basic);
	functional_tlm_basic(sc_core::sc_module_name name, gcd_tlm& dut) : sc_module(name), tlm(dut) {

		isock.bind(dut.tsock);
		SC_THREAD(run);
	}

	void run() {
		uint32_t a = klee_int("a");
		uint32_t b = klee_int("b");
		tlm.a = a;
		tlm.b = b;

		uint32_t valid = 1;
		tlm_write(tlm, addrValid, reinterpret_cast<uint8_t *>(&valid));

		wait(tlm.irq);
		assert(tlm.res == gcd_euclid(a, b));

		uint32_t res;
		sc_core::sc_time delay;
		tlm::tlm_generic_payload pl;
		pl.set_read();
		pl.set_address(addrRes);
		pl.set_data_length(sizeof(uint32_t));
		pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
		tlm.transport(pl, delay);

		assert(!tlm.ready);
		test_done = true;
	}
};

struct functional_rtl_basic : public sc_core::sc_module {
	VSBGCDCtrl rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(functional_rtl_basic);
	functional_rtl_basic(sc_core::sc_module_name name, sc_clock &clock)
			: sc_core::sc_module(name), rtl{"gcd_rtl"}, clock(clock), bus(clock) {
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
		uint32_t a = klee_int("a");
		uint32_t b = klee_int("b");

#if WRITE_BUS == 1
		bus.write(addrA, a);
		bus.write(addrB, b);
#else
		rtl.rootp->SBGCDCtrl__DOT__regA = a;
		rtl.rootp->SBGCDCtrl__DOT__regB = b;
#endif

		uint32_t valid = 1;
		bus.write(addrValid, valid);

		wait(irq.posedge_event());

		uint32_t res = bus.read(addrRes);
		assert(res == gcd_euclid(a,b));

		test_done = true;
		sc_stop();
	}
};

struct comparison_basic : public sc_core::sc_module {
	VSBGCDCtrl rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	gcd_tlm &tlm;

	tlm_utils::simple_initiator_socket <comparison_basic> isock;

	bool test_done = false;

	SC_HAS_PROCESS(comparison_basic);
	comparison_basic(sc_core::sc_module_name name, sc_clock &clock, gcd_tlm &tlm) : sc_module(name), clock(clock), tlm(tlm), rtl{"gcd_rtl"}, bus(clock) {
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
		uint32_t a = klee_int("a");
		uint32_t b = klee_int("b");

		// TLM
		tlm.a = a;
		tlm.b = b;

		uint32_t valid = 1;
		tlm_write(tlm, addrValid, reinterpret_cast<uint8_t *>(&valid));

		wait(tlm.irq);
		uint32_t tlm_res = tlm.res;

		// RTL
#if WRITE_BUS == 1
		bus.write(addrA, a);
		bus.write(addrB, b);
#else
		rtl.rootp->SBGCDCtrl__DOT__regA = a;
		rtl.rootp->SBGCDCtrl__DOT__regB = b;
#endif

		bus.write(addrValid, valid);

		wait(irq.posedge_event());

		uint32_t res = bus.read(addrRes);
		assert(res == tlm_res);

		test_done = true;
		sc_stop();
	}
};

struct interface_tlm_write : public sc_core::sc_module {
	gcd_tlm& tlm;

	tlm_utils::simple_initiator_socket<interface_tlm_write> isock;

	bool test_done = false;

	SC_HAS_PROCESS(interface_tlm_write);
	interface_tlm_write(sc_core::sc_module_name name, gcd_tlm& dut) : sc_module(name), tlm(dut) {

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

		assert(tlm.ready==0);
		assert(tlm.res==0);

		uint8_t adrm = address % 4;
		if(data_length+adrm<=4) {
			uint32_t adrc = address - adrm;
			if(adrc == addrA) {
				assert(memcmp(((unsigned char*)&tlm.a)+adrm, data, data_length)==0);
			} else {
				assert(tlm.a==0);
			}
			if(adrc == addrB) {
				assert(memcmp(((unsigned char*)&tlm.b)+adrm, data, data_length)==0);
			} else {
				assert(tlm.b==0);
			}
			if(adrc == addrValid) {
				assert(memcmp(((unsigned char*)&tlm.valid)+adrm, data, data_length)==0);
			} else {
				assert(tlm.valid==0);
			}
		} else {
			assert(tlm.a==0);
			assert(tlm.b==0);
			assert(tlm.valid==0);
		}

		test_done = true;
	}
};

struct interface_tlm_read : public sc_core::sc_module {
	gcd_tlm& tlm;

	tlm_utils::simple_initiator_socket<interface_tlm_read> isock;

	bool test_done = false;

	SC_HAS_PROCESS(interface_tlm_read);
	interface_tlm_read(sc_core::sc_module_name name, gcd_tlm& dut) : sc_module(name), tlm(dut) {

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

		assert(tlm.a==0);
		assert(tlm.b==0);
		assert(tlm.valid==0);
		assert(tlm.ready==0);
		assert(tlm.res==0);

		test_done = true;
	}
};

struct interface_rtl_write : public sc_core::sc_module {
	VSBGCDCtrl rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(interface_rtl_write);
	interface_rtl_write(sc_core::sc_module_name name, sc_clock &clock)
	: sc_core::sc_module(name), rtl{"gcd_rtl"}, clock(clock), bus(clock) {
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

		if((address&0xFF) == addrValid)
			assert(rtl.rootp->SBGCDCtrl__DOT__regValid == (value==1));
		else
			assert(rtl.rootp->SBGCDCtrl__DOT__regValid == 0);

		if((address&0xFF) == addrA) {
			assert(rtl.rootp->SBGCDCtrl__DOT__regA == value);
		} else {
			assert(rtl.rootp->SBGCDCtrl__DOT__regA == 0);
		}
		if((address&0xFF) == addrB) {
			assert(rtl.rootp->SBGCDCtrl__DOT__regB == value);
		} else {
			assert(rtl.rootp->SBGCDCtrl__DOT__regB == 0);
		}
		assert(rtl.rootp->SBGCDCtrl__DOT__regReadyBuf == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regResBuf == 0);

		bus.SBvalid = false;
		bus.sel = false;
		wait(clock.posedge_event());

		assert(rtl.rootp->SBGCDCtrl__DOT__regReadyBuf == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regResBuf == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regValid == 0);

		if((address&0xFF) == addrA) {
			assert(rtl.rootp->SBGCDCtrl__DOT__regA == value);
		} else {
			assert(rtl.rootp->SBGCDCtrl__DOT__regA == 0);
		}
		if((address&0xFF) == addrB) {
			assert(rtl.rootp->SBGCDCtrl__DOT__regB == value);
		} else {
			assert(rtl.rootp->SBGCDCtrl__DOT__regB == 0);
		}

		test_done = true;
	}
};

struct interface_rtl_read : public sc_core::sc_module {
	VSBGCDCtrl rtl;
	SimpleBusRtl bus;
	sc_clock &clock;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq;

	bool test_done = false;

	SC_HAS_PROCESS(interface_rtl_read);
	interface_rtl_read(sc_core::sc_module_name name, sc_clock &clock)
	: sc_core::sc_module(name), rtl{"gcd_rtl"}, clock(clock), bus(clock) {
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
		assert(rtl.rootp->SBGCDCtrl__DOT__regReadyBuf == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regValid == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regA == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regB == 0);
		assert(rtl.rootp->SBGCDCtrl__DOT__regResBuf == 0);
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
			gcd_tlm tlm("gcd_tlm");
			functional_tlm_basic testbench("name", tlm);
			sc_start();
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "functional_rtl_basic") == 0)
		{
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			functional_rtl_basic testbench("name", clk);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "comparison_basic") == 0)
		{
			gcd_tlm tlm("gcd_tlm");
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			comparison_basic testbench("name", clk, tlm);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_tlm_write") == 0)
		{
			gcd_tlm tlm("gcd_tlm");
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_tlm_write testbench("name", tlm);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_tlm_read") == 0)
		{
			gcd_tlm tlm("gcd_tlm");
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_tlm_read testbench("name", tlm);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_rtl_write") == 0)
		{
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
			interface_rtl_write testbench("name", clk);
			sc_start(sc_time(1000,SC_NS));
			assert(testbench.test_done && "test case unexpectedly did not finish");
		} else if(strcmp(argv[1], "interface_rtl_read") == 0)
		{
			sc_clock clk{"gcd_clk", sc_core::sc_time(20, sc_core::SC_NS)};
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
