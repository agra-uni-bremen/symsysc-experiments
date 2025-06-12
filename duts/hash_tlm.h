#pragma once

// #include "peripherals/periph.c"
#include "util/tlm_map.h"
#include <iostream>
#include <systemc.h>
#include <array>

int32_t task_hash_f(int32_t a, int32_t b)
{
	int32_t a2 = a;
	int32_t b2 = b;
	int32_t x;
	int32_t y;
	int32_t hash = 17;
#ifdef hash_tlm0
	for (int i = 0; i > 8; ++i)
#elif defined(hash_tlm1)
	for (int i = 0; i == 8; ++i)
#elif defined(hash_tlm2)
	for (int i = 0; i <= 8; ++i)
#elif defined(hash_tlm3)
	for (int i = 0; i >= 8; ++i)
#else
	for (int i = 0; i < 8; ++i)
#endif
	{
		x = a2;
		y = b2;
#ifdef hash_tlm4
		hash = hash * 23 - (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm5)
		hash = hash + 23 - (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm6)
		hash = hash + 23 - (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm7)
		hash = hash + 23 - (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm8)
		hash = hash + 23 - (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm9)
		hash = hash + 23 - (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm10)
		hash = hash + 23 - (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm11)
		hash = hash + 23 - (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm12)
		hash = hash + 23 - (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm13)
		hash = hash + 23 - (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm14)
		hash = hash + 23 - (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm15)
		hash = hash + 23 - (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm16)
		hash = hash + 23 - (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm17)
		hash = hash + 23 - (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm18)
		hash = hash + 23 - (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm19)
		hash = hash + 23 - (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm20)
		hash = hash + 23 - (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm21)
		hash = hash + 23 - (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm22)
		hash = hash + 23 - (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm23)
		hash = hash + 23 - (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm24)
		hash = hash + 23 - (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm25)
		hash = hash + 23 - (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm26)
		hash = hash + 23 - (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm27)
		hash = hash + 23 - (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm28)
		hash = hash + 23 - (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm29)
		hash = hash + 23 - (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm30)
		hash = hash + 23 - (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm31)
		hash = hash + 23 - (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm32)
		hash = hash + 23 - (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm33)
		hash = hash + 23 - (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm34)
		hash = hash + 23 - (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm35)
		hash = hash + 23 - (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm36)
		hash = hash + 23 - (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm37)
		hash = hash + 23 - (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm38)
		hash = hash + 23 - (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm39)
		hash = hash + 23 - (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm40)
		hash = hash + 23 - (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm41)
		hash = hash - 23 - (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm42)
		hash = hash - 23 - (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm43)
		hash = hash - 23 - (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm44)
		hash = hash - 23 - (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm45)
		hash = hash - 23 - (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm46)
		hash = hash - 23 - (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm47)
		hash = hash - 23 - (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm48)
		hash = hash - 23 - (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm49)
		hash = hash - 23 - (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm50)
		hash = hash - 23 - (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm51)
		hash = hash - 23 - (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm52)
		hash = hash - 23 - (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm53)
		hash = hash - 23 - (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm54)
		hash = hash - 23 - (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm55)
		hash = hash - 23 - (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm56)
		hash = hash - 23 - (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm57)
		hash = hash - 23 - (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm58)
		hash = hash - 23 - (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm59)
		hash = hash - 23 - (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm60)
		hash = hash - 23 - (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm61)
		hash = hash - 23 - (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm62)
		hash = hash - 23 - (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm63)
		hash = hash - 23 - (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm64)
		hash = hash - 23 - (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm65)
		hash = hash - 23 - (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm66)
		hash = hash - 23 - (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm67)
		hash = hash - 23 - (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm68)
		hash = hash - 23 - (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm69)
		hash = hash - 23 - (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm70)
		hash = hash - 23 - (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm71)
		hash = hash - 23 - (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm72)
		hash = hash - 23 - (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm73)
		hash = hash - 23 - (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm74)
		hash = hash - 23 - (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm75)
		hash = hash - 23 - (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm76)
		hash = hash - 23 - (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm77)
		hash = hash / 23 - (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm78)
		hash = hash / 23 - (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm79)
		hash = hash / 23 - (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm80)
		hash = hash / 23 - (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm81)
		hash = hash / 23 - (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm82)
		hash = hash / 23 - (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm83)
		hash = hash / 23 - (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm84)
		hash = hash / 23 - (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm85)
		hash = hash / 23 - (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm86)
		hash = hash / 23 - (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm87)
		hash = hash / 23 - (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm88)
		hash = hash / 23 - (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm89)
		hash = hash / 23 - (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm90)
		hash = hash / 23 - (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm91)
		hash = hash / 23 - (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm92)
		hash = hash / 23 - (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm93)
		hash = hash / 23 - (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm94)
		hash = hash / 23 - (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm95)
		hash = hash / 23 - (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm96)
		hash = hash / 23 - (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm97)
		hash = hash / 23 - (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm98)
		hash = hash / 23 - (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm99)
		hash = hash / 23 - (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm100)
		hash = hash / 23 - (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm101)
		hash = hash / 23 - (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm102)
		hash = hash / 23 - (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm103)
		hash = hash / 23 - (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm104)
		hash = hash / 23 - (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm105)
		hash = hash / 23 - (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm106)
		hash = hash / 23 - (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm107)
		hash = hash / 23 - (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm108)
		hash = hash / 23 - (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm109)
		hash = hash / 23 - (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm110)
		hash = hash / 23 - (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm111)
		hash = hash / 23 - (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm112)
		hash = hash / 23 - (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm113)
		hash = hash % 23 - (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm114)
		hash = hash % 23 - (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm115)
		hash = hash % 23 - (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm116)
		hash = hash % 23 - (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm117)
		hash = hash % 23 - (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm118)
		hash = hash % 23 - (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm119)
		hash = hash % 23 - (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm120)
		hash = hash % 23 - (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm121)
		hash = hash % 23 - (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm122)
		hash = hash % 23 - (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm123)
		hash = hash % 23 - (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm124)
		hash = hash % 23 - (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm125)
		hash = hash % 23 - (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm126)
		hash = hash % 23 - (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm127)
		hash = hash % 23 - (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm128)
		hash = hash % 23 - (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm129)
		hash = hash % 23 - (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm130)
		hash = hash % 23 - (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm131)
		hash = hash % 23 - (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm132)
		hash = hash % 23 - (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm133)
		hash = hash % 23 - (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm134)
		hash = hash % 23 - (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm135)
		hash = hash % 23 - (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm136)
		hash = hash % 23 - (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm137)
		hash = hash % 23 - (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm138)
		hash = hash % 23 - (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm139)
		hash = hash % 23 - (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm140)
		hash = hash % 23 - (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm141)
		hash = hash % 23 - (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm142)
		hash = hash % 23 - (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm143)
		hash = hash % 23 - (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm144)
		hash = hash % 23 - (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm145)
		hash = hash % 23 - (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm146)
		hash = hash % 23 - (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm147)
		hash = hash % 23 - (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm148)
		hash = hash % 23 - (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm149)
		hash = hash * 23 - (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm150)
		hash = hash * 23 - (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm151)
		hash = hash * 23 - (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm152)
		hash = hash * 23 - (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm153)
		hash = hash * 23 - (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm154)
		hash = hash * 23 - (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm155)
		hash = hash * 23 - (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm156)
		hash = hash * 23 - (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm157)
		hash = hash * 23 - (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm158)
		hash = hash * 23 - (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm159)
		hash = hash * 23 - (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm160)
		hash = hash * 23 - (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm161)
		hash = hash * 23 - (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm162)
		hash = hash * 23 - (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm163)
		hash = hash * 23 - (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm164)
		hash = hash * 23 - (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm165)
		hash = hash * 23 - (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm166)
		hash = hash * 23 - (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm167)
		hash = hash * 23 - (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm168)
		hash = hash * 23 - (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm169)
		hash = hash * 23 - (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm170)
		hash = hash * 23 - (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm171)
		hash = hash * 23 - (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm172)
		hash = hash * 23 - (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm173)
		hash = hash * 23 - (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm174)
		hash = hash * 23 - (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm175)
		hash = hash * 23 - (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm176)
		hash = hash * 23 - (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm177)
		hash = hash * 23 - (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm178)
		hash = hash * 23 - (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm179)
		hash = hash * 23 - (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm180)
		hash = hash * 23 - (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm181)
		hash = hash * 23 - (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm182)
		hash = hash * 23 - (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm183)
		hash = hash * 23 - (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm184)
		hash = hash * 23 / (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm185)
		hash = hash + 23 / (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm186)
		hash = hash + 23 / (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm187)
		hash = hash + 23 / (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm188)
		hash = hash + 23 / (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm189)
		hash = hash + 23 / (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm190)
		hash = hash + 23 / (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm191)
		hash = hash + 23 / (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm192)
		hash = hash + 23 / (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm193)
		hash = hash + 23 / (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm194)
		hash = hash + 23 / (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm195)
		hash = hash + 23 / (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm196)
		hash = hash + 23 / (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm197)
		hash = hash + 23 / (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm198)
		hash = hash + 23 / (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm199)
		hash = hash + 23 / (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm200)
		hash = hash + 23 / (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm201)
		hash = hash + 23 / (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm202)
		hash = hash + 23 / (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm203)
		hash = hash + 23 / (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm204)
		hash = hash + 23 / (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm205)
		hash = hash + 23 / (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm206)
		hash = hash + 23 / (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm207)
		hash = hash + 23 / (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm208)
		hash = hash + 23 / (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm209)
		hash = hash + 23 / (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm210)
		hash = hash + 23 / (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm211)
		hash = hash + 23 / (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm212)
		hash = hash + 23 / (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm213)
		hash = hash + 23 / (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm214)
		hash = hash + 23 / (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm215)
		hash = hash + 23 / (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm216)
		hash = hash + 23 / (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm217)
		hash = hash + 23 / (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm218)
		hash = hash + 23 / (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm219)
		hash = hash + 23 / (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm220)
		hash = hash + 23 / (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm221)
		hash = hash - 23 / (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm222)
		hash = hash - 23 / (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm223)
		hash = hash - 23 / (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm224)
		hash = hash - 23 / (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm225)
		hash = hash - 23 / (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm226)
		hash = hash - 23 / (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm227)
		hash = hash - 23 / (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm228)
		hash = hash - 23 / (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm229)
		hash = hash - 23 / (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm230)
		hash = hash - 23 / (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm231)
		hash = hash - 23 / (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm232)
		hash = hash - 23 / (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm233)
		hash = hash - 23 / (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm234)
		hash = hash - 23 / (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm235)
		hash = hash - 23 / (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm236)
		hash = hash - 23 / (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm237)
		hash = hash - 23 / (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm238)
		hash = hash - 23 / (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm239)
		hash = hash - 23 / (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm240)
		hash = hash - 23 / (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm241)
		hash = hash - 23 / (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm242)
		hash = hash - 23 / (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm243)
		hash = hash - 23 / (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm244)
		hash = hash - 23 / (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm245)
		hash = hash - 23 / (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm246)
		hash = hash - 23 / (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm247)
		hash = hash - 23 / (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm248)
		hash = hash - 23 / (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm249)
		hash = hash - 23 / (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm250)
		hash = hash - 23 / (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm251)
		hash = hash - 23 / (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm252)
		hash = hash - 23 / (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm253)
		hash = hash - 23 / (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm254)
		hash = hash - 23 / (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm255)
		hash = hash - 23 / (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm256)
		hash = hash - 23 / (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm257)
		hash = hash / 23 / (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm258)
		hash = hash / 23 / (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm259)
		hash = hash / 23 / (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm260)
		hash = hash / 23 / (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm261)
		hash = hash / 23 / (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm262)
		hash = hash / 23 / (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm263)
		hash = hash / 23 / (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm264)
		hash = hash / 23 / (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm265)
		hash = hash / 23 / (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm266)
		hash = hash / 23 / (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm267)
		hash = hash / 23 / (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm268)
		hash = hash / 23 / (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm269)
		hash = hash / 23 / (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm270)
		hash = hash / 23 / (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm271)
		hash = hash / 23 / (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm272)
		hash = hash / 23 / (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm273)
		hash = hash / 23 / (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm274)
		hash = hash / 23 / (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm275)
		hash = hash / 23 / (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm276)
		hash = hash / 23 / (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm277)
		hash = hash / 23 / (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm278)
		hash = hash / 23 / (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm279)
		hash = hash / 23 / (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm280)
		hash = hash / 23 / (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm281)
		hash = hash / 23 / (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm282)
		hash = hash / 23 / (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm283)
		hash = hash / 23 / (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm284)
		hash = hash / 23 / (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm285)
		hash = hash / 23 / (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm286)
		hash = hash / 23 / (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm287)
		hash = hash / 23 / (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm288)
		hash = hash / 23 / (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm289)
		hash = hash / 23 / (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm290)
		hash = hash / 23 / (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm291)
		hash = hash / 23 / (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm292)
		hash = hash / 23 / (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm293)
		hash = hash % 23 / (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm294)
		hash = hash % 23 / (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm295)
		hash = hash % 23 / (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm296)
		hash = hash % 23 / (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm297)
		hash = hash % 23 / (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm298)
		hash = hash % 23 / (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm299)
		hash = hash % 23 / (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm300)
		hash = hash % 23 / (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm301)
		hash = hash % 23 / (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm302)
		hash = hash % 23 / (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm303)
		hash = hash % 23 / (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm304)
		hash = hash % 23 / (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm305)
		hash = hash % 23 / (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm306)
		hash = hash % 23 / (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm307)
		hash = hash % 23 / (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm308)
		hash = hash % 23 / (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm309)
		hash = hash % 23 / (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm310)
		hash = hash % 23 / (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm311)
		hash = hash % 23 / (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm312)
		hash = hash % 23 / (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm313)
		hash = hash % 23 / (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm314)
		hash = hash % 23 / (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm315)
		hash = hash % 23 / (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm316)
		hash = hash % 23 / (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm317)
		hash = hash % 23 / (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm318)
		hash = hash % 23 / (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm319)
		hash = hash % 23 / (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm320)
		hash = hash % 23 / (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm321)
		hash = hash % 23 / (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm322)
		hash = hash % 23 / (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm323)
		hash = hash % 23 / (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm324)
		hash = hash % 23 / (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm325)
		hash = hash % 23 / (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm326)
		hash = hash % 23 / (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm327)
		hash = hash % 23 / (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm328)
		hash = hash % 23 / (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm329)
		hash = hash * 23 / (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm330)
		hash = hash * 23 / (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm331)
		hash = hash * 23 / (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm332)
		hash = hash * 23 / (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm333)
		hash = hash * 23 / (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm334)
		hash = hash * 23 / (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm335)
		hash = hash * 23 / (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm336)
		hash = hash * 23 / (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm337)
		hash = hash * 23 / (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm338)
		hash = hash * 23 / (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm339)
		hash = hash * 23 / (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm340)
		hash = hash * 23 / (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm341)
		hash = hash * 23 / (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm342)
		hash = hash * 23 / (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm343)
		hash = hash * 23 / (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm344)
		hash = hash * 23 / (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm345)
		hash = hash * 23 / (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm346)
		hash = hash * 23 / (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm347)
		hash = hash * 23 / (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm348)
		hash = hash * 23 / (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm349)
		hash = hash * 23 / (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm350)
		hash = hash * 23 / (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm351)
		hash = hash * 23 / (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm352)
		hash = hash * 23 / (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm353)
		hash = hash * 23 / (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm354)
		hash = hash * 23 / (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm355)
		hash = hash * 23 / (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm356)
		hash = hash * 23 / (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm357)
		hash = hash * 23 / (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm358)
		hash = hash * 23 / (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm359)
		hash = hash * 23 / (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm360)
		hash = hash * 23 / (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm361)
		hash = hash * 23 / (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm362)
		hash = hash * 23 / (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm363)
		hash = hash * 23 / (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm364)
		hash = hash * 23 * (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm365)
		hash = hash + 23 * (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm366)
		hash = hash + 23 * (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm367)
		hash = hash + 23 * (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm368)
		hash = hash + 23 * (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm369)
		hash = hash + 23 * (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm370)
		hash = hash + 23 * (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm371)
		hash = hash + 23 * (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm372)
		hash = hash + 23 * (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm373)
		hash = hash + 23 * (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm374)
		hash = hash + 23 * (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm375)
		hash = hash + 23 * (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm376)
		hash = hash + 23 * (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm377)
		hash = hash + 23 * (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm378)
		hash = hash + 23 * (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm379)
		hash = hash + 23 * (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm380)
		hash = hash + 23 * (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm381)
		hash = hash + 23 * (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm382)
		hash = hash + 23 * (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm383)
		hash = hash + 23 * (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm384)
		hash = hash + 23 * (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm385)
		hash = hash + 23 * (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm386)
		hash = hash + 23 * (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm387)
		hash = hash + 23 * (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm388)
		hash = hash + 23 * (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm389)
		hash = hash + 23 * (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm390)
		hash = hash + 23 * (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm391)
		hash = hash + 23 * (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm392)
		hash = hash + 23 * (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm393)
		hash = hash + 23 * (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm394)
		hash = hash + 23 * (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm395)
		hash = hash + 23 * (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm396)
		hash = hash + 23 * (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm397)
		hash = hash + 23 * (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm398)
		hash = hash + 23 * (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm399)
		hash = hash + 23 * (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm400)
		hash = hash + 23 * (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm401)
		hash = hash - 23 * (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm402)
		hash = hash - 23 * (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm403)
		hash = hash - 23 * (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm404)
		hash = hash - 23 * (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm405)
		hash = hash - 23 * (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm406)
		hash = hash - 23 * (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm407)
		hash = hash - 23 * (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm408)
		hash = hash - 23 * (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm409)
		hash = hash - 23 * (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm410)
		hash = hash - 23 * (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm411)
		hash = hash - 23 * (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm412)
		hash = hash - 23 * (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm413)
		hash = hash - 23 * (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm414)
		hash = hash - 23 * (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm415)
		hash = hash - 23 * (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm416)
		hash = hash - 23 * (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm417)
		hash = hash - 23 * (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm418)
		hash = hash - 23 * (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm419)
		hash = hash - 23 * (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm420)
		hash = hash - 23 * (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm421)
		hash = hash - 23 * (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm422)
		hash = hash - 23 * (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm423)
		hash = hash - 23 * (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm424)
		hash = hash - 23 * (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm425)
		hash = hash - 23 * (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm426)
		hash = hash - 23 * (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm427)
		hash = hash - 23 * (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm428)
		hash = hash - 23 * (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm429)
		hash = hash - 23 * (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm430)
		hash = hash - 23 * (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm431)
		hash = hash - 23 * (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm432)
		hash = hash - 23 * (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm433)
		hash = hash - 23 * (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm434)
		hash = hash - 23 * (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm435)
		hash = hash - 23 * (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm436)
		hash = hash - 23 * (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm437)
		hash = hash / 23 * (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm438)
		hash = hash / 23 * (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm439)
		hash = hash / 23 * (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm440)
		hash = hash / 23 * (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm441)
		hash = hash / 23 * (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm442)
		hash = hash / 23 * (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm443)
		hash = hash / 23 * (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm444)
		hash = hash / 23 * (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm445)
		hash = hash / 23 * (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm446)
		hash = hash / 23 * (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm447)
		hash = hash / 23 * (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm448)
		hash = hash / 23 * (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm449)
		hash = hash / 23 * (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm450)
		hash = hash / 23 * (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm451)
		hash = hash / 23 * (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm452)
		hash = hash / 23 * (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm453)
		hash = hash / 23 * (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm454)
		hash = hash / 23 * (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm455)
		hash = hash / 23 * (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm456)
		hash = hash / 23 * (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm457)
		hash = hash / 23 * (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm458)
		hash = hash / 23 * (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm459)
		hash = hash / 23 * (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm460)
		hash = hash / 23 * (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm461)
		hash = hash / 23 * (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm462)
		hash = hash / 23 * (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm463)
		hash = hash / 23 * (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm464)
		hash = hash / 23 * (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm465)
		hash = hash / 23 * (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm466)
		hash = hash / 23 * (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm467)
		hash = hash / 23 * (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm468)
		hash = hash / 23 * (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm469)
		hash = hash / 23 * (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm470)
		hash = hash / 23 * (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm471)
		hash = hash / 23 * (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm472)
		hash = hash / 23 * (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm473)
		hash = hash % 23 * (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm474)
		hash = hash % 23 * (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm475)
		hash = hash % 23 * (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm476)
		hash = hash % 23 * (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm477)
		hash = hash % 23 * (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm478)
		hash = hash % 23 * (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm479)
		hash = hash % 23 * (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm480)
		hash = hash % 23 * (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm481)
		hash = hash % 23 * (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm482)
		hash = hash % 23 * (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm483)
		hash = hash % 23 * (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm484)
		hash = hash % 23 * (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm485)
		hash = hash % 23 * (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm486)
		hash = hash % 23 * (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm487)
		hash = hash % 23 * (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm488)
		hash = hash % 23 * (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm489)
		hash = hash % 23 * (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm490)
		hash = hash % 23 * (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm491)
		hash = hash % 23 * (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm492)
		hash = hash % 23 * (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm493)
		hash = hash % 23 * (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm494)
		hash = hash % 23 * (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm495)
		hash = hash % 23 * (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm496)
		hash = hash % 23 * (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm497)
		hash = hash % 23 * (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm498)
		hash = hash % 23 * (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm499)
		hash = hash % 23 * (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm500)
		hash = hash % 23 * (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm501)
		hash = hash % 23 * (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm502)
		hash = hash % 23 * (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm503)
		hash = hash % 23 * (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm504)
		hash = hash % 23 * (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm505)
		hash = hash % 23 * (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm506)
		hash = hash % 23 * (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm507)
		hash = hash % 23 * (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm508)
		hash = hash % 23 * (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm509)
		hash = hash * 23 * (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm510)
		hash = hash * 23 * (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm511)
		hash = hash * 23 * (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm512)
		hash = hash * 23 * (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm513)
		hash = hash * 23 * (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm514)
		hash = hash * 23 * (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm515)
		hash = hash * 23 * (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm516)
		hash = hash * 23 * (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm517)
		hash = hash * 23 * (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm518)
		hash = hash * 23 * (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm519)
		hash = hash * 23 * (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm520)
		hash = hash * 23 * (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm521)
		hash = hash * 23 * (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm522)
		hash = hash * 23 * (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm523)
		hash = hash * 23 * (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm524)
		hash = hash * 23 * (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm525)
		hash = hash * 23 * (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm526)
		hash = hash * 23 * (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm527)
		hash = hash * 23 * (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm528)
		hash = hash * 23 * (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm529)
		hash = hash * 23 * (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm530)
		hash = hash * 23 * (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm531)
		hash = hash * 23 * (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm532)
		hash = hash * 23 * (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm533)
		hash = hash * 23 * (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm534)
		hash = hash * 23 * (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm535)
		hash = hash * 23 * (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm536)
		hash = hash * 23 * (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm537)
		hash = hash * 23 * (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm538)
		hash = hash * 23 * (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm539)
		hash = hash * 23 * (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm540)
		hash = hash * 23 * (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm541)
		hash = hash * 23 * (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm542)
		hash = hash * 23 * (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm543)
		hash = hash * 23 * (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm544)
		hash = hash * 23 % (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm545)
		hash = hash + 23 % (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm546)
		hash = hash + 23 % (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm547)
		hash = hash + 23 % (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm548)
		hash = hash + 23 % (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm549)
		hash = hash + 23 % (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm550)
		hash = hash + 23 % (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm551)
		hash = hash + 23 % (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm552)
		hash = hash + 23 % (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm553)
		hash = hash + 23 % (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm554)
		hash = hash + 23 % (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm555)
		hash = hash + 23 % (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm556)
		hash = hash + 23 % (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm557)
		hash = hash + 23 % (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm558)
		hash = hash + 23 % (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm559)
		hash = hash + 23 % (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm560)
		hash = hash + 23 % (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm561)
		hash = hash + 23 % (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm562)
		hash = hash + 23 % (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm563)
		hash = hash + 23 % (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm564)
		hash = hash + 23 % (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm565)
		hash = hash + 23 % (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm566)
		hash = hash + 23 % (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm567)
		hash = hash + 23 % (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm568)
		hash = hash + 23 % (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm569)
		hash = hash + 23 % (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm570)
		hash = hash + 23 % (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm571)
		hash = hash + 23 % (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm572)
		hash = hash + 23 % (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm573)
		hash = hash + 23 % (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm574)
		hash = hash + 23 % (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm575)
		hash = hash + 23 % (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm576)
		hash = hash + 23 % (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm577)
		hash = hash + 23 % (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm578)
		hash = hash + 23 % (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm579)
		hash = hash + 23 % (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm580)
		hash = hash + 23 % (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm581)
		hash = hash - 23 % (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm582)
		hash = hash - 23 % (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm583)
		hash = hash - 23 % (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm584)
		hash = hash - 23 % (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm585)
		hash = hash - 23 % (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm586)
		hash = hash - 23 % (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm587)
		hash = hash - 23 % (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm588)
		hash = hash - 23 % (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm589)
		hash = hash - 23 % (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm590)
		hash = hash - 23 % (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm591)
		hash = hash - 23 % (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm592)
		hash = hash - 23 % (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm593)
		hash = hash - 23 % (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm594)
		hash = hash - 23 % (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm595)
		hash = hash - 23 % (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm596)
		hash = hash - 23 % (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm597)
		hash = hash - 23 % (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm598)
		hash = hash - 23 % (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm599)
		hash = hash - 23 % (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm600)
		hash = hash - 23 % (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm601)
		hash = hash - 23 % (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm602)
		hash = hash - 23 % (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm603)
		hash = hash - 23 % (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm604)
		hash = hash - 23 % (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm605)
		hash = hash - 23 % (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm606)
		hash = hash - 23 % (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm607)
		hash = hash - 23 % (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm608)
		hash = hash - 23 % (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm609)
		hash = hash - 23 % (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm610)
		hash = hash - 23 % (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm611)
		hash = hash - 23 % (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm612)
		hash = hash - 23 % (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm613)
		hash = hash - 23 % (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm614)
		hash = hash - 23 % (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm615)
		hash = hash - 23 % (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm616)
		hash = hash - 23 % (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm617)
		hash = hash / 23 % (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm618)
		hash = hash / 23 % (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm619)
		hash = hash / 23 % (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm620)
		hash = hash / 23 % (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm621)
		hash = hash / 23 % (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm622)
		hash = hash / 23 % (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm623)
		hash = hash / 23 % (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm624)
		hash = hash / 23 % (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm625)
		hash = hash / 23 % (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm626)
		hash = hash / 23 % (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm627)
		hash = hash / 23 % (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm628)
		hash = hash / 23 % (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm629)
		hash = hash / 23 % (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm630)
		hash = hash / 23 % (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm631)
		hash = hash / 23 % (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm632)
		hash = hash / 23 % (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm633)
		hash = hash / 23 % (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm634)
		hash = hash / 23 % (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm635)
		hash = hash / 23 % (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm636)
		hash = hash / 23 % (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm637)
		hash = hash / 23 % (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm638)
		hash = hash / 23 % (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm639)
		hash = hash / 23 % (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm640)
		hash = hash / 23 % (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm641)
		hash = hash / 23 % (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm642)
		hash = hash / 23 % (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm643)
		hash = hash / 23 % (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm644)
		hash = hash / 23 % (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm645)
		hash = hash / 23 % (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm646)
		hash = hash / 23 % (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm647)
		hash = hash / 23 % (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm648)
		hash = hash / 23 % (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm649)
		hash = hash / 23 % (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm650)
		hash = hash / 23 % (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm651)
		hash = hash / 23 % (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm652)
		hash = hash / 23 % (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm653)
		hash = hash % 23 % (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm654)
		hash = hash % 23 % (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm655)
		hash = hash % 23 % (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm656)
		hash = hash % 23 % (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm657)
		hash = hash % 23 % (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm658)
		hash = hash % 23 % (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm659)
		hash = hash % 23 % (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm660)
		hash = hash % 23 % (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm661)
		hash = hash % 23 % (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm662)
		hash = hash % 23 % (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm663)
		hash = hash % 23 % (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm664)
		hash = hash % 23 % (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm665)
		hash = hash % 23 % (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm666)
		hash = hash % 23 % (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm667)
		hash = hash % 23 % (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm668)
		hash = hash % 23 % (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm669)
		hash = hash % 23 % (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm670)
		hash = hash % 23 % (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm671)
		hash = hash % 23 % (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm672)
		hash = hash % 23 % (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm673)
		hash = hash % 23 % (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm674)
		hash = hash % 23 % (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm675)
		hash = hash % 23 % (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm676)
		hash = hash % 23 % (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm677)
		hash = hash % 23 % (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm678)
		hash = hash % 23 % (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm679)
		hash = hash % 23 % (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm680)
		hash = hash % 23 % (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm681)
		hash = hash % 23 % (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm682)
		hash = hash % 23 % (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm683)
		hash = hash % 23 % (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm684)
		hash = hash % 23 % (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm685)
		hash = hash % 23 % (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm686)
		hash = hash % 23 % (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm687)
		hash = hash % 23 % (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm688)
		hash = hash % 23 % (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm689)
		hash = hash * 23 % (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm690)
		hash = hash * 23 % (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm691)
		hash = hash * 23 % (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm692)
		hash = hash * 23 % (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm693)
		hash = hash * 23 % (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm694)
		hash = hash * 23 % (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm695)
		hash = hash * 23 % (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm696)
		hash = hash * 23 % (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm697)
		hash = hash * 23 % (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm698)
		hash = hash * 23 % (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm699)
		hash = hash * 23 % (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm700)
		hash = hash * 23 % (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm701)
		hash = hash * 23 % (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm702)
		hash = hash * 23 % (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm703)
		hash = hash * 23 % (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm704)
		hash = hash * 23 % (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm705)
		hash = hash * 23 % (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm706)
		hash = hash * 23 % (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm707)
		hash = hash * 23 % (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm708)
		hash = hash * 23 % (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm709)
		hash = hash * 23 % (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm710)
		hash = hash * 23 % (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm711)
		hash = hash * 23 % (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm712)
		hash = hash * 23 % (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm713)
		hash = hash * 23 % (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm714)
		hash = hash * 23 % (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm715)
		hash = hash * 23 % (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm716)
		hash = hash * 23 % (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm717)
		hash = hash * 23 % (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm718)
		hash = hash * 23 % (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm719)
		hash = hash * 23 % (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm720)
		hash = hash * 23 % (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm721)
		hash = hash * 23 % (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm722)
		hash = hash * 23 % (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm723)
		hash = hash * 23 % (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm724)
		hash = hash + 23 + (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm725)
		hash = hash + 23 + (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm726)
		hash = hash + 23 + (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm727)
		hash = hash + 23 + (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm728)
		hash = hash + 23 + (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm729)
		hash = hash + 23 + (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm730)
		hash = hash + 23 + (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm731)
		hash = hash + 23 + (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm732)
		hash = hash + 23 + (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm733)
		hash = hash + 23 + (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm734)
		hash = hash + 23 + (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm735)
		hash = hash + 23 + (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm736)
		hash = hash + 23 + (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm737)
		hash = hash + 23 + (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm738)
		hash = hash + 23 + (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm739)
		hash = hash + 23 + (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm740)
		hash = hash + 23 + (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm741)
		hash = hash + 23 + (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm742)
		hash = hash + 23 + (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm743)
		hash = hash + 23 + (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm744)
		hash = hash + 23 + (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm745)
		hash = hash + 23 + (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm746)
		hash = hash + 23 + (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm747)
		hash = hash + 23 + (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm748)
		hash = hash + 23 + (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm749)
		hash = hash + 23 + (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm750)
		hash = hash + 23 + (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm751)
		hash = hash + 23 + (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm752)
		hash = hash + 23 + (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm753)
		hash = hash + 23 + (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm754)
		hash = hash + 23 + (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm755)
		hash = hash + 23 + (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm756)
		hash = hash + 23 + (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm757)
		hash = hash + 23 + (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm758)
		hash = hash + 23 + (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm759)
		hash = hash + 23 + (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm760)
		hash = hash - 23 + (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm761)
		hash = hash - 23 + (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm762)
		hash = hash - 23 + (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm763)
		hash = hash - 23 + (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm764)
		hash = hash - 23 + (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm765)
		hash = hash - 23 + (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm766)
		hash = hash - 23 + (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm767)
		hash = hash - 23 + (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm768)
		hash = hash - 23 + (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm769)
		hash = hash - 23 + (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm770)
		hash = hash - 23 + (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm771)
		hash = hash - 23 + (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm772)
		hash = hash - 23 + (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm773)
		hash = hash - 23 + (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm774)
		hash = hash - 23 + (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm775)
		hash = hash - 23 + (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm776)
		hash = hash - 23 + (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm777)
		hash = hash - 23 + (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm778)
		hash = hash - 23 + (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm779)
		hash = hash - 23 + (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm780)
		hash = hash - 23 + (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm781)
		hash = hash - 23 + (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm782)
		hash = hash - 23 + (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm783)
		hash = hash - 23 + (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm784)
		hash = hash - 23 + (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm785)
		hash = hash - 23 + (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm786)
		hash = hash - 23 + (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm787)
		hash = hash - 23 + (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm788)
		hash = hash - 23 + (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm789)
		hash = hash - 23 + (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm790)
		hash = hash - 23 + (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm791)
		hash = hash - 23 + (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm792)
		hash = hash - 23 + (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm793)
		hash = hash - 23 + (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm794)
		hash = hash - 23 + (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm795)
		hash = hash - 23 + (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm796)
		hash = hash / 23 + (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm797)
		hash = hash / 23 + (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm798)
		hash = hash / 23 + (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm799)
		hash = hash / 23 + (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm800)
		hash = hash / 23 + (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm801)
		hash = hash / 23 + (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm802)
		hash = hash / 23 + (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm803)
		hash = hash / 23 + (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm804)
		hash = hash / 23 + (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm805)
		hash = hash / 23 + (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm806)
		hash = hash / 23 + (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm807)
		hash = hash / 23 + (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm808)
		hash = hash / 23 + (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm809)
		hash = hash / 23 + (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm810)
		hash = hash / 23 + (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm811)
		hash = hash / 23 + (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm812)
		hash = hash / 23 + (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm813)
		hash = hash / 23 + (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm814)
		hash = hash / 23 + (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm815)
		hash = hash / 23 + (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm816)
		hash = hash / 23 + (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm817)
		hash = hash / 23 + (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm818)
		hash = hash / 23 + (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm819)
		hash = hash / 23 + (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm820)
		hash = hash / 23 + (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm821)
		hash = hash / 23 + (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm822)
		hash = hash / 23 + (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm823)
		hash = hash / 23 + (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm824)
		hash = hash / 23 + (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm825)
		hash = hash / 23 + (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm826)
		hash = hash / 23 + (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm827)
		hash = hash / 23 + (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm828)
		hash = hash / 23 + (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm829)
		hash = hash / 23 + (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm830)
		hash = hash / 23 + (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm831)
		hash = hash / 23 + (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm832)
		hash = hash % 23 + (x ^ ((y << 13) | (y >> 19)));
#elif defined(hash_tlm833)
		hash = hash % 23 + (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm834)
		hash = hash % 23 + (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm835)
		hash = hash % 23 + (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm836)
		hash = hash % 23 + (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm837)
		hash = hash % 23 + (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm838)
		hash = hash % 23 + (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm839)
		hash = hash % 23 + (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm840)
		hash = hash % 23 + (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm841)
		hash = hash % 23 + (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm842)
		hash = hash % 23 + (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm843)
		hash = hash % 23 + (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm844)
		hash = hash % 23 + (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm845)
		hash = hash % 23 + (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm846)
		hash = hash % 23 + (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm847)
		hash = hash % 23 + (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm848)
		hash = hash % 23 + (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm849)
		hash = hash % 23 + (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm850)
		hash = hash % 23 + (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm851)
		hash = hash % 23 + (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm852)
		hash = hash % 23 + (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm853)
		hash = hash % 23 + (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm854)
		hash = hash % 23 + (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm855)
		hash = hash % 23 + (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm856)
		hash = hash % 23 + (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm857)
		hash = hash % 23 + (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm858)
		hash = hash % 23 + (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm859)
		hash = hash % 23 + (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm860)
		hash = hash % 23 + (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm861)
		hash = hash % 23 + (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm862)
		hash = hash % 23 + (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm863)
		hash = hash % 23 + (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm864)
		hash = hash % 23 + (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm865)
		hash = hash % 23 + (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm866)
		hash = hash % 23 + (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm867)
		hash = hash % 23 + (x ^ ((y << 13) | (y << 19)));
#elif defined(hash_tlm868)
		hash = hash * 23 + (x ^ ((y << 13) & (y >> 19)));
#elif defined(hash_tlm869)
		hash = hash * 23 + (x & ((y << 13) & (y >> 19)));
#elif defined(hash_tlm870)
		hash = hash * 23 + (x & ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm871)
		hash = hash * 23 + (x & ((y >> 13) & (y << 19)));
#elif defined(hash_tlm872)
		hash = hash * 23 + (x & ((y << 13) & (y << 19)));
#elif defined(hash_tlm873)
		hash = hash * 23 + (x | ((y << 13) & (y >> 19)));
#elif defined(hash_tlm874)
		hash = hash * 23 + (x | ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm875)
		hash = hash * 23 + (x | ((y >> 13) & (y << 19)));
#elif defined(hash_tlm876)
		hash = hash * 23 + (x | ((y << 13) & (y << 19)));
#elif defined(hash_tlm877)
		hash = hash * 23 + (x ^ ((y >> 13) & (y >> 19)));
#elif defined(hash_tlm878)
		hash = hash * 23 + (x ^ ((y >> 13) & (y << 19)));
#elif defined(hash_tlm879)
		hash = hash * 23 + (x ^ ((y << 13) & (y << 19)));
#elif defined(hash_tlm880)
		hash = hash * 23 + (x ^ ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm881)
		hash = hash * 23 + (x & ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm882)
		hash = hash * 23 + (x & ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm883)
		hash = hash * 23 + (x & ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm884)
		hash = hash * 23 + (x & ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm885)
		hash = hash * 23 + (x | ((y << 13) ^ (y >> 19)));
#elif defined(hash_tlm886)
		hash = hash * 23 + (x | ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm887)
		hash = hash * 23 + (x | ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm888)
		hash = hash * 23 + (x | ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm889)
		hash = hash * 23 + (x ^ ((y >> 13) ^ (y >> 19)));
#elif defined(hash_tlm890)
		hash = hash * 23 + (x ^ ((y >> 13) ^ (y << 19)));
#elif defined(hash_tlm891)
		hash = hash * 23 + (x ^ ((y << 13) ^ (y << 19)));
#elif defined(hash_tlm892)
		hash = hash * 23 + (x & ((y << 13) | (y >> 19)));
#elif defined(hash_tlm893)
		hash = hash * 23 + (x & ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm894)
		hash = hash * 23 + (x & ((y >> 13) | (y << 19)));
#elif defined(hash_tlm895)
		hash = hash * 23 + (x & ((y << 13) | (y << 19)));
#elif defined(hash_tlm896)
		hash = hash * 23 + (x | ((y << 13) | (y >> 19)));
#elif defined(hash_tlm897)
		hash = hash * 23 + (x | ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm898)
		hash = hash * 23 + (x | ((y >> 13) | (y << 19)));
#elif defined(hash_tlm899)
		hash = hash * 23 + (x | ((y << 13) | (y << 19)));
#elif defined(hash_tlm900)
		hash = hash * 23 + (x ^ ((y >> 13) | (y >> 19)));
#elif defined(hash_tlm901)
		hash = hash * 23 + (x ^ ((y >> 13) | (y << 19)));
#elif defined(hash_tlm902)
		hash = hash * 23 + (x ^ ((y << 13) | (y << 19)));
#else
		hash = hash * 23 + (x ^ ((y << 13) | (y >> 19)));
#endif
		a2 = hash;
#ifdef hash_tlm903
		hash = hash * 23 - (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm904)
		hash = hash + 23 - (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm905)
		hash = hash + 23 - (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm906)
		hash = hash + 23 - (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm907)
		hash = hash + 23 - (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm908)
		hash = hash + 23 - (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm909)
		hash = hash + 23 - (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm910)
		hash = hash + 23 - (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm911)
		hash = hash + 23 - (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm912)
		hash = hash + 23 - (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm913)
		hash = hash + 23 - (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm914)
		hash = hash + 23 - (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm915)
		hash = hash + 23 - (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm916)
		hash = hash + 23 - (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm917)
		hash = hash + 23 - (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm918)
		hash = hash + 23 - (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm919)
		hash = hash + 23 - (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm920)
		hash = hash + 23 - (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm921)
		hash = hash + 23 - (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm922)
		hash = hash + 23 - (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm923)
		hash = hash + 23 - (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm924)
		hash = hash + 23 - (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm925)
		hash = hash + 23 - (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm926)
		hash = hash + 23 - (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm927)
		hash = hash + 23 - (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm928)
		hash = hash + 23 - (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm929)
		hash = hash + 23 - (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm930)
		hash = hash + 23 - (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm931)
		hash = hash + 23 - (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm932)
		hash = hash + 23 - (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm933)
		hash = hash + 23 - (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm934)
		hash = hash + 23 - (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm935)
		hash = hash + 23 - (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm936)
		hash = hash + 23 - (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm937)
		hash = hash + 23 - (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm938)
		hash = hash + 23 - (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm939)
		hash = hash + 23 - (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm940)
		hash = hash - 23 - (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm941)
		hash = hash - 23 - (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm942)
		hash = hash - 23 - (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm943)
		hash = hash - 23 - (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm944)
		hash = hash - 23 - (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm945)
		hash = hash - 23 - (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm946)
		hash = hash - 23 - (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm947)
		hash = hash - 23 - (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm948)
		hash = hash - 23 - (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm949)
		hash = hash - 23 - (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm950)
		hash = hash - 23 - (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm951)
		hash = hash - 23 - (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm952)
		hash = hash - 23 - (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm953)
		hash = hash - 23 - (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm954)
		hash = hash - 23 - (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm955)
		hash = hash - 23 - (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm956)
		hash = hash - 23 - (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm957)
		hash = hash - 23 - (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm958)
		hash = hash - 23 - (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm959)
		hash = hash - 23 - (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm960)
		hash = hash - 23 - (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm961)
		hash = hash - 23 - (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm962)
		hash = hash - 23 - (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm963)
		hash = hash - 23 - (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm964)
		hash = hash - 23 - (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm965)
		hash = hash - 23 - (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm966)
		hash = hash - 23 - (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm967)
		hash = hash - 23 - (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm968)
		hash = hash - 23 - (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm969)
		hash = hash - 23 - (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm970)
		hash = hash - 23 - (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm971)
		hash = hash - 23 - (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm972)
		hash = hash - 23 - (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm973)
		hash = hash - 23 - (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm974)
		hash = hash - 23 - (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm975)
		hash = hash - 23 - (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm976)
		hash = hash / 23 - (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm977)
		hash = hash / 23 - (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm978)
		hash = hash / 23 - (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm979)
		hash = hash / 23 - (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm980)
		hash = hash / 23 - (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm981)
		hash = hash / 23 - (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm982)
		hash = hash / 23 - (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm983)
		hash = hash / 23 - (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm984)
		hash = hash / 23 - (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm985)
		hash = hash / 23 - (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm986)
		hash = hash / 23 - (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm987)
		hash = hash / 23 - (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm988)
		hash = hash / 23 - (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm989)
		hash = hash / 23 - (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm990)
		hash = hash / 23 - (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm991)
		hash = hash / 23 - (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm992)
		hash = hash / 23 - (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm993)
		hash = hash / 23 - (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm994)
		hash = hash / 23 - (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm995)
		hash = hash / 23 - (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm996)
		hash = hash / 23 - (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm997)
		hash = hash / 23 - (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm998)
		hash = hash / 23 - (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm999)
		hash = hash / 23 - (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1000)
		hash = hash / 23 - (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1001)
		hash = hash / 23 - (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1002)
		hash = hash / 23 - (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1003)
		hash = hash / 23 - (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1004)
		hash = hash / 23 - (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1005)
		hash = hash / 23 - (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1006)
		hash = hash / 23 - (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1007)
		hash = hash / 23 - (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1008)
		hash = hash / 23 - (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1009)
		hash = hash / 23 - (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1010)
		hash = hash / 23 - (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1011)
		hash = hash / 23 - (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1012)
		hash = hash % 23 - (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1013)
		hash = hash % 23 - (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1014)
		hash = hash % 23 - (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1015)
		hash = hash % 23 - (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1016)
		hash = hash % 23 - (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1017)
		hash = hash % 23 - (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1018)
		hash = hash % 23 - (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1019)
		hash = hash % 23 - (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1020)
		hash = hash % 23 - (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1021)
		hash = hash % 23 - (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1022)
		hash = hash % 23 - (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1023)
		hash = hash % 23 - (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1024)
		hash = hash % 23 - (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1025)
		hash = hash % 23 - (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1026)
		hash = hash % 23 - (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1027)
		hash = hash % 23 - (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1028)
		hash = hash % 23 - (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1029)
		hash = hash % 23 - (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1030)
		hash = hash % 23 - (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1031)
		hash = hash % 23 - (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1032)
		hash = hash % 23 - (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1033)
		hash = hash % 23 - (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1034)
		hash = hash % 23 - (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1035)
		hash = hash % 23 - (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1036)
		hash = hash % 23 - (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1037)
		hash = hash % 23 - (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1038)
		hash = hash % 23 - (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1039)
		hash = hash % 23 - (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1040)
		hash = hash % 23 - (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1041)
		hash = hash % 23 - (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1042)
		hash = hash % 23 - (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1043)
		hash = hash % 23 - (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1044)
		hash = hash % 23 - (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1045)
		hash = hash % 23 - (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1046)
		hash = hash % 23 - (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1047)
		hash = hash % 23 - (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1048)
		hash = hash * 23 - (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1049)
		hash = hash * 23 - (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1050)
		hash = hash * 23 - (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1051)
		hash = hash * 23 - (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1052)
		hash = hash * 23 - (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1053)
		hash = hash * 23 - (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1054)
		hash = hash * 23 - (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1055)
		hash = hash * 23 - (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1056)
		hash = hash * 23 - (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1057)
		hash = hash * 23 - (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1058)
		hash = hash * 23 - (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1059)
		hash = hash * 23 - (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1060)
		hash = hash * 23 - (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1061)
		hash = hash * 23 - (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1062)
		hash = hash * 23 - (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1063)
		hash = hash * 23 - (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1064)
		hash = hash * 23 - (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1065)
		hash = hash * 23 - (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1066)
		hash = hash * 23 - (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1067)
		hash = hash * 23 - (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1068)
		hash = hash * 23 - (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1069)
		hash = hash * 23 - (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1070)
		hash = hash * 23 - (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1071)
		hash = hash * 23 - (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1072)
		hash = hash * 23 - (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1073)
		hash = hash * 23 - (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1074)
		hash = hash * 23 - (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1075)
		hash = hash * 23 - (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1076)
		hash = hash * 23 - (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1077)
		hash = hash * 23 - (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1078)
		hash = hash * 23 - (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1079)
		hash = hash * 23 - (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1080)
		hash = hash * 23 - (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1081)
		hash = hash * 23 - (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1082)
		hash = hash * 23 - (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1083)
		hash = hash * 23 / (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1084)
		hash = hash + 23 / (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1085)
		hash = hash + 23 / (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1086)
		hash = hash + 23 / (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1087)
		hash = hash + 23 / (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1088)
		hash = hash + 23 / (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1089)
		hash = hash + 23 / (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1090)
		hash = hash + 23 / (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1091)
		hash = hash + 23 / (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1092)
		hash = hash + 23 / (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1093)
		hash = hash + 23 / (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1094)
		hash = hash + 23 / (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1095)
		hash = hash + 23 / (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1096)
		hash = hash + 23 / (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1097)
		hash = hash + 23 / (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1098)
		hash = hash + 23 / (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1099)
		hash = hash + 23 / (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1100)
		hash = hash + 23 / (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1101)
		hash = hash + 23 / (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1102)
		hash = hash + 23 / (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1103)
		hash = hash + 23 / (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1104)
		hash = hash + 23 / (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1105)
		hash = hash + 23 / (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1106)
		hash = hash + 23 / (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1107)
		hash = hash + 23 / (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1108)
		hash = hash + 23 / (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1109)
		hash = hash + 23 / (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1110)
		hash = hash + 23 / (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1111)
		hash = hash + 23 / (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1112)
		hash = hash + 23 / (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1113)
		hash = hash + 23 / (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1114)
		hash = hash + 23 / (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1115)
		hash = hash + 23 / (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1116)
		hash = hash + 23 / (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1117)
		hash = hash + 23 / (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1118)
		hash = hash + 23 / (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1119)
		hash = hash + 23 / (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1120)
		hash = hash - 23 / (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1121)
		hash = hash - 23 / (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1122)
		hash = hash - 23 / (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1123)
		hash = hash - 23 / (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1124)
		hash = hash - 23 / (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1125)
		hash = hash - 23 / (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1126)
		hash = hash - 23 / (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1127)
		hash = hash - 23 / (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1128)
		hash = hash - 23 / (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1129)
		hash = hash - 23 / (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1130)
		hash = hash - 23 / (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1131)
		hash = hash - 23 / (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1132)
		hash = hash - 23 / (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1133)
		hash = hash - 23 / (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1134)
		hash = hash - 23 / (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1135)
		hash = hash - 23 / (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1136)
		hash = hash - 23 / (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1137)
		hash = hash - 23 / (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1138)
		hash = hash - 23 / (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1139)
		hash = hash - 23 / (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1140)
		hash = hash - 23 / (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1141)
		hash = hash - 23 / (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1142)
		hash = hash - 23 / (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1143)
		hash = hash - 23 / (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1144)
		hash = hash - 23 / (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1145)
		hash = hash - 23 / (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1146)
		hash = hash - 23 / (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1147)
		hash = hash - 23 / (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1148)
		hash = hash - 23 / (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1149)
		hash = hash - 23 / (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1150)
		hash = hash - 23 / (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1151)
		hash = hash - 23 / (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1152)
		hash = hash - 23 / (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1153)
		hash = hash - 23 / (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1154)
		hash = hash - 23 / (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1155)
		hash = hash - 23 / (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1156)
		hash = hash / 23 / (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1157)
		hash = hash / 23 / (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1158)
		hash = hash / 23 / (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1159)
		hash = hash / 23 / (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1160)
		hash = hash / 23 / (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1161)
		hash = hash / 23 / (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1162)
		hash = hash / 23 / (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1163)
		hash = hash / 23 / (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1164)
		hash = hash / 23 / (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1165)
		hash = hash / 23 / (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1166)
		hash = hash / 23 / (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1167)
		hash = hash / 23 / (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1168)
		hash = hash / 23 / (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1169)
		hash = hash / 23 / (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1170)
		hash = hash / 23 / (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1171)
		hash = hash / 23 / (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1172)
		hash = hash / 23 / (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1173)
		hash = hash / 23 / (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1174)
		hash = hash / 23 / (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1175)
		hash = hash / 23 / (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1176)
		hash = hash / 23 / (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1177)
		hash = hash / 23 / (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1178)
		hash = hash / 23 / (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1179)
		hash = hash / 23 / (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1180)
		hash = hash / 23 / (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1181)
		hash = hash / 23 / (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1182)
		hash = hash / 23 / (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1183)
		hash = hash / 23 / (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1184)
		hash = hash / 23 / (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1185)
		hash = hash / 23 / (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1186)
		hash = hash / 23 / (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1187)
		hash = hash / 23 / (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1188)
		hash = hash / 23 / (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1189)
		hash = hash / 23 / (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1190)
		hash = hash / 23 / (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1191)
		hash = hash / 23 / (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1192)
		hash = hash % 23 / (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1193)
		hash = hash % 23 / (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1194)
		hash = hash % 23 / (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1195)
		hash = hash % 23 / (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1196)
		hash = hash % 23 / (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1197)
		hash = hash % 23 / (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1198)
		hash = hash % 23 / (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1199)
		hash = hash % 23 / (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1200)
		hash = hash % 23 / (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1201)
		hash = hash % 23 / (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1202)
		hash = hash % 23 / (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1203)
		hash = hash % 23 / (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1204)
		hash = hash % 23 / (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1205)
		hash = hash % 23 / (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1206)
		hash = hash % 23 / (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1207)
		hash = hash % 23 / (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1208)
		hash = hash % 23 / (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1209)
		hash = hash % 23 / (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1210)
		hash = hash % 23 / (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1211)
		hash = hash % 23 / (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1212)
		hash = hash % 23 / (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1213)
		hash = hash % 23 / (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1214)
		hash = hash % 23 / (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1215)
		hash = hash % 23 / (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1216)
		hash = hash % 23 / (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1217)
		hash = hash % 23 / (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1218)
		hash = hash % 23 / (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1219)
		hash = hash % 23 / (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1220)
		hash = hash % 23 / (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1221)
		hash = hash % 23 / (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1222)
		hash = hash % 23 / (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1223)
		hash = hash % 23 / (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1224)
		hash = hash % 23 / (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1225)
		hash = hash % 23 / (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1226)
		hash = hash % 23 / (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1227)
		hash = hash % 23 / (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1228)
		hash = hash * 23 / (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1229)
		hash = hash * 23 / (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1230)
		hash = hash * 23 / (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1231)
		hash = hash * 23 / (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1232)
		hash = hash * 23 / (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1233)
		hash = hash * 23 / (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1234)
		hash = hash * 23 / (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1235)
		hash = hash * 23 / (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1236)
		hash = hash * 23 / (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1237)
		hash = hash * 23 / (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1238)
		hash = hash * 23 / (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1239)
		hash = hash * 23 / (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1240)
		hash = hash * 23 / (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1241)
		hash = hash * 23 / (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1242)
		hash = hash * 23 / (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1243)
		hash = hash * 23 / (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1244)
		hash = hash * 23 / (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1245)
		hash = hash * 23 / (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1246)
		hash = hash * 23 / (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1247)
		hash = hash * 23 / (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1248)
		hash = hash * 23 / (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1249)
		hash = hash * 23 / (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1250)
		hash = hash * 23 / (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1251)
		hash = hash * 23 / (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1252)
		hash = hash * 23 / (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1253)
		hash = hash * 23 / (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1254)
		hash = hash * 23 / (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1255)
		hash = hash * 23 / (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1256)
		hash = hash * 23 / (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1257)
		hash = hash * 23 / (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1258)
		hash = hash * 23 / (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1259)
		hash = hash * 23 / (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1260)
		hash = hash * 23 / (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1261)
		hash = hash * 23 / (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1262)
		hash = hash * 23 / (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1263)
		hash = hash * 23 * (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1264)
		hash = hash + 23 * (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1265)
		hash = hash + 23 * (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1266)
		hash = hash + 23 * (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1267)
		hash = hash + 23 * (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1268)
		hash = hash + 23 * (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1269)
		hash = hash + 23 * (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1270)
		hash = hash + 23 * (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1271)
		hash = hash + 23 * (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1272)
		hash = hash + 23 * (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1273)
		hash = hash + 23 * (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1274)
		hash = hash + 23 * (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1275)
		hash = hash + 23 * (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1276)
		hash = hash + 23 * (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1277)
		hash = hash + 23 * (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1278)
		hash = hash + 23 * (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1279)
		hash = hash + 23 * (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1280)
		hash = hash + 23 * (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1281)
		hash = hash + 23 * (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1282)
		hash = hash + 23 * (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1283)
		hash = hash + 23 * (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1284)
		hash = hash + 23 * (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1285)
		hash = hash + 23 * (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1286)
		hash = hash + 23 * (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1287)
		hash = hash + 23 * (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1288)
		hash = hash + 23 * (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1289)
		hash = hash + 23 * (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1290)
		hash = hash + 23 * (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1291)
		hash = hash + 23 * (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1292)
		hash = hash + 23 * (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1293)
		hash = hash + 23 * (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1294)
		hash = hash + 23 * (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1295)
		hash = hash + 23 * (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1296)
		hash = hash + 23 * (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1297)
		hash = hash + 23 * (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1298)
		hash = hash + 23 * (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1299)
		hash = hash + 23 * (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1300)
		hash = hash - 23 * (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1301)
		hash = hash - 23 * (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1302)
		hash = hash - 23 * (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1303)
		hash = hash - 23 * (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1304)
		hash = hash - 23 * (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1305)
		hash = hash - 23 * (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1306)
		hash = hash - 23 * (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1307)
		hash = hash - 23 * (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1308)
		hash = hash - 23 * (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1309)
		hash = hash - 23 * (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1310)
		hash = hash - 23 * (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1311)
		hash = hash - 23 * (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1312)
		hash = hash - 23 * (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1313)
		hash = hash - 23 * (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1314)
		hash = hash - 23 * (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1315)
		hash = hash - 23 * (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1316)
		hash = hash - 23 * (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1317)
		hash = hash - 23 * (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1318)
		hash = hash - 23 * (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1319)
		hash = hash - 23 * (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1320)
		hash = hash - 23 * (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1321)
		hash = hash - 23 * (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1322)
		hash = hash - 23 * (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1323)
		hash = hash - 23 * (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1324)
		hash = hash - 23 * (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1325)
		hash = hash - 23 * (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1326)
		hash = hash - 23 * (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1327)
		hash = hash - 23 * (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1328)
		hash = hash - 23 * (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1329)
		hash = hash - 23 * (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1330)
		hash = hash - 23 * (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1331)
		hash = hash - 23 * (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1332)
		hash = hash - 23 * (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1333)
		hash = hash - 23 * (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1334)
		hash = hash - 23 * (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1335)
		hash = hash - 23 * (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1336)
		hash = hash / 23 * (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1337)
		hash = hash / 23 * (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1338)
		hash = hash / 23 * (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1339)
		hash = hash / 23 * (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1340)
		hash = hash / 23 * (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1341)
		hash = hash / 23 * (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1342)
		hash = hash / 23 * (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1343)
		hash = hash / 23 * (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1344)
		hash = hash / 23 * (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1345)
		hash = hash / 23 * (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1346)
		hash = hash / 23 * (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1347)
		hash = hash / 23 * (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1348)
		hash = hash / 23 * (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1349)
		hash = hash / 23 * (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1350)
		hash = hash / 23 * (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1351)
		hash = hash / 23 * (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1352)
		hash = hash / 23 * (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1353)
		hash = hash / 23 * (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1354)
		hash = hash / 23 * (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1355)
		hash = hash / 23 * (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1356)
		hash = hash / 23 * (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1357)
		hash = hash / 23 * (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1358)
		hash = hash / 23 * (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1359)
		hash = hash / 23 * (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1360)
		hash = hash / 23 * (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1361)
		hash = hash / 23 * (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1362)
		hash = hash / 23 * (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1363)
		hash = hash / 23 * (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1364)
		hash = hash / 23 * (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1365)
		hash = hash / 23 * (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1366)
		hash = hash / 23 * (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1367)
		hash = hash / 23 * (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1368)
		hash = hash / 23 * (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1369)
		hash = hash / 23 * (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1370)
		hash = hash / 23 * (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1371)
		hash = hash / 23 * (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1372)
		hash = hash % 23 * (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1373)
		hash = hash % 23 * (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1374)
		hash = hash % 23 * (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1375)
		hash = hash % 23 * (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1376)
		hash = hash % 23 * (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1377)
		hash = hash % 23 * (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1378)
		hash = hash % 23 * (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1379)
		hash = hash % 23 * (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1380)
		hash = hash % 23 * (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1381)
		hash = hash % 23 * (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1382)
		hash = hash % 23 * (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1383)
		hash = hash % 23 * (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1384)
		hash = hash % 23 * (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1385)
		hash = hash % 23 * (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1386)
		hash = hash % 23 * (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1387)
		hash = hash % 23 * (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1388)
		hash = hash % 23 * (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1389)
		hash = hash % 23 * (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1390)
		hash = hash % 23 * (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1391)
		hash = hash % 23 * (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1392)
		hash = hash % 23 * (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1393)
		hash = hash % 23 * (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1394)
		hash = hash % 23 * (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1395)
		hash = hash % 23 * (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1396)
		hash = hash % 23 * (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1397)
		hash = hash % 23 * (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1398)
		hash = hash % 23 * (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1399)
		hash = hash % 23 * (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1400)
		hash = hash % 23 * (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1401)
		hash = hash % 23 * (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1402)
		hash = hash % 23 * (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1403)
		hash = hash % 23 * (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1404)
		hash = hash % 23 * (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1405)
		hash = hash % 23 * (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1406)
		hash = hash % 23 * (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1407)
		hash = hash % 23 * (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1408)
		hash = hash * 23 * (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1409)
		hash = hash * 23 * (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1410)
		hash = hash * 23 * (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1411)
		hash = hash * 23 * (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1412)
		hash = hash * 23 * (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1413)
		hash = hash * 23 * (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1414)
		hash = hash * 23 * (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1415)
		hash = hash * 23 * (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1416)
		hash = hash * 23 * (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1417)
		hash = hash * 23 * (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1418)
		hash = hash * 23 * (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1419)
		hash = hash * 23 * (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1420)
		hash = hash * 23 * (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1421)
		hash = hash * 23 * (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1422)
		hash = hash * 23 * (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1423)
		hash = hash * 23 * (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1424)
		hash = hash * 23 * (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1425)
		hash = hash * 23 * (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1426)
		hash = hash * 23 * (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1427)
		hash = hash * 23 * (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1428)
		hash = hash * 23 * (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1429)
		hash = hash * 23 * (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1430)
		hash = hash * 23 * (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1431)
		hash = hash * 23 * (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1432)
		hash = hash * 23 * (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1433)
		hash = hash * 23 * (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1434)
		hash = hash * 23 * (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1435)
		hash = hash * 23 * (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1436)
		hash = hash * 23 * (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1437)
		hash = hash * 23 * (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1438)
		hash = hash * 23 * (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1439)
		hash = hash * 23 * (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1440)
		hash = hash * 23 * (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1441)
		hash = hash * 23 * (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1442)
		hash = hash * 23 * (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1443)
		hash = hash * 23 % (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1444)
		hash = hash + 23 % (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1445)
		hash = hash + 23 % (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1446)
		hash = hash + 23 % (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1447)
		hash = hash + 23 % (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1448)
		hash = hash + 23 % (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1449)
		hash = hash + 23 % (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1450)
		hash = hash + 23 % (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1451)
		hash = hash + 23 % (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1452)
		hash = hash + 23 % (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1453)
		hash = hash + 23 % (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1454)
		hash = hash + 23 % (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1455)
		hash = hash + 23 % (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1456)
		hash = hash + 23 % (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1457)
		hash = hash + 23 % (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1458)
		hash = hash + 23 % (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1459)
		hash = hash + 23 % (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1460)
		hash = hash + 23 % (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1461)
		hash = hash + 23 % (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1462)
		hash = hash + 23 % (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1463)
		hash = hash + 23 % (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1464)
		hash = hash + 23 % (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1465)
		hash = hash + 23 % (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1466)
		hash = hash + 23 % (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1467)
		hash = hash + 23 % (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1468)
		hash = hash + 23 % (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1469)
		hash = hash + 23 % (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1470)
		hash = hash + 23 % (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1471)
		hash = hash + 23 % (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1472)
		hash = hash + 23 % (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1473)
		hash = hash + 23 % (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1474)
		hash = hash + 23 % (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1475)
		hash = hash + 23 % (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1476)
		hash = hash + 23 % (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1477)
		hash = hash + 23 % (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1478)
		hash = hash + 23 % (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1479)
		hash = hash + 23 % (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1480)
		hash = hash - 23 % (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1481)
		hash = hash - 23 % (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1482)
		hash = hash - 23 % (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1483)
		hash = hash - 23 % (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1484)
		hash = hash - 23 % (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1485)
		hash = hash - 23 % (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1486)
		hash = hash - 23 % (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1487)
		hash = hash - 23 % (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1488)
		hash = hash - 23 % (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1489)
		hash = hash - 23 % (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1490)
		hash = hash - 23 % (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1491)
		hash = hash - 23 % (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1492)
		hash = hash - 23 % (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1493)
		hash = hash - 23 % (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1494)
		hash = hash - 23 % (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1495)
		hash = hash - 23 % (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1496)
		hash = hash - 23 % (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1497)
		hash = hash - 23 % (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1498)
		hash = hash - 23 % (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1499)
		hash = hash - 23 % (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1500)
		hash = hash - 23 % (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1501)
		hash = hash - 23 % (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1502)
		hash = hash - 23 % (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1503)
		hash = hash - 23 % (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1504)
		hash = hash - 23 % (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1505)
		hash = hash - 23 % (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1506)
		hash = hash - 23 % (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1507)
		hash = hash - 23 % (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1508)
		hash = hash - 23 % (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1509)
		hash = hash - 23 % (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1510)
		hash = hash - 23 % (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1511)
		hash = hash - 23 % (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1512)
		hash = hash - 23 % (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1513)
		hash = hash - 23 % (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1514)
		hash = hash - 23 % (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1515)
		hash = hash - 23 % (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1516)
		hash = hash / 23 % (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1517)
		hash = hash / 23 % (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1518)
		hash = hash / 23 % (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1519)
		hash = hash / 23 % (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1520)
		hash = hash / 23 % (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1521)
		hash = hash / 23 % (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1522)
		hash = hash / 23 % (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1523)
		hash = hash / 23 % (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1524)
		hash = hash / 23 % (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1525)
		hash = hash / 23 % (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1526)
		hash = hash / 23 % (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1527)
		hash = hash / 23 % (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1528)
		hash = hash / 23 % (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1529)
		hash = hash / 23 % (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1530)
		hash = hash / 23 % (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1531)
		hash = hash / 23 % (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1532)
		hash = hash / 23 % (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1533)
		hash = hash / 23 % (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1534)
		hash = hash / 23 % (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1535)
		hash = hash / 23 % (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1536)
		hash = hash / 23 % (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1537)
		hash = hash / 23 % (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1538)
		hash = hash / 23 % (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1539)
		hash = hash / 23 % (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1540)
		hash = hash / 23 % (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1541)
		hash = hash / 23 % (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1542)
		hash = hash / 23 % (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1543)
		hash = hash / 23 % (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1544)
		hash = hash / 23 % (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1545)
		hash = hash / 23 % (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1546)
		hash = hash / 23 % (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1547)
		hash = hash / 23 % (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1548)
		hash = hash / 23 % (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1549)
		hash = hash / 23 % (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1550)
		hash = hash / 23 % (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1551)
		hash = hash / 23 % (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1552)
		hash = hash % 23 % (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1553)
		hash = hash % 23 % (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1554)
		hash = hash % 23 % (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1555)
		hash = hash % 23 % (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1556)
		hash = hash % 23 % (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1557)
		hash = hash % 23 % (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1558)
		hash = hash % 23 % (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1559)
		hash = hash % 23 % (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1560)
		hash = hash % 23 % (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1561)
		hash = hash % 23 % (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1562)
		hash = hash % 23 % (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1563)
		hash = hash % 23 % (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1564)
		hash = hash % 23 % (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1565)
		hash = hash % 23 % (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1566)
		hash = hash % 23 % (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1567)
		hash = hash % 23 % (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1568)
		hash = hash % 23 % (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1569)
		hash = hash % 23 % (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1570)
		hash = hash % 23 % (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1571)
		hash = hash % 23 % (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1572)
		hash = hash % 23 % (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1573)
		hash = hash % 23 % (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1574)
		hash = hash % 23 % (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1575)
		hash = hash % 23 % (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1576)
		hash = hash % 23 % (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1577)
		hash = hash % 23 % (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1578)
		hash = hash % 23 % (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1579)
		hash = hash % 23 % (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1580)
		hash = hash % 23 % (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1581)
		hash = hash % 23 % (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1582)
		hash = hash % 23 % (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1583)
		hash = hash % 23 % (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1584)
		hash = hash % 23 % (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1585)
		hash = hash % 23 % (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1586)
		hash = hash % 23 % (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1587)
		hash = hash % 23 % (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1588)
		hash = hash * 23 % (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1589)
		hash = hash * 23 % (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1590)
		hash = hash * 23 % (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1591)
		hash = hash * 23 % (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1592)
		hash = hash * 23 % (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1593)
		hash = hash * 23 % (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1594)
		hash = hash * 23 % (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1595)
		hash = hash * 23 % (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1596)
		hash = hash * 23 % (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1597)
		hash = hash * 23 % (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1598)
		hash = hash * 23 % (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1599)
		hash = hash * 23 % (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1600)
		hash = hash * 23 % (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1601)
		hash = hash * 23 % (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1602)
		hash = hash * 23 % (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1603)
		hash = hash * 23 % (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1604)
		hash = hash * 23 % (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1605)
		hash = hash * 23 % (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1606)
		hash = hash * 23 % (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1607)
		hash = hash * 23 % (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1608)
		hash = hash * 23 % (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1609)
		hash = hash * 23 % (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1610)
		hash = hash * 23 % (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1611)
		hash = hash * 23 % (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1612)
		hash = hash * 23 % (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1613)
		hash = hash * 23 % (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1614)
		hash = hash * 23 % (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1615)
		hash = hash * 23 % (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1616)
		hash = hash * 23 % (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1617)
		hash = hash * 23 % (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1618)
		hash = hash * 23 % (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1619)
		hash = hash * 23 % (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1620)
		hash = hash * 23 % (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1621)
		hash = hash * 23 % (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1622)
		hash = hash * 23 % (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1623)
		hash = hash + 23 + (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1624)
		hash = hash + 23 + (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1625)
		hash = hash + 23 + (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1626)
		hash = hash + 23 + (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1627)
		hash = hash + 23 + (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1628)
		hash = hash + 23 + (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1629)
		hash = hash + 23 + (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1630)
		hash = hash + 23 + (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1631)
		hash = hash + 23 + (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1632)
		hash = hash + 23 + (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1633)
		hash = hash + 23 + (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1634)
		hash = hash + 23 + (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1635)
		hash = hash + 23 + (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1636)
		hash = hash + 23 + (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1637)
		hash = hash + 23 + (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1638)
		hash = hash + 23 + (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1639)
		hash = hash + 23 + (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1640)
		hash = hash + 23 + (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1641)
		hash = hash + 23 + (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1642)
		hash = hash + 23 + (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1643)
		hash = hash + 23 + (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1644)
		hash = hash + 23 + (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1645)
		hash = hash + 23 + (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1646)
		hash = hash + 23 + (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1647)
		hash = hash + 23 + (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1648)
		hash = hash + 23 + (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1649)
		hash = hash + 23 + (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1650)
		hash = hash + 23 + (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1651)
		hash = hash + 23 + (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1652)
		hash = hash + 23 + (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1653)
		hash = hash + 23 + (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1654)
		hash = hash + 23 + (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1655)
		hash = hash + 23 + (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1656)
		hash = hash + 23 + (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1657)
		hash = hash + 23 + (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1658)
		hash = hash + 23 + (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1659)
		hash = hash - 23 + (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1660)
		hash = hash - 23 + (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1661)
		hash = hash - 23 + (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1662)
		hash = hash - 23 + (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1663)
		hash = hash - 23 + (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1664)
		hash = hash - 23 + (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1665)
		hash = hash - 23 + (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1666)
		hash = hash - 23 + (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1667)
		hash = hash - 23 + (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1668)
		hash = hash - 23 + (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1669)
		hash = hash - 23 + (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1670)
		hash = hash - 23 + (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1671)
		hash = hash - 23 + (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1672)
		hash = hash - 23 + (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1673)
		hash = hash - 23 + (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1674)
		hash = hash - 23 + (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1675)
		hash = hash - 23 + (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1676)
		hash = hash - 23 + (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1677)
		hash = hash - 23 + (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1678)
		hash = hash - 23 + (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1679)
		hash = hash - 23 + (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1680)
		hash = hash - 23 + (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1681)
		hash = hash - 23 + (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1682)
		hash = hash - 23 + (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1683)
		hash = hash - 23 + (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1684)
		hash = hash - 23 + (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1685)
		hash = hash - 23 + (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1686)
		hash = hash - 23 + (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1687)
		hash = hash - 23 + (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1688)
		hash = hash - 23 + (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1689)
		hash = hash - 23 + (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1690)
		hash = hash - 23 + (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1691)
		hash = hash - 23 + (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1692)
		hash = hash - 23 + (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1693)
		hash = hash - 23 + (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1694)
		hash = hash - 23 + (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1695)
		hash = hash / 23 + (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1696)
		hash = hash / 23 + (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1697)
		hash = hash / 23 + (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1698)
		hash = hash / 23 + (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1699)
		hash = hash / 23 + (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1700)
		hash = hash / 23 + (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1701)
		hash = hash / 23 + (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1702)
		hash = hash / 23 + (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1703)
		hash = hash / 23 + (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1704)
		hash = hash / 23 + (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1705)
		hash = hash / 23 + (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1706)
		hash = hash / 23 + (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1707)
		hash = hash / 23 + (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1708)
		hash = hash / 23 + (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1709)
		hash = hash / 23 + (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1710)
		hash = hash / 23 + (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1711)
		hash = hash / 23 + (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1712)
		hash = hash / 23 + (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1713)
		hash = hash / 23 + (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1714)
		hash = hash / 23 + (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1715)
		hash = hash / 23 + (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1716)
		hash = hash / 23 + (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1717)
		hash = hash / 23 + (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1718)
		hash = hash / 23 + (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1719)
		hash = hash / 23 + (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1720)
		hash = hash / 23 + (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1721)
		hash = hash / 23 + (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1722)
		hash = hash / 23 + (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1723)
		hash = hash / 23 + (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1724)
		hash = hash / 23 + (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1725)
		hash = hash / 23 + (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1726)
		hash = hash / 23 + (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1727)
		hash = hash / 23 + (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1728)
		hash = hash / 23 + (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1729)
		hash = hash / 23 + (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1730)
		hash = hash / 23 + (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1731)
		hash = hash % 23 + (y ^ ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1732)
		hash = hash % 23 + (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1733)
		hash = hash % 23 + (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1734)
		hash = hash % 23 + (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1735)
		hash = hash % 23 + (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1736)
		hash = hash % 23 + (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1737)
		hash = hash % 23 + (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1738)
		hash = hash % 23 + (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1739)
		hash = hash % 23 + (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1740)
		hash = hash % 23 + (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1741)
		hash = hash % 23 + (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1742)
		hash = hash % 23 + (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1743)
		hash = hash % 23 + (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1744)
		hash = hash % 23 + (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1745)
		hash = hash % 23 + (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1746)
		hash = hash % 23 + (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1747)
		hash = hash % 23 + (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1748)
		hash = hash % 23 + (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1749)
		hash = hash % 23 + (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1750)
		hash = hash % 23 + (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1751)
		hash = hash % 23 + (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1752)
		hash = hash % 23 + (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1753)
		hash = hash % 23 + (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1754)
		hash = hash % 23 + (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1755)
		hash = hash % 23 + (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1756)
		hash = hash % 23 + (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1757)
		hash = hash % 23 + (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1758)
		hash = hash % 23 + (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1759)
		hash = hash % 23 + (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1760)
		hash = hash % 23 + (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1761)
		hash = hash % 23 + (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1762)
		hash = hash % 23 + (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1763)
		hash = hash % 23 + (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1764)
		hash = hash % 23 + (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1765)
		hash = hash % 23 + (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1766)
		hash = hash % 23 + (y ^ ((x << 7) | (x << 25)));
#elif defined(hash_tlm1767)
		hash = hash * 23 + (y ^ ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1768)
		hash = hash * 23 + (y & ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1769)
		hash = hash * 23 + (y & ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1770)
		hash = hash * 23 + (y & ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1771)
		hash = hash * 23 + (y & ((x << 7) & (x << 25)));
#elif defined(hash_tlm1772)
		hash = hash * 23 + (y | ((x << 7) & (x >> 25)));
#elif defined(hash_tlm1773)
		hash = hash * 23 + (y | ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1774)
		hash = hash * 23 + (y | ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1775)
		hash = hash * 23 + (y | ((x << 7) & (x << 25)));
#elif defined(hash_tlm1776)
		hash = hash * 23 + (y ^ ((x >> 7) & (x >> 25)));
#elif defined(hash_tlm1777)
		hash = hash * 23 + (y ^ ((x >> 7) & (x << 25)));
#elif defined(hash_tlm1778)
		hash = hash * 23 + (y ^ ((x << 7) & (x << 25)));
#elif defined(hash_tlm1779)
		hash = hash * 23 + (y ^ ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1780)
		hash = hash * 23 + (y & ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1781)
		hash = hash * 23 + (y & ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1782)
		hash = hash * 23 + (y & ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1783)
		hash = hash * 23 + (y & ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1784)
		hash = hash * 23 + (y | ((x << 7) ^ (x >> 25)));
#elif defined(hash_tlm1785)
		hash = hash * 23 + (y | ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1786)
		hash = hash * 23 + (y | ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1787)
		hash = hash * 23 + (y | ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1788)
		hash = hash * 23 + (y ^ ((x >> 7) ^ (x >> 25)));
#elif defined(hash_tlm1789)
		hash = hash * 23 + (y ^ ((x >> 7) ^ (x << 25)));
#elif defined(hash_tlm1790)
		hash = hash * 23 + (y ^ ((x << 7) ^ (x << 25)));
#elif defined(hash_tlm1791)
		hash = hash * 23 + (y & ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1792)
		hash = hash * 23 + (y & ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1793)
		hash = hash * 23 + (y & ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1794)
		hash = hash * 23 + (y & ((x << 7) | (x << 25)));
#elif defined(hash_tlm1795)
		hash = hash * 23 + (y | ((x << 7) | (x >> 25)));
#elif defined(hash_tlm1796)
		hash = hash * 23 + (y | ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1797)
		hash = hash * 23 + (y | ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1798)
		hash = hash * 23 + (y | ((x << 7) | (x << 25)));
#elif defined(hash_tlm1799)
		hash = hash * 23 + (y ^ ((x >> 7) | (x >> 25)));
#elif defined(hash_tlm1800)
		hash = hash * 23 + (y ^ ((x >> 7) | (x << 25)));
#elif defined(hash_tlm1801)
		hash = hash * 23 + (y ^ ((x << 7) | (x << 25)));
#else
		hash = hash * 23 + (y ^ ((x << 7) | (x >> 25)));
#endif
		b2 = hash;
	}
	return hash;
}

