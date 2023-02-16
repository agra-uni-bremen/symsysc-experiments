#include <minikernel/systemc.h>

int main(int argc, char* argv[]) {
    sc_clock clk("clk", sc_time(20, SC_SEC));
    for(int i=0; i<20; i++)
        minikernel_step();
    return 0;
}
