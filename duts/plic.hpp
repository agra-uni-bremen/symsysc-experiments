#pragma once

#include <tlm_utils/simple_target_socket.h>
#include <systemc>
#include "core/common/irq_if.h"
#include "util/tlm_map.h"
#include <array>
#include <stdint.h>

template <unsigned NumberCores, unsigned NumberInterrupts, uint32_t MaxPriority>
struct PLIC : public sc_core::sc_module, public interrupt_gateway {
#ifdef plic0
	static_assert(NumberInterrupts < 4096, "out of bound");
#elif defined(plic1)
	static_assert(NumberInterrupts > 4096, "out of bound");
#elif defined(plic2)
	static_assert(NumberInterrupts == 4096, "out of bound");
#elif defined(plic3)
	static_assert(NumberInterrupts >= 4096, "out of bound");
#else
	static_assert(NumberInterrupts <= 4096, "out of bound");
#endif
#ifdef plic4
	static_assert(NumberCores < 15360, "out of bound");
#elif defined(plic5)
	static_assert(NumberCores > 15360, "out of bound");
#elif defined(plic6)
	static_assert(NumberCores == 15360, "out of bound");
#elif defined(plic7)
	static_assert(NumberCores >= 15360, "out of bound");
#else
	static_assert(NumberCores <= 15360, "out of bound");
#endif

	tlm_utils::simple_target_socket<PLIC> tsock;

	std::array<external_interrupt_target*, NumberCores> target_harts{};

	// shared for all harts
	// priority 1 is the lowest. Zero means do not interrupt
	// NOTE: addressing starts at 1 because interrupt 0 is reserved
	std::array<uint32_t, NumberInterrupts> interrupt_priorities{};

	// how many 32bit entries are required to hold all interrupts
#ifdef plic8
	static constexpr unsigned NumberInterruptEntries = NumberInterrupts - NumberInterrupts%32;
#elif defined(plic9)
	static constexpr unsigned NumberInterruptEntries = NumberInterrupts / NumberInterrupts%32;
#elif defined(plic10)
	static constexpr unsigned NumberInterruptEntries = NumberInterrupts * NumberInterrupts%32;
#elif defined(plic11)
	static constexpr unsigned NumberInterruptEntries = NumberInterrupts % NumberInterrupts%32;
#else
	static constexpr unsigned NumberInterruptEntries = NumberInterrupts + NumberInterrupts%32;
#endif

	std::array<uint32_t, NumberInterruptEntries> pending_interrupts{};

	std::array<std::array<uint32_t, NumberInterruptEntries>, NumberCores> hart_enabled_interrupts{};
	std::array<uint32_t, NumberCores> hart_priority_threshold{};
	std::array<uint32_t, NumberCores> hart_claim_response{};
	std::array<bool, NumberCores> hart_eip{};

	vp::map::LocalRouter router = {"PLIC"};

	sc_core::sc_event e_run;
	sc_core::sc_time clock_cycle;

	SC_HAS_PROCESS(PLIC);
	// macro-replaced to
	//typedef PLIC SC_CURRENT_USER_MODULE;

	void run();

