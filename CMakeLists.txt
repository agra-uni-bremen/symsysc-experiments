cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
# "-fsanitize=memory -fsanitize-memory-track-origins=2 -fno-omit-frame-pointer"
set(CMAKE_CXX_FLAGS_DEBUG "-fsanitize=address -fno-omit-frame-pointer -g -O1")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

project(SymSysC_Experiments NONE)	#NONE Important for wllvm and custom Bytecode

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

include(symsysc/DetermineLanguage.cmake)
find_package( SystemC REQUIRED)

add_subdirectory(symsysc)
add_subdirectory(duts)

add_executable(testbench_clock
		benches/bench_clock.cpp
)
target_link_libraries(testbench_clock peripherals_translated)

add_executable(testbench_plic
        benches/bench_plic.cpp
)
target_link_libraries(testbench_plic peripherals_translated)

add_executable(testbench_rtl
        benches/bench_plic_rtl.cpp
)
target_link_libraries(testbench_rtl peripherals_translated)

add_executable(testbench_sysc_plic
        benches/bench_plic_sysc.cpp
)

target_include_directories(testbench_sysc_plic PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_compile_definitions(testbench_sysc_plic PRIVATE EXTRA_BUGS)
target_link_libraries(testbench_sysc_plic ${SystemC_LIBRARIES} peripherals_sysc)

add_executable(testbench_plic_fault
        benches/bench_plic.cpp
)
target_compile_definitions(testbench_plic_fault PRIVATE EXTRA_BUGS)
target_link_libraries(testbench_plic_fault peripherals_translated )


add_executable(testbench_sensor
        benches/bench_sensor.cpp
)
target_link_libraries(testbench_sensor peripherals_translated)

add_executable(testbench_sensor2
        benches/bench_sensor2.cpp
)
target_link_libraries(testbench_sensor2 peripherals_translated)

add_executable(testbench_uart
        benches/bench_uart.cpp
)
target_link_libraries(testbench_uart peripherals_translated)

set(KLEE_ARGS
	"--libcxx"
	"--libc=uclibc"
	"-posix-runtime"
	#"--emit-all-errors=1"
)

set(KLEE_EXE
	"klee"
)

add_custom_target(run_klee_tests_with_instructions
    COMMAND time ${KLEE_EXE} ${KLEE_ARGS} --debug-print-instructions=src:file testbench_plic interface_test_write
    DEPENDS testbench_plic
)

add_custom_target(run_sysc_bench
    COMMAND time ${KLEE_EXE} ${KLEE_ARGS} -only-output-states-covering-new testbench_sysc_plic interface_test_write
    DEPENDS testbench_sysc_plic
)