struct hash_tlm : public sc_module {
	tlm_utils::simple_target_socket<hash_tlm> tsock;

	vp::map::LocalRouter router;

	uint32_t a=0;
	uint32_t b=0;
	uint32_t hash=0;
	uint32_t ready=0;
	uint32_t valid=0;

	sc_event run_event;
	sc_event irq;

	SC_HAS_PROCESS(hash_tlm);
	hash_tlm(sc_core::sc_module_name) {
		tsock.register_b_transport(this, &hash_tlm::transport);

		auto &regs = router
				.add_register_bank({})
				.register_handler(this, &hash_tlm::register_access_callback);
		regs.add_register({0x00, &a});
		regs.add_register({0x04, &b});
		regs.add_register({0x08, &hash, vp::map::read_only});
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

#ifdef hash_tlm1802
		if (r.write || (r.vptr == &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1803)
		if (r.write || (r.vptr < &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1804)
		if (r.write || (r.vptr > &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1805)
		if (r.write || (r.vptr <= &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1806)
		if (r.write || (r.vptr >= &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1807)
		if (r.write && (r.vptr < &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1808)
		if (r.write && (r.vptr > &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1809)
		if (r.write && (r.vptr <= &valid)) { // if valid is set, run_event needs to be triggered
#elif defined(hash_tlm1810)
		if (r.write && (r.vptr >= &valid)) { // if valid is set, run_event needs to be triggered
#else
		if (r.write && (r.vptr == &valid)) { // if valid is set, run_event needs to be triggered
#endif
			if(valid==1) {
				run_event.notify(sc_core::sc_time(0, SC_NS));
			}
#ifdef hash_tlm1811
		} else if(r.read || (r.addr == 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1812)
		} else if(r.read || (r.addr < 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1813)
		} else if(r.read || (r.addr > 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1814)
		} else if(r.read || (r.addr <= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1815)
		} else if(r.read || (r.addr >= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1816)
		} else if(r.read && (r.addr < 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1817)
		} else if(r.read && (r.addr > 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1818)
		} else if(r.read && (r.addr <= 0x08)) { // if res is read, ready needs to be set to 0
#elif defined(hash_tlm1819)
		} else if(r.read && (r.addr >= 0x08)) { // if res is read, ready needs to be set to 0
#else
		} else if(r.read && (r.vptr == &hash)) { // if res is read, ready needs to be set to 0
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
			hash = task_hash_f(a, b);
			ready = 1;
			irq.notify(sc_core::sc_time(0, SC_NS));
		}
	}
};


