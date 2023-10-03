//#include <klee_conf.h>
#include <systemc.h>
#include <plic_rtl.h>
#include <iostream>

static constexpr uint32_t numberInterrupts = 52; // TODO should be 53, I think?

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;

/*
 *TODO symbolic ID problem:
 * priority cannot be written due to RegisterRange vector size (fork failed)
 * same with interface_tests
 *
 * - Test case without setting enabled?
 */


struct test_runner : public sc_module {
	PlicRtlWrapper& m_dut;
	sc_clock& m_clock;
	int neg = 0;

	int read_time = -1;
	int write_time = -1;
	uint64_t rw_address;
	uint8_t *rw_data;
	unsigned rw_num_bytes;

	uint32_t read_value = 0;
	uint32_t read_result = 0;

	int interrupt_time = -1;
	uint32_t interrupt = numberInterrupts;
	uint32_t interrupt2 = numberInterrupts;

	test_runner(sc_clock& clock, PlicRtlWrapper& dut) : sc_module("test_runner"), m_dut(dut),m_clock(clock) {
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

	void trigger_interrupt(uint32_t id) {
		if(interrupt_time == -1) {
			interrupt_time = neg + 1;
			interrupt = id;
		} else {
			interrupt2 = id;
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
		} else if(neg == interrupt_time) {
			m_dut.gateway_trigger_interrupt(interrupt);
			if(interrupt2 != numberInterrupts) {
				m_dut.gateway_trigger_interrupt(interrupt2);
				interrupt2 = numberInterrupts;
			}
			interrupt_time = -1;
		}
	}
};

struct Simple_interrupt_target : public external_interrupt_target_rtl
{
	bool was_triggered = false;
	bool was_cleared = false;
	PlicRtlWrapper &dut;
	test_runner &runner;

	Simple_interrupt_target(PlicRtlWrapper& dut, test_runner &runner) : dut(dut), runner(runner) {};

	void trigger_external_interrupt(PrivilegeLevel level)
	{
		if(!was_triggered) {
			was_triggered = true;
			was_cleared = false;
			runner.call_read_easy(kPlicClaimReg);
		}
	};

	void clear_external_interrupt(PrivilegeLevel level)
	{
		was_cleared = true;
		if(was_triggered) {
			was_triggered = false;
		}
	};
};

void functional_test_basic(PlicRtlWrapper& dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	// test valid interrupt number
//	uint32_t id = 51;
	uint32_t id = klee_int("interrupt number");
	klee_assume(id > 0);
	klee_assume(id < numberInterrupts);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&prio_threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = 0;
	uint32_t enable_address = kPlicEnableReg;
	if(id > 0 && id < 32) { // enable lower
		enable = 1UL << id;
	} else if(id >= 32 && id <= 51) { // enable upper
		enable = 1UL << (id-32);
		enable_address += sizeof(uint32_t);
	}
	runner.call_write(enable_address, reinterpret_cast<uint8_t *>(&enable), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	uint32_t prio = 1;
	// TODO fork failed
	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.trigger_interrupt(id);
	minikernel_step(); // 130ns, trigger on negedge

	//Is the pending interrupts register changed?
	assert(dut.pendings_[id].read());

	auto before = Simcontext::get().getGlobalTime();
	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);

	minikernel_step(); // 160
	auto after = Simcontext::get().getGlobalTime();
	assert(after-before == sc_core::sc_time(30, sc_core::SC_NS));

	for(unsigned i=0;i<4;i++) {
		assert(sit.was_triggered);
		minikernel_step(); // 170ns - 200ns
	}
	assert(runner.read_result == id);

	runner.call_write(kPlicClaimReg, reinterpret_cast<uint8_t *>(&id), sizeof(uint32_t));
	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 210ns - 220ns
	}

	// was interrupt cleared by claiming?
	assert(sit.was_cleared && "Interrupt was not cleared after claim");
	assert(!sit.was_triggered);

	//The pending interrupt signals should be cleared after claim
	for(int i=0; i<dut.pendings_.size(); i++) { // heap use after free if using foreach
		assert(!dut.pendings_[i].read());
	}

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 230ns - 240ns, second part of write
	}
}

void functional_test_priority(PlicRtlWrapper& dut, test_runner& runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id_a = 1;
	uint32_t id_b = 2;
	uint32_t prio_a = klee_int("prio_a");
	uint32_t prio_b = klee_int("prio_b");
	klee_assume(prio_a > 0);
	klee_assume(prio_b > 0);
	klee_assume(prio_a <= 7);
	klee_assume(prio_b <= 7);
//	uint32_t prio_a = 3;
//	uint32_t prio_b = 1;

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&prio_threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id_a | 1UL << id_b;
	runner.call_write(kPlicEnableReg, reinterpret_cast<uint8_t *>(&enable_lower), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id_a, reinterpret_cast<uint8_t *>(&prio_a), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.call_write(sizeof(uint32_t)*id_b, reinterpret_cast<uint8_t *>(&prio_b), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 130ns - 160ns
	}

	runner.trigger_interrupt(id_a);
	runner.trigger_interrupt(id_b);
	minikernel_step(); // 170ns, trigger on negedge

	//Is the pending interrupts register changed?
	assert(dut.pendings_[id_a].read());
	assert(dut.pendings_[id_b].read());

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 180ns - 190ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 200ns, triggered
	assert(sit.was_triggered);

	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 210ns - 240ns
	}

	uint32_t first_itr = (prio_a) > (prio_b) ? id_a : id_b;
	uint32_t second_itr = (prio_a) > (prio_b) ? id_b : id_a;
	if((prio_a) == (prio_b)) {
		first_itr = id_a;
		second_itr = id_b;
	}
	assert(runner.read_result == first_itr);
	runner.call_write(kPlicClaimReg, reinterpret_cast<uint8_t *>(&first_itr), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 250ns - 280ns
	}

	assert(sit.was_triggered);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 290ns - 320ns
	}

	assert(runner.read_result == second_itr);
	runner.call_write(kPlicClaimReg, reinterpret_cast<uint8_t *>(&second_itr), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 330ns - 360ns
	}

	assert(!sit.was_triggered);
}

