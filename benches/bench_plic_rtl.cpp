//#include <klee_conf.h>
#include <plic_rtl.h>
//#include <minikernel/registry.hpp>

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(1000, sc_core::SC_NS)};
	auto plic = PlicRtlQrapper("PlicRtlWrapper", clk);
	plic.init();
	// start
	return 0;
}
