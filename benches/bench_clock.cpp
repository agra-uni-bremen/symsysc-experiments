#include <minikernel/systemc.h>
#include <clock_test.h>

int main(int argc, char* argv[]) {
//    sc_clock clk("clk", sc_time(20, SC_SEC));
    clock_test t = clock_test("clock");

    for(int i=0; i<20; i++)
        minikernel_step();
    return 0;
}
