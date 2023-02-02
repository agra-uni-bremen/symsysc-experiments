//#include <klee_conf.h>
#include <systemc.h>
#include <plic_rtl.h>

int main(int, char*[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(1000, sc_core::SC_NS)};
    PlicRtlWrapper plic("PlicRtlWrappper", clk);
	plic.init();
	// start
	return 0;
}
