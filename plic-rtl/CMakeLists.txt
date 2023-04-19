message(STATUS "Loading sources from crosslevel-peripheral-fuzzing")

file(GLOB VERILATOR_SRC "plic_dir/*.cpp")

set(SOURCES
        plic_rtl.cpp
        simple_bus_rtl.cpp
        ${VERILATOR_SRC}
)

add_library(plic_verilated ${SOURCES})

target_include_directories(plic_verilated PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(plic_verilated PUBLIC minikernel)