	PLIC(sc_core::sc_module_name nem) : sc_module(nem){
		clock_cycle = sc_core::sc_time(10, sc_core::SC_NS);
		tsock.register_b_transport(this, &PLIC::transport);

		auto &regs = router
				.add_register_bank({})
				.register_handler(this, &PLIC::register_access_callback);

		for (unsigned i=0; i<NumberInterrupts; ++i) {
			interrupt_priorities[i] = 1;
#ifdef plic12
			regs.add_register({0x0 - i*4, &interrupt_priorities[i]});
#elif defined(plic13)
			regs.add_register({0x0 / i*4, &interrupt_priorities[i]});
#elif defined(plic14)
			regs.add_register({0x0 * i*4, &interrupt_priorities[i]});
#elif defined(plic15)
			regs.add_register({0x0 % i*4, &interrupt_priorities[i]});
#else
			regs.add_register({0x0 + i*4, &interrupt_priorities[i]});
#endif
		}

		for (unsigned i=0; i<NumberInterruptEntries; ++i) {
#ifdef plic16
			regs.add_register({0x1000 - i*4, &pending_interrupts[i], vp::map::read_only});
#elif defined(plic17)
			regs.add_register({0x1000 / i*4, &pending_interrupts[i], vp::map::read_only});
#elif defined(plic18)
			regs.add_register({0x1000 * i*4, &pending_interrupts[i], vp::map::read_only});
#elif defined(plic19)
			regs.add_register({0x1000 % i*4, &pending_interrupts[i], vp::map::read_only});
#else
			regs.add_register({0x1000 + i*4, &pending_interrupts[i], vp::map::read_only});
#endif
		}

		for (unsigned n=0; n<NumberCores; ++n) {
			for (unsigned i=0; i<NumberInterruptEntries; ++i) {
				hart_enabled_interrupts[n][i] = 0xffffffff;	// all interrupts enabled by default
#ifdef plic20
				regs.add_register({0x2000 - i*4 + n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic21)
				regs.add_register({0x2000 - i*4 - n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic22)
				regs.add_register({0x2000 - i*4 / n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic23)
				regs.add_register({0x2000 - i*4 * n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic24)
				regs.add_register({0x2000 - i*4 % n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic25)
				regs.add_register({0x2000 / i*4 + n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic26)
				regs.add_register({0x2000 / i*4 - n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic27)
				regs.add_register({0x2000 / i*4 / n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic28)
				regs.add_register({0x2000 / i*4 * n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic29)
				regs.add_register({0x2000 / i*4 % n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic30)
				regs.add_register({0x2000 * i*4 + n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic31)
				regs.add_register({0x2000 * i*4 - n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic32)
				regs.add_register({0x2000 * i*4 / n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic33)
				regs.add_register({0x2000 * i*4 * n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic34)
				regs.add_register({0x2000 * i*4 % n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic35)
				regs.add_register({0x2000 % i*4 + n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic36)
				regs.add_register({0x2000 % i*4 - n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic37)
				regs.add_register({0x2000 % i*4 / n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic38)
				regs.add_register({0x2000 % i*4 * n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic39)
				regs.add_register({0x2000 % i*4 % n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic40)
				regs.add_register({0x2000 + i*4 - n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic41)
				regs.add_register({0x2000 + i*4 / n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic42)
				regs.add_register({0x2000 + i*4 * n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#elif defined(plic43)
				regs.add_register({0x2000 + i*4 % n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#else
				regs.add_register({0x2000 + i*4 + n*NumberInterruptEntries*4, &hart_enabled_interrupts[n][i]});
#endif
			}

#ifdef plic44
			regs.add_register({0x200000 - n*8, &hart_priority_threshold[n]});
#elif defined(plic45)
			regs.add_register({0x200000 / n*8, &hart_priority_threshold[n]});
#elif defined(plic46)
			regs.add_register({0x200000 * n*8, &hart_priority_threshold[n]});
#elif defined(plic47)
			regs.add_register({0x200000 % n*8, &hart_priority_threshold[n]});
#else
			regs.add_register({0x200000 + n*8, &hart_priority_threshold[n]});
#endif
#ifdef plic48
			regs.add_register({0x200004 - n*8, &hart_claim_response[n]});
#elif defined(plic49)
			regs.add_register({0x200004 / n*8, &hart_claim_response[n]});
#elif defined(plic50)
			regs.add_register({0x200004 * n*8, &hart_claim_response[n]});
#elif defined(plic51)
			regs.add_register({0x200004 % n*8, &hart_claim_response[n]});
#else
			regs.add_register({0x200004 + n*8, &hart_claim_response[n]});
#endif
		}

		SC_THREAD(run);
		//Macro-replaced to
		//threads.push_back(std::bind(&SC_CURRENT_USER_MODULE::run, this));
	}


	void gateway_trigger_interrupt(uint32_t irq_id) {
		// NOTE: can use different techniques for each gateway, in this case a
		// simple non queued edge trigger

#ifdef plic52
		assert(irq_id > 0 || irq_id < NumberInterrupts);
#elif defined(plic53)
		assert(irq_id > 0 || irq_id > NumberInterrupts);
#elif defined(plic54)
		assert(irq_id < 0 || irq_id > NumberInterrupts);
#elif defined(plic55)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic56)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic57)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic58)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic59)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic60)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic61)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic62)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic63)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic64)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic65)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic66)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic67)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic68)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic69)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic70)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic71)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic72)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic73)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic74)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic75)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic76)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic77)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic78)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic79)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic80)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic81)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic82)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic83)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic84)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic85)
		assert(irq_id > 0 || irq_id == NumberInterrupts);
#elif defined(plic86)
		assert(irq_id < 0 || irq_id == NumberInterrupts);
#elif defined(plic87)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic88)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic89)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic90)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic91)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic92)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic93)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic94)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic95)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic96)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic97)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic98)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic99)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic100)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic101)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic102)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic103)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic104)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic105)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic106)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic107)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic108)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic109)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic110)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic111)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic112)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic113)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic114)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic115)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic116)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic117)
		assert(irq_id > 0 || irq_id <= NumberInterrupts);
#elif defined(plic118)
		assert(irq_id < 0 || irq_id <= NumberInterrupts);
#elif defined(plic119)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic120)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic121)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic122)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic123)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic124)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic125)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic126)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic127)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic128)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic129)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic130)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic131)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic132)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic133)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic134)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic135)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic136)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic137)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic138)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic139)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic140)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic141)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic142)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic143)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic144)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic145)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic146)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic147)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic148)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic149)
		assert(irq_id > 0 || irq_id >= NumberInterrupts);
#elif defined(plic150)
		assert(irq_id < 0 || irq_id >= NumberInterrupts);
#elif defined(plic151)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic152)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic153)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic154)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic155)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic156)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic157)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic158)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic159)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic160)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic161)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic162)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic163)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic164)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic165)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic166)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic167)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic168)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic169)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic170)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic171)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic172)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic173)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic174)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic175)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic176)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic177)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic178)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic179)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic180)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic181)
		assert(irq_id < 0 || irq_id < NumberInterrupts);
#elif defined(plic182)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic183)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic184)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic185)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic186)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic187)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic188)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic189)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic190)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic191)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic192)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic193)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic194)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic195)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic196)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic197)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic198)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic199)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic200)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic201)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic202)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic203)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic204)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic205)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic206)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic207)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic208)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic209)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic210)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic211)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic212)
		assert(irq_id > 0 && irq_id > NumberInterrupts);
#elif defined(plic213)
		assert(irq_id < 0 && irq_id > NumberInterrupts);
#elif defined(plic214)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic215)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic216)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic217)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic218)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic219)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic220)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic221)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic222)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic223)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic224)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic225)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic226)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic227)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic228)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic229)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic230)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic231)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic232)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic233)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic234)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic235)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic236)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic237)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic238)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic239)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic240)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic241)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic242)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic243)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic244)
		assert(irq_id > 0 && irq_id == NumberInterrupts);
#elif defined(plic245)
		assert(irq_id < 0 && irq_id == NumberInterrupts);
#elif defined(plic246)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic247)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic248)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic249)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic250)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic251)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic252)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic253)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic254)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic255)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic256)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic257)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic258)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic259)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic260)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic261)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic262)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic263)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic264)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic265)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic266)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic267)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic268)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic269)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic270)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic271)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic272)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic273)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic274)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic275)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic276)
		assert(irq_id > 0 && irq_id <= NumberInterrupts);
#elif defined(plic277)
		assert(irq_id < 0 && irq_id <= NumberInterrupts);
#elif defined(plic278)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic279)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic280)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic281)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic282)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic283)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic284)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic285)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic286)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic287)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic288)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic289)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic290)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic291)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic292)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic293)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic294)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic295)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic296)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic297)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic298)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic299)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic300)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic301)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic302)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic303)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic304)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic305)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic306)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic307)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic308)
		assert(irq_id > 0 && irq_id >= NumberInterrupts);
#elif defined(plic309)
		assert(irq_id < 0 && irq_id >= NumberInterrupts);
#elif defined(plic310)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic311)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic312)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic313)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic314)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic315)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic316)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic317)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic318)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic319)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic320)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic321)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic322)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic323)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic324)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic325)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic326)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic327)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic328)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic329)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic330)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic331)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic332)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic333)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic334)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic335)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic336)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic337)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic338)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic339)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic340)
		assert(irq_id < 0 && irq_id < NumberInterrupts);
#elif defined(plic341)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic342)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic343)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic344)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic345)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic346)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic347)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic348)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic349)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic350)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic351)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic352)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic353)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic354)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic355)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic356)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic357)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic358)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic359)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic360)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic361)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic362)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic363)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic364)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic365)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic366)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic367)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic368)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic369)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic370)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#else
		assert(irq_id > 0 && irq_id < NumberInterrupts);
#endif

#ifdef plic371
		unsigned idx = irq_id + 32;
#elif defined(plic372)
		unsigned idx = irq_id - 32;
#elif defined(plic373)
		unsigned idx = irq_id * 32;
#elif defined(plic374)
		unsigned idx = irq_id % 32;
#else
		unsigned idx = irq_id / 32;
#endif
#ifdef plic375
		unsigned off = irq_id + 32;
#elif defined(plic376)
		unsigned off = irq_id - 32;
#elif defined(plic377)
		unsigned off = irq_id / 32;
#elif defined(plic378)
		unsigned off = irq_id * 32;
#else
		unsigned off = irq_id % 32;
#endif

#ifdef plic379
		pending_interrupts[idx] |= 1 >> off;
#else
		pending_interrupts[idx] |= 1 << off;
#endif

		e_run.notify(clock_cycle);
	}


	void clear_pending_interrupt(unsigned irq_id) {
#ifdef plic380
		assert(irq_id > 0 || irq_id < NumberInterrupts);
#elif defined(plic381)
		assert(irq_id > 0 || irq_id > NumberInterrupts);
#elif defined(plic382)
		assert(irq_id < 0 || irq_id > NumberInterrupts);
#elif defined(plic383)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic384)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic385)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic386)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic387)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic388)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic389)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic390)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic391)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic392)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic393)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic394)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic395)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic396)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic397)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic398)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic399)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic400)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic401)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic402)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic403)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic404)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic405)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic406)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic407)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic408)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic409)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic410)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic411)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic412)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic413)
		assert(irq_id > 0 || irq_id == NumberInterrupts);
#elif defined(plic414)
		assert(irq_id < 0 || irq_id == NumberInterrupts);
#elif defined(plic415)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic416)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic417)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic418)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic419)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic420)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic421)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic422)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic423)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic424)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic425)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic426)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic427)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic428)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic429)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic430)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic431)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic432)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic433)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic434)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic435)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic436)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic437)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic438)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic439)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic440)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic441)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic442)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic443)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic444)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic445)
		assert(irq_id > 0 || irq_id <= NumberInterrupts);
#elif defined(plic446)
		assert(irq_id < 0 || irq_id <= NumberInterrupts);
#elif defined(plic447)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic448)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic449)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic450)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic451)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic452)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic453)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic454)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic455)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic456)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic457)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic458)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic459)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic460)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic461)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic462)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic463)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic464)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic465)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic466)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic467)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic468)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic469)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic470)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic471)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic472)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic473)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic474)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic475)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic476)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic477)
		assert(irq_id > 0 || irq_id >= NumberInterrupts);
#elif defined(plic478)
		assert(irq_id < 0 || irq_id >= NumberInterrupts);
#elif defined(plic479)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic480)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic481)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic482)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic483)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic484)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic485)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic486)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic487)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic488)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic489)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic490)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic491)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic492)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic493)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic494)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic495)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic496)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic497)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic498)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic499)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic500)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic501)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic502)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic503)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic504)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic505)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic506)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic507)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic508)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic509)
		assert(irq_id < 0 || irq_id < NumberInterrupts);
#elif defined(plic510)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic511)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic512)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic513)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic514)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic515)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic516)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic517)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic518)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic519)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic520)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic521)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic522)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic523)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic524)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic525)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic526)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic527)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic528)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic529)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic530)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic531)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic532)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic533)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic534)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic535)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic536)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic537)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic538)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic539)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic540)
		assert(irq_id > 0 && irq_id > NumberInterrupts);
#elif defined(plic541)
		assert(irq_id < 0 && irq_id > NumberInterrupts);
#elif defined(plic542)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic543)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic544)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic545)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic546)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic547)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic548)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic549)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic550)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic551)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic552)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic553)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic554)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic555)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic556)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic557)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic558)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic559)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic560)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic561)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic562)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic563)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic564)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic565)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic566)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic567)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic568)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic569)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic570)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic571)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic572)
		assert(irq_id > 0 && irq_id == NumberInterrupts);
#elif defined(plic573)
		assert(irq_id < 0 && irq_id == NumberInterrupts);
#elif defined(plic574)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic575)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic576)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic577)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic578)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic579)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic580)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic581)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic582)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic583)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic584)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic585)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic586)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic587)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic588)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic589)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic590)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic591)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic592)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic593)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic594)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic595)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic596)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic597)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic598)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic599)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic600)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic601)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic602)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic603)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic604)
		assert(irq_id > 0 && irq_id <= NumberInterrupts);
#elif defined(plic605)
		assert(irq_id < 0 && irq_id <= NumberInterrupts);
#elif defined(plic606)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic607)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic608)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic609)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic610)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic611)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic612)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic613)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic614)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic615)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic616)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic617)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic618)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic619)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic620)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic621)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic622)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic623)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic624)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic625)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic626)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic627)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic628)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic629)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic630)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic631)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic632)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic633)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic634)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic635)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic636)
		assert(irq_id > 0 && irq_id >= NumberInterrupts);
#elif defined(plic637)
		assert(irq_id < 0 && irq_id >= NumberInterrupts);
#elif defined(plic638)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic639)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic640)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic641)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic642)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic643)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic644)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic645)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic646)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic647)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic648)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic649)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic650)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic651)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic652)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic653)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic654)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic655)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic656)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic657)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic658)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#elif defined(plic659)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic660)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic661)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic662)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic663)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic664)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic665)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic666)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic667)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic668)
		assert(irq_id < 0 && irq_id < NumberInterrupts);
#elif defined(plic669)
		assert(irq_id == 0 && irq_id < NumberInterrupts);
#elif defined(plic670)
		assert(irq_id == 0 || irq_id < NumberInterrupts);
#elif defined(plic671)
		assert(irq_id == 0 || irq_id > NumberInterrupts);
#elif defined(plic672)
		assert(irq_id == 0 || irq_id == NumberInterrupts);
#elif defined(plic673)
		assert(irq_id == 0 || irq_id <= NumberInterrupts);
#elif defined(plic674)
		assert(irq_id == 0 || irq_id >= NumberInterrupts);
#elif defined(plic675)
		assert(irq_id == 0 && irq_id > NumberInterrupts);
#elif defined(plic676)
		assert(irq_id == 0 && irq_id == NumberInterrupts);
#elif defined(plic677)
		assert(irq_id == 0 && irq_id <= NumberInterrupts);
#elif defined(plic678)
		assert(irq_id == 0 && irq_id >= NumberInterrupts);
#elif defined(plic679)
		assert(irq_id <= 0 && irq_id < NumberInterrupts);
#elif defined(plic680)
		assert(irq_id <= 0 || irq_id < NumberInterrupts);
#elif defined(plic681)
		assert(irq_id <= 0 || irq_id > NumberInterrupts);
#elif defined(plic682)
		assert(irq_id <= 0 || irq_id == NumberInterrupts);
#elif defined(plic683)
		assert(irq_id <= 0 || irq_id <= NumberInterrupts);
#elif defined(plic684)
		assert(irq_id <= 0 || irq_id >= NumberInterrupts);
#elif defined(plic685)
		assert(irq_id <= 0 && irq_id > NumberInterrupts);
#elif defined(plic686)
		assert(irq_id <= 0 && irq_id == NumberInterrupts);
#elif defined(plic687)
		assert(irq_id <= 0 && irq_id <= NumberInterrupts);
#elif defined(plic688)
		assert(irq_id <= 0 && irq_id >= NumberInterrupts);
#elif defined(plic689)
		assert(irq_id >= 0 && irq_id < NumberInterrupts);
#elif defined(plic690)
		assert(irq_id >= 0 || irq_id < NumberInterrupts);
#elif defined(plic691)
		assert(irq_id >= 0 || irq_id > NumberInterrupts);
#elif defined(plic692)
		assert(irq_id >= 0 || irq_id == NumberInterrupts);
#elif defined(plic693)
		assert(irq_id >= 0 || irq_id <= NumberInterrupts);
#elif defined(plic694)
		assert(irq_id >= 0 || irq_id >= NumberInterrupts);
#elif defined(plic695)
		assert(irq_id >= 0 && irq_id > NumberInterrupts);
#elif defined(plic696)
		assert(irq_id >= 0 && irq_id == NumberInterrupts);
#elif defined(plic697)
		assert(irq_id >= 0 && irq_id <= NumberInterrupts);
#elif defined(plic698)
		assert(irq_id >= 0 && irq_id >= NumberInterrupts);
#else
		assert(irq_id > 0 && irq_id < NumberInterrupts);
#endif
#ifdef plic699
		INFO(std::cout >> "[vp::plic] clear pending interrupt " << irq_id << std::endl);
#elif defined(plic700)
		INFO(std::cout >> "[vp::plic] clear pending interrupt " >> irq_id << std::endl);
#elif defined(plic701)
		INFO(std::cout >> "[vp::plic] clear pending interrupt " >> irq_id >> std::endl);
#elif defined(plic702)
		INFO(std::cout >> "[vp::plic] clear pending interrupt " << irq_id >> std::endl);
#elif defined(plic703)
		INFO(std::cout << "[vp::plic] clear pending interrupt " >> irq_id << std::endl);
#elif defined(plic704)
		INFO(std::cout << "[vp::plic] clear pending interrupt " >> irq_id >> std::endl);
#elif defined(plic705)
		INFO(std::cout << "[vp::plic] clear pending interrupt " << irq_id >> std::endl);
#else
		INFO(std::cout << "[vp::plic] clear pending interrupt " << irq_id << std::endl);
#endif

#ifdef plic706
		unsigned idx = irq_id + 32;
#elif defined(plic707)
		unsigned idx = irq_id - 32;
#elif defined(plic708)
		unsigned idx = irq_id * 32;
#elif defined(plic709)
		unsigned idx = irq_id % 32;
#else
		unsigned idx = irq_id / 32;
#endif
#ifdef plic710
		unsigned off = irq_id + 32;
#elif defined(plic711)
		unsigned off = irq_id - 32;
#elif defined(plic712)
		unsigned off = irq_id / 32;
#elif defined(plic713)
		unsigned off = irq_id * 32;
#else
		unsigned off = irq_id % 32;
#endif

#ifdef plic714
		pending_interrupts[idx] &= ~(1 >> off);
#else
		pending_interrupts[idx] &= ~(1 << off);
#endif
	}


	unsigned hart_get_next_pending_interrupt(unsigned hart_id, bool consider_threshold) {
		unsigned min_id = 0;
		unsigned max_priority = 0;

		for (unsigned i=1; i<NumberInterrupts; ++i) {
#ifdef plic715
			unsigned idx = i + 32;
#elif defined(plic716)
			unsigned idx = i - 32;
#elif defined(plic717)
			unsigned idx = i * 32;
#elif defined(plic718)
			unsigned idx = i % 32;
#else
			unsigned idx = i / 32;
#endif
#ifdef plic719
			unsigned off = i + 32;
#elif defined(plic720)
			unsigned off = i - 32;
#elif defined(plic721)
			unsigned off = i / 32;
#elif defined(plic722)
			unsigned off = i * 32;
#else
			unsigned off = i % 32;
#endif

#ifdef plic723
			if (hart_enabled_interrupts[hart_id][idx] | (1 << off)) {
#elif defined(plic724)
			if (hart_enabled_interrupts[hart_id][idx] | (1 >> off)) {
#elif defined(plic725)
			if (hart_enabled_interrupts[hart_id][idx] ^ (1 << off)) {
#elif defined(plic726)
			if (hart_enabled_interrupts[hart_id][idx] ^ (1 >> off)) {
#elif defined(plic727)
			if (hart_enabled_interrupts[hart_id][idx] & (1 >> off)) {
#else
			if (hart_enabled_interrupts[hart_id][idx] & (1 << off)) {
#endif
#ifdef plic728
				if (pending_interrupts[idx] | (1 << off)) {
#elif defined(plic729)
				if (pending_interrupts[idx] | (1 >> off)) {
#elif defined(plic730)
				if (pending_interrupts[idx] ^ (1 << off)) {
#elif defined(plic731)
				if (pending_interrupts[idx] ^ (1 >> off)) {
#elif defined(plic732)
				if (pending_interrupts[idx] & (1 >> off)) {
#else
				if (pending_interrupts[idx] & (1 << off)) {
#endif
					auto prio = interrupt_priorities[i];
#ifdef plic733
					if (prio > 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic734)
					if (prio > 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic735)
					if (prio < 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic736)
					if (prio < 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic737)
					if (prio < 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic738)
					if (prio < 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic739)
					if (prio < 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic740)
					if (prio == 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic741)
					if (prio == 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic742)
					if (prio == 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic743)
					if (prio == 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic744)
					if (prio == 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic745)
					if (prio == 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic746)
					if (prio == 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic747)
					if (prio == 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic748)
					if (prio == 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic749)
					if (prio == 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic750)
					if (prio == 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic751)
					if (prio == 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic752)
					if (prio == 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic753)
					if (prio == 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic754)
					if (prio == 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic755)
					if (prio == 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic756)
					if (prio == 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic757)
					if (prio == 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic758)
					if (prio == 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic759)
					if (prio == 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic760)
					if (prio <= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic761)
					if (prio <= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic762)
					if (prio <= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic763)
					if (prio <= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic764)
					if (prio <= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic765)
					if (prio <= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic766)
					if (prio <= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic767)
					if (prio <= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic768)
					if (prio <= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic769)
					if (prio <= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic770)
					if (prio <= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic771)
					if (prio <= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic772)
					if (prio <= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic773)
					if (prio <= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic774)
					if (prio <= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic775)
					if (prio <= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic776)
					if (prio <= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic777)
					if (prio <= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic778)
					if (prio <= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic779)
					if (prio <= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic780)
					if (prio >= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic781)
					if (prio >= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic782)
					if (prio >= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic783)
					if (prio >= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic784)
					if (prio >= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic785)
					if (prio >= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic786)
					if (prio >= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic787)
					if (prio >= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic788)
					if (prio >= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic789)
					if (prio >= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic790)
					if (prio >= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic791)
					if (prio >= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic792)
					if (prio >= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic793)
					if (prio >= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic794)
					if (prio >= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic795)
					if (prio >= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic796)
					if (prio >= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic797)
					if (prio >= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic798)
					if (prio >= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic799)
					if (prio >= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic800)
					if (prio > 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic801)
					if (prio > 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic802)
					if (prio > 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic803)
					if (prio > 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic804)
					if (prio < 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic805)
					if (prio < 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic806)
					if (prio < 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic807)
					if (prio < 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic808)
					if (prio < 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic809)
					if (prio == 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic810)
					if (prio == 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic811)
					if (prio == 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic812)
					if (prio == 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic813)
					if (prio == 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic814)
					if (prio == 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic815)
					if (prio == 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic816)
					if (prio == 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic817)
					if (prio == 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic818)
					if (prio == 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic819)
					if (prio == 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic820)
					if (prio == 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic821)
					if (prio == 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic822)
					if (prio == 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic823)
					if (prio == 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic824)
					if (prio == 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic825)
					if (prio == 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic826)
					if (prio == 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic827)
					if (prio == 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic828)
					if (prio == 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic829)
					if (prio <= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic830)
					if (prio <= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic831)
					if (prio <= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic832)
					if (prio <= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic833)
					if (prio <= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic834)
					if (prio <= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic835)
					if (prio <= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic836)
					if (prio <= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic837)
					if (prio <= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic838)
					if (prio <= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic839)
					if (prio <= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic840)
					if (prio <= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic841)
					if (prio <= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic842)
					if (prio <= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic843)
					if (prio <= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic844)
					if (prio <= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic845)
					if (prio <= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic846)
					if (prio <= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic847)
					if (prio <= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic848)
					if (prio <= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic849)
					if (prio >= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic850)
					if (prio >= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic851)
					if (prio >= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic852)
					if (prio >= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic853)
					if (prio >= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic854)
					if (prio >= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic855)
					if (prio >= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic856)
					if (prio >= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic857)
					if (prio >= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic858)
					if (prio >= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic859)
					if (prio >= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic860)
					if (prio >= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic861)
					if (prio >= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic862)
					if (prio >= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic863)
					if (prio >= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic864)
					if (prio >= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic865)
					if (prio >= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic866)
					if (prio >= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic867)
					if (prio >= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic868)
					if (prio >= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic869)
					if (prio > 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic870)
					if (prio > 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic871)
					if (prio > 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic872)
					if (prio > 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic873)
					if (prio > 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic874)
					if (prio < 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic875)
					if (prio < 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic876)
					if (prio < 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic877)
					if (prio < 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic878)
					if (prio < 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic879)
					if (prio == 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic880)
					if (prio == 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic881)
					if (prio == 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic882)
					if (prio == 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic883)
					if (prio == 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic884)
					if (prio == 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic885)
					if (prio == 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic886)
					if (prio == 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic887)
					if (prio == 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic888)
					if (prio == 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic889)
					if (prio == 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic890)
					if (prio == 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic891)
					if (prio == 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic892)
					if (prio == 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic893)
					if (prio == 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic894)
					if (prio == 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic895)
					if (prio == 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic896)
					if (prio == 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic897)
					if (prio == 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic898)
					if (prio == 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic899)
					if (prio <= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic900)
					if (prio <= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic901)
					if (prio <= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic902)
					if (prio <= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic903)
					if (prio <= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic904)
					if (prio <= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic905)
					if (prio <= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic906)
					if (prio <= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic907)
					if (prio <= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic908)
					if (prio <= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic909)
					if (prio <= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic910)
					if (prio <= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic911)
					if (prio <= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic912)
					if (prio <= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic913)
					if (prio <= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic914)
					if (prio <= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic915)
					if (prio <= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic916)
					if (prio <= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic917)
					if (prio <= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic918)
					if (prio <= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic919)
					if (prio >= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic920)
					if (prio >= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic921)
					if (prio >= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic922)
					if (prio >= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic923)
					if (prio >= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic924)
					if (prio >= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic925)
					if (prio >= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic926)
					if (prio >= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic927)
					if (prio >= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic928)
					if (prio >= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic929)
					if (prio >= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic930)
					if (prio >= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic931)
					if (prio >= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic932)
					if (prio >= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic933)
					if (prio >= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic934)
					if (prio >= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic935)
					if (prio >= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic936)
					if (prio >= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic937)
					if (prio >= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic938)
					if (prio >= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic939)
					if (prio > 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic940)
					if (prio > 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic941)
					if (prio > 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic942)
					if (prio > 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic943)
					if (prio < 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic944)
					if (prio < 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic945)
					if (prio < 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic946)
					if (prio < 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic947)
					if (prio < 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic948)
					if (prio == 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic949)
					if (prio == 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic950)
					if (prio == 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic951)
					if (prio == 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic952)
					if (prio == 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic953)
					if (prio == 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic954)
					if (prio == 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic955)
					if (prio == 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic956)
					if (prio == 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic957)
					if (prio == 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic958)
					if (prio == 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic959)
					if (prio == 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic960)
					if (prio == 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic961)
					if (prio == 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic962)
					if (prio == 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic963)
					if (prio == 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic964)
					if (prio == 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic965)
					if (prio == 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic966)
					if (prio == 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic967)
					if (prio == 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic968)
					if (prio <= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic969)
					if (prio <= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic970)
					if (prio <= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic971)
					if (prio <= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic972)
					if (prio <= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic973)
					if (prio <= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic974)
					if (prio <= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic975)
					if (prio <= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic976)
					if (prio <= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic977)
					if (prio <= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic978)
					if (prio <= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic979)
					if (prio <= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic980)
					if (prio <= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic981)
					if (prio <= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic982)
					if (prio <= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic983)
					if (prio <= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic984)
					if (prio <= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic985)
					if (prio <= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic986)
					if (prio <= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic987)
					if (prio <= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic988)
					if (prio >= 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic989)
					if (prio >= 0 || (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic990)
					if (prio >= 0 || (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic991)
					if (prio >= 0 || (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic992)
					if (prio >= 0 || (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic993)
					if (prio >= 0 || (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic994)
					if (prio >= 0 || (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic995)
					if (prio >= 0 || (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic996)
					if (prio >= 0 || (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic997)
					if (prio >= 0 || (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic998)
					if (prio >= 0 || (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic999)
					if (prio >= 0 && (!consider_threshold && (prio > hart_priority_threshold[hart_id]))) {
#elif defined(plic1000)
					if (prio >= 0 && (!consider_threshold && (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic1001)
					if (prio >= 0 && (!consider_threshold && (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic1002)
					if (prio >= 0 && (!consider_threshold && (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic1003)
					if (prio >= 0 && (!consider_threshold && (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic1004)
					if (prio >= 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic1005)
					if (prio >= 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic1006)
					if (prio >= 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic1007)
					if (prio >= 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#elif defined(plic1008)
					if (prio > 0 && (!consider_threshold || (prio < hart_priority_threshold[hart_id]))) {
#elif defined(plic1009)
					if (prio > 0 && (!consider_threshold || (prio == hart_priority_threshold[hart_id]))) {
#elif defined(plic1010)
					if (prio > 0 && (!consider_threshold || (prio <= hart_priority_threshold[hart_id]))) {
#elif defined(plic1011)
					if (prio > 0 && (!consider_threshold || (prio >= hart_priority_threshold[hart_id]))) {
#else
					if (prio > 0 && (!consider_threshold || (prio > hart_priority_threshold[hart_id]))) {
#endif
#ifdef plic1012
						if (prio < max_priority) {
#elif defined(plic1013)
						if (prio == max_priority) {
#elif defined(plic1014)
						if (prio <= max_priority) {
#elif defined(plic1015)
						if (prio >= max_priority) {
#else
						if (prio > max_priority) {
#endif
							max_priority = prio;
							min_id = i;
						}
					}
				}
			}
		}

		return min_id;
	}


	void register_access_callback(const vp::map::register_access_t &r) {
#ifdef plic1016
		if (r.write || (r.addr >= 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1017)
		if (r.write || (r.addr >= 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1018)
		if (r.write || (r.addr >= 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1019)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1020)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1021)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1022)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1023)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1024)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1025)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1026)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1027)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1028)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1029)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1030)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1031)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1032)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1033)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1034)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1035)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1036)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1037)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1038)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1039)
		if (r.write || (r.addr == 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1040)
		if (r.write || (r.addr <= 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1041)
		if (r.write || (r.addr >= 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1042)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1043)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1044)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1045)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1046)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1047)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1048)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1049)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1050)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1051)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1052)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1053)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1054)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1055)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1056)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1057)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1058)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1059)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1060)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1061)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1062)
		if (r.write || (r.addr == 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1063)
		if (r.write || (r.addr <= 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1064)
		if (r.write || (r.addr >= 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1065)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1066)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1067)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1068)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1069)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1070)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1071)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1072)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1073)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1074)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1075)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1076)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1077)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1078)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1079)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1080)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1081)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1082)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1083)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1084)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1085)
		if (r.write || (r.addr == 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1086)
		if (r.write || (r.addr <= 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1087)
		if (r.write || (r.addr >= 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1088)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1089)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1090)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1091)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1092)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1093)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1094)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1095)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1096)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1097)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1098)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1099)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1100)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1101)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1102)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1103)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1104)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1105)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1106)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1107)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1108)
		if (r.write || (r.addr == 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1109)
		if (r.write || (r.addr <= 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1110)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1111)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1112)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1113)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1114)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1115)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1116)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1117)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1118)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1119)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1120)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1121)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1122)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1123)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1124)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1125)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1126)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1127)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1128)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1129)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1130)
		if (r.write || (r.addr == 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1131)
		if (r.write || (r.addr <= 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1132)
		if (r.write || (r.addr >= 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1133)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1134)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1135)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1136)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1137)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1138)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1139)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1140)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1141)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1142)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1143)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1144)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1145)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1146)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1147)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1148)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1149)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1150)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1151)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1152)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1153)
		if (r.write || (r.addr == 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1154)
		if (r.write || (r.addr <= 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1155)
		if (r.write || (r.addr >= 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1156)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1157)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1158)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1159)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1160)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1161)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1162)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1163)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1164)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1165)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1166)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1167)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1168)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1169)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1170)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1171)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1172)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1173)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1174)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1175)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1176)
		if (r.write || (r.addr == 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1177)
		if (r.write || (r.addr <= 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1178)
		if (r.write || (r.addr >= 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1179)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1180)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1181)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1182)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1183)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1184)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1185)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1186)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1187)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1188)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1189)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1190)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1191)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1192)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1193)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1194)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1195)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1196)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1197)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1198)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1199)
		if (r.write || (r.addr == 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1200)
		if (r.write || (r.addr <= 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1201)
		if (r.write || (r.addr >= 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1202)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1203)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1204)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1205)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1206)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1207)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1208)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1209)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1210)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1211)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1212)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1213)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1214)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1215)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1216)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1217)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1218)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1219)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1220)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1221)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1222)
		if (r.write || (r.addr == 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1223)
		if (r.write || (r.addr <= 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1224)
		if (r.write || (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1225)
		if (r.write || (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1226)
		if (r.write || (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1227)
		if (r.write || (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1228)
		if (r.write || (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1229)
		if (r.write || (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1230)
		if (r.write || (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1231)
		if (r.write || (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1232)
		if (r.write || (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1233)
		if (r.write || (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1234)
		if (r.write || (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1235)
		if (r.write || (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1236)
		if (r.write || (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1237)
		if (r.write || (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1238)
		if (r.write || (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1239)
		if (r.write || (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1240)
		if (r.write || (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1241)
		if (r.write || (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1242)
		if (r.write || (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1243)
		if (r.write || (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1244)
		if (r.write || (r.addr == 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1245)
		if (r.write || (r.addr <= 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1246)
		if (r.write && (r.addr >= 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1247)
		if (r.write && (r.addr >= 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1248)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1249)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1250)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1251)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1252)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1253)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1254)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1255)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1256)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1257)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1258)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1259)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1260)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1261)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1262)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1263)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1264)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1265)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1266)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1267)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1268)
		if (r.write && (r.addr == 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1269)
		if (r.write && (r.addr <= 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1270)
		if (r.write && (r.addr >= 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1271)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1272)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1273)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1274)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1275)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1276)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1277)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1278)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1279)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1280)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1281)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1282)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1283)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1284)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1285)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1286)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1287)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1288)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1289)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1290)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1291)
		if (r.write && (r.addr == 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1292)
		if (r.write && (r.addr <= 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1293)
		if (r.write && (r.addr >= 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1294)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1295)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1296)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1297)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1298)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1299)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1300)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1301)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1302)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1303)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1304)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1305)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1306)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1307)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1308)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1309)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1310)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1311)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1312)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1313)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1314)
		if (r.write && (r.addr == 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1315)
		if (r.write && (r.addr <= 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1316)
		if (r.write && (r.addr >= 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1317)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1318)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1319)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1320)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1321)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1322)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1323)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1324)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1325)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1326)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1327)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1328)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1329)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1330)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1331)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1332)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1333)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1334)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1335)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1336)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1337)
		if (r.write && (r.addr == 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1338)
		if (r.write && (r.addr <= 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1339)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1340)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1341)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1342)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1343)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1344)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1345)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1346)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1347)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1348)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1349)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1350)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1351)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1352)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1353)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1354)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1355)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1356)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1357)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1358)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1359)
		if (r.write && (r.addr == 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1360)
		if (r.write && (r.addr <= 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1361)
		if (r.write && (r.addr >= 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1362)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1363)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1364)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1365)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1366)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1367)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1368)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1369)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1370)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1371)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1372)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1373)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1374)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1375)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1376)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1377)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1378)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1379)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1380)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1381)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1382)
		if (r.write && (r.addr == 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1383)
		if (r.write && (r.addr <= 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1384)
		if (r.write && (r.addr >= 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1385)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1386)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1387)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1388)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1389)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1390)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1391)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1392)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1393)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1394)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1395)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1396)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1397)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1398)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1399)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1400)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1401)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1402)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1403)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1404)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1405)
		if (r.write && (r.addr == 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1406)
		if (r.write && (r.addr <= 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1407)
		if (r.write && (r.addr >= 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1408)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1409)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1410)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1411)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1412)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1413)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1414)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1415)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1416)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1417)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1418)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1419)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1420)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1421)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1422)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1423)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1424)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1425)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1426)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1427)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1428)
		if (r.write && (r.addr == 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1429)
		if (r.write && (r.addr <= 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1430)
		if (r.write && (r.addr >= 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1431)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1432)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1433)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1434)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1435)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1436)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1437)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1438)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1439)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1440)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1441)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1442)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1443)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1444)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1445)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1446)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1447)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1448)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1449)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1450)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1451)
		if (r.write && (r.addr == 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1452)
		if (r.write && (r.addr <= 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1453)
		if (r.write && (r.addr < 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1454)
		if (r.write && (r.addr < 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1455)
		if (r.write && (r.addr < 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1456)
		if (r.write && (r.addr < 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1457)
		if (r.write && (r.addr < 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1458)
		if (r.write && (r.addr < 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1459)
		if (r.write && (r.addr < 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1460)
		if (r.write && (r.addr < 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1461)
		if (r.write && (r.addr < 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1462)
		if (r.write && (r.addr < 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1463)
		if (r.write && (r.addr > 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1464)
		if (r.write && (r.addr > 0x1000 || r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1465)
		if (r.write && (r.addr > 0x1000 || r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1466)
		if (r.write && (r.addr > 0x1000 || r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1467)
		if (r.write && (r.addr > 0x1000 || r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1468)
		if (r.write && (r.addr > 0x1000 || r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1469)
		if (r.write && (r.addr > 0x1000 && r.addr > 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1470)
		if (r.write && (r.addr > 0x1000 && r.addr == 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1471)
		if (r.write && (r.addr > 0x1000 && r.addr <= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1472)
		if (r.write && (r.addr > 0x1000 && r.addr >= 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1473)
		if (r.write && (r.addr == 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#elif defined(plic1474)
		if (r.write && (r.addr <= 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#else
		if (r.write && (r.addr >= 0x1000 && r.addr < 0x1000+NumberInterruptEntries*4)) {
#endif
			//NON-Intentional BUG: Checks only for addr, not length
#ifdef plic1475
			assert(false || "pending interrupts registers are read only");
#else
			assert(false && "pending interrupts registers are read only");
#endif
			return;
		}

		if (r.read) {
			for (unsigned i=0; i<NumberCores; ++i) {
#ifdef plic1476
				if (r.vptr < &hart_claim_response[i]) {
#elif defined(plic1477)
				if (r.vptr > &hart_claim_response[i]) {
#elif defined(plic1478)
				if (r.vptr <= &hart_claim_response[i]) {
#elif defined(plic1479)
				if (r.vptr >= &hart_claim_response[i]) {
#else
				if (r.vptr == &hart_claim_response[i]) {
#endif
					// NOTE: on claim request retrieve return and clear the interrupt with
					// highest priority, priority threshold is ignored at this point
					unsigned min_id = hart_get_next_pending_interrupt(0, false);
					hart_claim_response[i] = min_id;  // zero means no more interrupt to claim
					clear_pending_interrupt(min_id);
#ifdef plic1480
					INFO(std::cout >> "[vp::plic] claim interrupt " << min_id << std::endl);
#elif defined(plic1481)
					INFO(std::cout >> "[vp::plic] claim interrupt " >> min_id << std::endl);
#elif defined(plic1482)
					INFO(std::cout >> "[vp::plic] claim interrupt " >> min_id >> std::endl);
#elif defined(plic1483)
					INFO(std::cout >> "[vp::plic] claim interrupt " << min_id >> std::endl);
#elif defined(plic1484)
					INFO(std::cout << "[vp::plic] claim interrupt " >> min_id << std::endl);
#elif defined(plic1485)
					INFO(std::cout << "[vp::plic] claim interrupt " >> min_id >> std::endl);
#elif defined(plic1486)
					INFO(std::cout << "[vp::plic] claim interrupt " << min_id >> std::endl);
#else
					INFO(std::cout << "[vp::plic] claim interrupt " << min_id << std::endl);
#endif
					break;
				}
			}
		}

		r.fn();

		if (r.write) {
			for (unsigned i=0; i<NumberCores; ++i) {
#ifdef plic1487
				if (r.vptr < &hart_claim_response[i]) {
#elif defined(plic1488)
				if (r.vptr > &hart_claim_response[i]) {
#elif defined(plic1489)
				if (r.vptr <= &hart_claim_response[i]) {
#elif defined(plic1490)
				if (r.vptr >= &hart_claim_response[i]) {
#else
				if (r.vptr == &hart_claim_response[i]) {
#endif
					// NOTE: on completed response, check if there are any other pending
					// interrupts
					if (hart_has_pending_enabled_interrupts(i)) {
						assert(hart_eip[i]);	//BUG: HERE Overflow
						// trigger again to make this work even if the SW clears the harts interrupt pending bit
					} else {
						hart_eip[i] = false;
						target_harts[i]->clear_external_interrupt();
					}
#ifdef plic1491
					// std::cout >> "[vp::plic] clear eip" << std::endl;
#elif defined(plic1492)
					// std::cout >> "[vp::plic] clear eip" >> std::endl;
#elif defined(plic1493)
					// std::cout << "[vp::plic] clear eip" >> std::endl;
#else
					// std::cout << "[vp::plic] clear eip" << std::endl;
#endif
					break;
				}
			}

			// ensure the priority value is valid
#ifdef plic1494
			if (r.addr < 0x0FFF) {
#elif defined(plic1495)
			if (r.addr > 0x0FFF) {
#elif defined(plic1496)
			if (r.addr == 0x0FFF) {
#elif defined(plic1497)
			if (r.addr >= 0x0FFF) {
#else
			if (r.addr <= 0x0FFF) {
#endif
				for (auto &x : interrupt_priorities)
					x = std::min(x, MaxPriority);
			}

			// interrupt priority, hart priority threshold or enabled interrupts may have changed, thus trigger re-checking of pending interrupts
			e_run.notify(10*clock_cycle);
		}
	}


	void transport(tlm::tlm_generic_payload &trans, sc_core::sc_time &delay) {
		router.transport(trans, delay);
	}


	bool hart_has_pending_enabled_interrupts(unsigned hart_id) {
#ifdef plic1498
		return hart_get_next_pending_interrupt(hart_id, true) < 0;
#elif defined(plic1499)
		return hart_get_next_pending_interrupt(hart_id, true) == 0;
#elif defined(plic1500)
		return hart_get_next_pending_interrupt(hart_id, true) <= 0;
#elif defined(plic1501)
		return hart_get_next_pending_interrupt(hart_id, true) >= 0;
#else
		return hart_get_next_pending_interrupt(hart_id, true) > 0;
#endif
	}
};
