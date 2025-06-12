#pragma once

// #include "peripherals/periph.c"
#include "util/tlm_map.h"
#include <iostream>
#include <systemc.h>

// vSize hab ich in dem peripheral auf 8 gesetzt
void task_map_f(uint8_t vSize, int32_t *buf, uint32_t mappingVal)
{
#ifdef map_tlm0
	for (unsigned i = 0; i > vSize; ++i)
#elif defined(map_tlm1)
	for (unsigned i = 0; i == vSize; ++i)
#elif defined(map_tlm2)
	for (unsigned i = 0; i <= vSize; ++i)
#elif defined(map_tlm3)
	for (unsigned i = 0; i >= vSize; ++i)
#else
	for (unsigned i = 0; i < vSize; ++i)
#endif
	{
#ifdef map_tlm4
		buf[i] = (buf[i] & mappingVal) - 19;
#elif defined(map_tlm5)
		buf[i] = (buf[i] | mappingVal) - 19;
#elif defined(map_tlm6)
		buf[i] = (buf[i] ^ mappingVal) - 19;
#elif defined(map_tlm7)
		buf[i] = (buf[i] & mappingVal) / 19;
#elif defined(map_tlm8)
		buf[i] = (buf[i] | mappingVal) / 19;
#elif defined(map_tlm9)
		buf[i] = (buf[i] ^ mappingVal) / 19;
#elif defined(map_tlm10)
		buf[i] = (buf[i] & mappingVal) * 19;
#elif defined(map_tlm11)
		buf[i] = (buf[i] | mappingVal) * 19;
#elif defined(map_tlm12)
		buf[i] = (buf[i] ^ mappingVal) * 19;
#elif defined(map_tlm13)
		buf[i] = (buf[i] & mappingVal) % 19;
#elif defined(map_tlm14)
		buf[i] = (buf[i] | mappingVal) % 19;
#elif defined(map_tlm15)
		buf[i] = (buf[i] ^ mappingVal) % 19;
#elif defined(map_tlm16)
		buf[i] = (buf[i] | mappingVal) + 19;
#elif defined(map_tlm17)
		buf[i] = (buf[i] ^ mappingVal) + 19;
#else
		buf[i] = (buf[i] & mappingVal) + 19;
#endif
	}
}

struct map_tlm : public sc_module {
	tlm_utils::simple_target_socket<map_tlm> tsock;

	vp::map::LocalRouter router;

	uint32_t mAddr = 0;
	uint32_t mWdat = 0;
	uint32_t mRdat = 0;
	uint32_t mWREn = 0;
	uint32_t mapV = 0;
	uint32_t valid = 0;
	uint32_t ready = 0;

	int32_t data[8];

	sc_event run_event;
	sc_event irq;

	SC_HAS_PROCESS(map_tlm);
	map_tlm(sc_core::sc_module_name) {
		tsock.register_b_transport(this, &map_tlm::transport);

		for(unsigned i=0;i<8;++i) {
			data[i]=0;
		}

		auto &regs = router
				.add_register_bank({})
				.register_handler(this, &map_tlm::register_access_callback);
		regs.add_register({0x00, &mAddr});
		regs.add_register({0x04, &mWdat});
		regs.add_register({0x08, &mRdat, vp::map::read_only});
		regs.add_register({0x0c, &mWREn});
		regs.add_register({0x10, &mapV});
		regs.add_register({0x14, &valid});
		regs.add_register({0x18, &ready, vp::map::read_only});
		SC_THREAD(run);
	}

	void transport(tlm::tlm_generic_payload &trans, sc_core::sc_time &delay) {
		router.transport(trans, delay);
	}

