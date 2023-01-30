//#include <klee_conf.h>
#include <minikernel/sysc/communication/sc_signal_ports.h>
#include <minikernel/sysc/datatypes/sc_bv_base.h>
#include <minikernel/sysc/communication/sc_clock.h>
#include <plic_rtl.h>

int main(int argc, char* argv[])
{
	sc_core::sc_clock clk{"plic_clk", sc_core::sc_time(1000, sc_core::SC_NS)};
	PlicRtlWrapper plic = PlicRtlWrapper("PlicRtlWrapper", clk);
	plic.init();
	// start
	return 0;
}