void functional_test_threshold(PlicRtlWrapper &dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id = 1;
//	uint32_t prio = 2;
//	uint32_t threshold = 7;
	uint32_t prio = klee_int("priority");
	uint32_t threshold = klee_int("priority threshold");
	klee_assume(threshold > 0);

	minikernel_step(); // 0ns

	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id;
	runner.call_write(kPlicEnableReg, reinterpret_cast<uint8_t *>(&enable_lower), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.trigger_interrupt(id);
	minikernel_step(); // 130ns, start processing of triggered interrupt

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 160ns, triggered

	if((prio&0b111) > (threshold&0b111) || (prio&0b111) == 0) {
		assert(!sit.was_triggered); // fails, but known bug
	} else {
		assert(sit.was_triggered);
	}
}

void invalid_test_id(PlicRtlWrapper& dut, test_runner& runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	// test invalid interrupt number
//	uint32_t id = numberInterrupts;
	uint32_t id = klee_int("interrupt number");
	klee_assume(id < 0 | id >= numberInterrupts);

	minikernel_step(); // 0ns

	runner.trigger_interrupt(id);
	minikernel_step();

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 20ns - 30ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 40
	assert(!sit.was_triggered);
}

/*
void invalid_test_priority(PlicRtlWrapper& dut, test_runner& runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id = 51;
//	uint32_t prio = 0;
	uint32_t prio = klee_int("interrupt priority");
	klee_assume(prio <= 0);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&prio_threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = 0;
	uint32_t enable_address = kPlicEnableReg;
	if(id > 0 && id < 32) { // enable lower
		enable = 1UL << id;
	} else if(id >= 32 && id <= 51) { // enable upper
		enable = 1UL << (id-32);
		enable_address += sizeof(uint32_t);
	}
	runner.call_write(enable_address, reinterpret_cast<uint8_t *>(&enable), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	minikernel_step(); // 130ns, trigger on negedge
	dut.gateway_trigger_interrupt(id);

	//Is the pending interrupts register changed?
	assert(dut.pendings_[id].read());
	minikernel_step(); // 130ns pt2, start processing of triggered interrupts

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 160
	assert(!sit.was_triggered);
}

void invalid_test_threshold(PlicRtlWrapper &dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id = 1;
	uint32_t prio = 6;
	uint32_t threshold = 8;
//	uint32_t prio = klee_int("priority");
//	klee_assume(prio > 0);
//	uint32_t threshold = klee_int("priority threshold");
//	klee_assume(threshold > 7);

	minikernel_step(); // 0ns

	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id;
	runner.call_write(kPlicEnableReg, reinterpret_cast<uint8_t *>(&enable_lower), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	minikernel_step(); // 130ns, trigger on negedge
	dut.gateway_trigger_interrupt(id);
	minikernel_step(); // 130ns pt2, start processing of triggered interrupts

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 160ns, triggered
	assert(!sit.was_triggered);
}
 */

void interface_test_read(PlicRtlWrapper &dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	unsigned constexpr max_data_length = 1000;
	unsigned data_length = klee_int("data length");
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];

//	runner.call_read(klee_int("address"), data, data_length);
	runner.call_read(10, data, data_length);

	for(int i=0;i<4;i++) {
		minikernel_step();
	}
}

void interface_test_write(PlicRtlWrapper &dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	unsigned constexpr max_data_length = 100;
	unsigned data_length = klee_int("data_length");
	INFO(data_length = 0);
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];
	klee_make_symbolic(data, max_data_length, "write data");
	INFO(memset(data, 0, max_data_length));

//	runner.call_write(klee_int("address"), data, data_length);
	runner.call_write(10, data, data_length);

	for(int i=0;i<4;i++) {
		minikernel_step();
	}
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	PlicRtlWrapper plic("PlicRtlWrappper", clk);
	test_runner tr = test_runner(clk, plic);
	Simple_interrupt_target sit(plic, tr);
	plic.hart = &sit;

	Simcontext::get().initialize();

	if(argc == 2) {
		if(strcmp(argv[1], "functional_test_basic") == 0) {
			functional_test_basic(plic, tr);
		} else if(strcmp(argv[1], "functional_test_priority") == 0) {
			functional_test_priority(plic, tr);
		} else if(strcmp(argv[1], "functional_test_threshold") == 0) {
			functional_test_threshold(plic, tr);
//		} else if(strcmp(argv[1], "invalid_test_priority") == 0) {
//			invalid_test_priority(plic, tr);
		} else if(strcmp(argv[1], "invalid_test_id") == 0) {
			invalid_test_id(plic, tr);
//		} else if(strcmp(argv[1], "invalid_test_threshold") == 0) {
//			invalid_test_threshold(plic, tr);
		} else if(strcmp(argv[1], "interface_test_read") == 0) {
			interface_test_read(plic, tr);
		} else if(strcmp(argv[1], "interface_test_write") == 0) {
			interface_test_write(plic, tr);
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
