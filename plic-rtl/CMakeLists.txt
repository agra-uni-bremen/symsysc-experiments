message(STATUS "Loading sources from crosslevel-peripheral-fuzzing")

find_package(verilator HINTS $ENV{VERILATOR_ROOT})

set(SOURCES
        plic_rtl.cpp
        simple_bus_rtl.cpp
)

add_library(plic_verilated ${SOURCES})
verilate(plic_verilated SOURCES RVPLIC.v
        TOP_MODULE RVPLIC
        SYSTEMC
        VERILATOR_ARGS -LDFLAGS -Wno-attributes -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED
)
target_include_directories(plic_verilated PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(plic_verilated PUBLIC minikernel)
