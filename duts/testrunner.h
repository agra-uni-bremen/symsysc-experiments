#include <systemc.h>
#include <simple_bus_rtl.h>

struct test_runner : public sc_module {
	SimpleBusRtl m_bus;
	sc_clock& m_clock;

	int neg = 0;
	int read_time = -1;
	int write_time = -1;

	uint64_t rw_address = 0;
	uint32_t rw_value = 0;

	SC_HAS_PROCESS(test_runner);
	test_runner(sc_clock& clock);

	void call_read(uint64_t address);
	void call_write(uint64_t address, uint32_t value);

protected:
	virtual void run();
};
