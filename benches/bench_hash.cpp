
#include <stdint.h>
#include <hash_tlm.h>

void functional_test_basic(hash_tlm &dut_tlm) {

	uint32_t a = 6;
	uint32_t b = 12;
	dut_tlm.a = a;
	dut_tlm.b = b;

	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(0x10); // valid
	uint32_t valid = 1;
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&valid));
	dut_tlm.transport(pl, delay);

	minikernel_step(); // ?ns

	assert(dut_tlm.ready);
	assert(dut_tlm.hash == task_hash_f(a, b));

	uint32_t res;
	pl.set_read();
	pl.set_address(0x08);
	pl.set_data_length(sizeof(uint32_t));
	pl.set_data_ptr(reinterpret_cast<uint8_t *>(&res));
	dut_tlm.transport(pl, delay);

	assert(!dut_tlm.ready);
}

int main(int argc, char* argv[])
{
	hash_tlm dut_tlm("hash TLM");

	Simcontext::get().initialize();
	minikernel_step(); // 0ns

	functional_test_basic(dut_tlm);
	/*
	 *TODO:
	 * - add rtl implementation, test cases
	 */
	return 0;
}