	void register_access_callback(const vp::map::register_access_t &r) {
		// No checks before execution?
		r.fn();

#ifdef map_tlm18
		if (r.write || (r.addr == 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm19)
		if (r.write || (r.addr < 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm20)
		if (r.write || (r.addr > 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm21)
		if (r.write || (r.addr <= 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm22)
		if (r.write || (r.addr >= 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm23)
		if (r.write && (r.addr < 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm24)
		if (r.write && (r.addr > 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm25)
		if (r.write && (r.addr <= 0x14)) { // if valid is set, run_event needs to be triggered
#elif defined(map_tlm26)
		if (r.write && (r.addr >= 0x14)) { // if valid is set, run_event needs to be triggered
#else
		if (r.write && (r.vptr == &valid)) { // if valid is set, run_event needs to be triggered
#endif
			if(valid==1) {
				run_event.notify(sc_core::sc_time(0, SC_NS));
			}
#ifdef map_tlm27
		} else if(r.write || (r.addr == 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm28)
		} else if(r.write || (r.addr < 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm29)
		} else if(r.write || (r.addr > 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm30)
		} else if(r.write || (r.addr <= 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm31)
		} else if(r.write || (r.addr >= 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm32)
		} else if(r.write && (r.addr < 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm33)
		} else if(r.write && (r.addr > 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm34)
		} else if(r.write && (r.addr <= 0x0c)) { // enabled, write value to address in buffer
#elif defined(map_tlm35)
		} else if(r.write && (r.addr >= 0x0c)) { // enabled, write value to address in buffer
#else
		} else if(r.write && (r.vptr == &mWREn)) { // enabled, write value to address in buffer
#endif
			data[mAddr] = mWdat;
#ifdef map_tlm36
		} else if(r.write || (r.addr == 0x00)) {
#elif defined(map_tlm37)
		} else if(r.write || (r.addr < 0x00)) {
#elif defined(map_tlm38)
		} else if(r.write || (r.addr > 0x00)) {
#elif defined(map_tlm39)
		} else if(r.write || (r.addr <= 0x00)) {
#elif defined(map_tlm40)
		} else if(r.write || (r.addr >= 0x00)) {
#elif defined(map_tlm41)
		} else if(r.write && (r.addr < 0x00)) {
#elif defined(map_tlm42)
		} else if(r.write && (r.addr > 0x00)) {
#elif defined(map_tlm43)
		} else if(r.write && (r.addr <= 0x00)) {
#elif defined(map_tlm44)
		} else if(r.write && (r.addr >= 0x00)) {
#else
		} else if(r.write && (r.vptr == &mAddr)) {
#endif
			mAddr = mAddr&0b111;
			mRdat = data[mAddr];
#ifdef map_tlm45
		} else if(r.read || (r.addr == 0x08)) {
#elif defined(map_tlm46)
		} else if(r.read || (r.addr < 0x08)) {
#elif defined(map_tlm47)
		} else if(r.read || (r.addr > 0x08)) {
#elif defined(map_tlm48)
		} else if(r.read || (r.addr <= 0x08)) {
#elif defined(map_tlm49)
		} else if(r.read || (r.addr >= 0x08)) {
#elif defined(map_tlm50)
		} else if(r.read && (r.addr < 0x08)) {
#elif defined(map_tlm51)
		} else if(r.read && (r.addr > 0x08)) {
#elif defined(map_tlm52)
		} else if(r.read && (r.addr <= 0x08)) {
#elif defined(map_tlm53)
		} else if(r.read && (r.addr >= 0x08)) {
#else
		} else if(r.read && (r.vptr == &mRdat)) {
#endif
			ready = 0;
		}
	}

	void run() {
#ifdef SYMSYSC
		enum class Label {
			init,
			execute
		};

		static Label position = Label::init;
		switch(position) {
			case Label::execute:
				goto EXECUTE;
			default:
				break;
		}
#endif
		while(true) {
			sc_core::wait(run_event);
#ifdef SYMSYSC
			position = Label::execute;
			return;
			EXECUTE:
#endif
			task_map_f(8, data, mapV);
			ready = 1;
			irq.notify();
		}
	}
};


