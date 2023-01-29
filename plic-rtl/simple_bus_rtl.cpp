#include "simple_bus_rtl.h"

SimpleBusRtl::SimpleBusRtl(sc_clock &clk)
    : clk_{clk}
    , sel{"SimpleBusRTL_sel"}
    , SBaddress{"SimpleBusRTL_SBaddress"}
    , SBvalid{"SimpleBusRTL_SBvalid"}
    , SBwdata{"SimpleBusRTL_SBwdata"}
    , SBwrite{"SimpleBusRTL_SBwrite"}
    , SBsize{"SimpleBusRTL_SBsize"}
    , SBready{"SimpleBusRTL_SBready"}
    , SBrdata{"SimpleBusRTL_SBrdata"}
{}

void SimpleBusRtl::write(uint64_t addr, uint32_t value)
{
    wait(clk_.negedge_event());
    sel = true;
    SBaddress = addr;
    SBvalid = true;
    SBwdata = value;
    SBwrite = true;
    wait(clk_.posedge_event());
    wait(clk_.negedge_event());
    SBvalid = false;
    sel = false;
    wait(clk_.posedge_event());
}

uint32_t SimpleBusRtl::read(uint64_t addr)
{
    wait(clk_.negedge_event());
    sel = true;
    SBaddress = addr;
    SBvalid = true;
    SBwdata = 0;
    SBwrite = false;
    wait(clk_.posedge_event());
    wait(clk_.negedge_event());
    SBaddress = 0;
    SBvalid = false;
    const uint32_t value = SBrdata.read();
    sel = false;
    wait(clk_.posedge_event());
    return value;

}
