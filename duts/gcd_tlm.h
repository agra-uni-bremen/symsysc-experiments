#pragma once

// #include "peripherals/periph.c"
#include "util/tlm_map.h"
#include <iostream>
#include <systemc.h>

#define CONVERSION_BUG 1

uint32_t gcd(uint32_t a, uint32_t b)
{
#if CONVERSION_BUG==1
	int32_t a_i = a;
	int32_t b_i = b;
#else
	uint32_t a_i = a;
	uint32_t b_i = b;
#endif
	bool rdy = false;
	while(!rdy)
	{
#ifdef gcd_tlm0
		if(a_i < b_i)
#elif defined(gcd_tlm1)
		if(a_i == b_i)
#elif defined(gcd_tlm2)
		if(a_i <= b_i)
#elif defined(gcd_tlm3)
		if(a_i >= b_i)
#else
		if(a_i > b_i)
#endif
		{
#ifdef gcd_tlm4
			a_i = a_i + b_i;
#elif defined(gcd_tlm5)
			a_i = a_i / b_i;
#elif defined(gcd_tlm6)
			a_i = a_i * b_i;
#elif defined(gcd_tlm7)
			a_i = a_i % b_i;
#else
			a_i = a_i - b_i;
#endif
		}
#ifdef gcd_tlm8
		else if(b_i < a_i)
#elif defined(gcd_tlm9)
		else if(b_i == a_i)
#elif defined(gcd_tlm10)
		else if(b_i <= a_i)
#elif defined(gcd_tlm11)
		else if(b_i >= a_i)
#else
		else if(b_i > a_i)
#endif
		{
#ifdef gcd_tlm12
			b_i = b_i + a_i;
#elif defined(gcd_tlm13)
			b_i = b_i / a_i;
#elif defined(gcd_tlm14)
			b_i = b_i * a_i;
#elif defined(gcd_tlm15)
			b_i = b_i % a_i;
#else
			b_i = b_i - a_i;
#endif
		}
		else
		{
			rdy = true;
		}
	}
	return a_i;
}

struct gcd_tlm : public sc_module {
	tlm_utils::simple_target_socket<gcd_tlm> tsock;

	vp::map::LocalRouter router;

	uint32_t a=0;
	uint32_t b=0;
	uint32_t res=0;
	uint32_t ready=0;
	uint32_t valid=0;

	sc_event run_event;
	sc_event irq;

	SC_HAS_PROCESS(gcd_tlm);
	gcd_tlm(sc_core::sc_module_name) {
		tsock.register_b_transport(this, &gcd_tlm::transport);

		auto &regs = router
				.add_register_bank({})
				.register_handler(this, &gcd_tlm::register_access_callback);
		regs.add_register({0x00, &a});
		regs.add_register({0x04, &b});
		regs.add_register({0x08, &res, vp::map::read_only});
		regs.add_register({0x0c, &ready, vp::map::read_only});
		regs.add_register({0x10, &valid});
		SC_THREAD(run);
	}

	void transport(tlm::tlm_generic_payload &trans, sc_core::sc_time &delay) {
		router.transport(trans, delay);
	}

	void register_access_callback(const vp::map::register_access_t &r) {
		// No checks before execution?
		r.fn();
#ifdef gcd_tlm16
		if (r.write || (r.addr == 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm17)
		if (r.write || (r.addr < 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm18)
		if (r.write || (r.addr > 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm19)
		if (r.write || (r.addr <= 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm20)
		if (r.write || (r.addr >= 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm21)
		if (r.write && (r.addr < 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm22)
		if (r.write && (r.addr > 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm23)
		if (r.write && (r.addr <= 0x10)) { // if valid is set, run_event needs to be triggered
#elif defined(gcd_tlm24)
		if (r.write && (r.addr >= 0x10)) { // if valid is set, run_event needs to be triggered
#else
		if (r.write && (r.vptr == &valid)) { // if valid is set, run_event needs to be triggered
#endif
			if(valid==1) {
				run_event.notify(sc_core::sc_time(0, SC_NS));
			}
#ifdef gcd_tlm25
		} else if(r.read || (r.addr == 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm26)
		} else if(r.read || (r.addr < 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm27)
		} else if(r.read || (r.addr > 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm28)
		} else if(r.read || (r.addr <= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm29)
		} else if(r.read || (r.addr >= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm30)
		} else if(r.read && (r.addr < 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm31)
		} else if(r.read && (r.addr > 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm32)
		} else if(r.read && (r.addr <= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(gcd_tlm33)
		} else if(r.read && (r.addr >= 0x08)) { // if res is read, ready needs to be set to 0
#else
		} else if(r.read && (r.vptr == &res)) { // if res is read, ready needs to be set to 0
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
			valid = 0;
			res = gcd(a, b);
			ready = 1;
			irq.notify(sc_core::sc_time(0, SC_NS));
		}
	}
};


