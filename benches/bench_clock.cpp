#include <minikernel/systemc.h>
#include <clock_port.h>

int main(int argc, char* argv[]) {
//    sc_clock clk("clk", sc_time(20, SC_SEC));
//    clock_test t = clock_test("clock");
	clock_port t = clock_port("port");

	for(int i=0; i<20; i++)
		minikernel_step();
	return 0;
}
