
#include <stdint.h>
#include <testrunner.h>
#include <hash_tlm.h>
#include <hash/VSBTaskHash.h>
#include <hash/VSBTaskHash___024root.h>

#define READ_BUS 1
#define WRITE_BUS 0

static constexpr uint32_t addrA = 0x00;
static constexpr uint32_t addrB = 0x04;
static constexpr uint32_t addrRes = 0x08;
static constexpr uint32_t addrReady = 0x0c;
static constexpr uint32_t addrValid = 0x10;


int32_t hash_reference(int32_t a, int32_t b)
{
	int32_t a2 = a;
	int32_t b2 = b;
	int32_t x;
	int32_t y;
	int32_t hash = 17;
	for (int i = 0; i < 8; ++i)
	{
		x = a2;
		y = b2;
		hash = hash * 23 + (x ^ ((y << 13) | (y >> 19)));
		a2 = hash;
		hash = hash * 23 + (y ^ ((x << 7) | (x >> 25)));
		b2 = hash;
	}
	return hash;
}


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
#if READ_BUS==0
		result = m_dut.rootp->SBTaskHash__DOT__regHashBuf;
#endif
	}
};

void functional_rtl_basic(hash_test_runner &tr) {
	uint32_t a = klee_int("a");
	uint32_t b = klee_int("b");

#if WRITE_BUS == 1
	tr.call_write(addrA, a);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, b);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
#else
	tr.m_dut.rootp->SBTaskHash__DOT__regA = a;
	tr.m_dut.rootp->SBTaskHash__DOT__regB = b;
#endif
	uint32_t valid = 1;
	tr.call_write(addrValid, valid);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	for(unsigned i=0;i<52;i++){
		minikernel_step();
	}
	assert(tr.result_ready);
#if READ_BUS==0
	assert(tr.result == hash_reference(a,b));
#else
	tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}
	assert(tr.rw_value == hash_reference(a,b));
#endif
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
	assert(dut_tlm.hash == hash_reference(a, b));

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

	minikernel_step();
	// RTL
#if WRITE_BUS == 1
	tr.call_write(addrA, a);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
	tr.call_write(addrB, b);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}
#else
	tr.m_dut.rootp->SBTaskHash__DOT__regA = a;
	tr.m_dut.rootp->SBTaskHash__DOT__regB = b;
#endif
	tr.call_write(addrValid, valid);
	for(int i=0;i<4;i++) { // process write
		minikernel_step();
	}

	for(int i=0;i<52;i++) {
		minikernel_step();
	}
	assert(tr.result_ready);
#if READ_BUS==0
	assert(tr.result == tlm_res);
#else
	tr.call_read(addrRes);
	for(int i=0;i<4;i++) { // process read
		minikernel_step();
	}
	assert(tlm_res == tr.rw_value);
#endif
}

void interface_tlm_write(hash_tlm &dut_tlm) {
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

	assert(dut_tlm.ready==0);
	assert(dut_tlm.hash==0);

	uint8_t adrm = address % 4;
	if(data_length+adrm<=4) {
		uint32_t adrc = address - adrm;
		if(adrc == addrA) {
			assert(memcmp(((unsigned char*)&dut_tlm.a)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.a==0);
		}
		if(adrc == addrB) {
			assert(memcmp(((unsigned char*)&dut_tlm.b)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.b==0);
		}
		if(adrc == addrValid) {
			assert(memcmp(((unsigned char*)&dut_tlm.valid)+adrm, data, data_length)==0);
		} else {
			assert(dut_tlm.valid==0);
		}
	} else {
		assert(dut_tlm.a==0);
		assert(dut_tlm.b==0);
		assert(dut_tlm.valid==0);
	}
}

void interface_tlm_read(hash_tlm &dut_tlm) {
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

	assert(dut_tlm.a==0);
	assert(dut_tlm.b==0);
	assert(dut_tlm.valid==0);
	assert(dut_tlm.ready==0);
	assert(dut_tlm.hash==0);
}

void interface_rtl_write(hash_test_runner &tr) {
	uint32_t address = klee_int("address");
	uint32_t value = klee_int("value");

	tr.call_write(address, value);
	for(unsigned i=0;i<3;++i) {
		minikernel_step();
	}

	assert(tr.m_dut.rootp->SBTaskHash__DOT__regReadyBuf == 0);
	assert(tr.m_dut.rootp->SBTaskHash__DOT__regHashBuf == 0);

	if((address&0xFF) == addrValid)
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regValid == (value==1));
	else
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regValid == 0);
	if((address&0xFF) == addrA) {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regA == value);
	} else {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regA == 0);
	}
	if((address&0xFF) == addrB) {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regB == value);
	} else {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regB == 0);
	}

	minikernel_step();

	assert(tr.m_dut.rootp->SBTaskHash__DOT__regValid == 0);
	assert(tr.m_dut.rootp->SBTaskHash__DOT__regReadyBuf == 0);
	assert(tr.m_dut.rootp->SBTaskHash__DOT__regHashBuf == 0);

	if((address&0xFF) == addrA) {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regA == value);
	} else {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regA == 0);
	}
	if((address&0xFF) == addrB) {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regB == value);
	} else {
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regB == 0);
	}
}

void interface_rtl_read(hash_test_runner &tr) {
	uint32_t address = klee_int("address");

	tr.call_read(address);
	for(unsigned i=0;i<4;++i) {
		minikernel_step();
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regReadyBuf == 0);
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regValid == 0);
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regA == 0);
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regB == 0);
		assert(tr.m_dut.rootp->SBTaskHash__DOT__regHashBuf == 0);
	}
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

