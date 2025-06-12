cmake_minimum_required(VERSION 3.5)

# largest macro number
set(AMOUNT_HASHMUTANTS_TLM 0)# 1819)
set(AMOUNT_HASHMUTANTS_RTL 0)# 432)
set(AMOUNT_MAPMUTANTS_TLM 0)# 53)
set(AMOUNT_MAPMUTANTS_RTL 0)# 458)
set(AMOUNT_GCDMUTANTS_TLM 0)# 33)
set(AMOUNT_GCDMUTANTS_RTL 0)# 382)
set(AMOUNT_PLICMUTANTS_TLM 0)# 1501)
set(AMOUNT_PLICMUTANTS_RTL 0)# 3093)

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

add_executable(testbench_hash
		benches/bench_hash.cpp
)
target_link_libraries(testbench_hash peripherals_translated)

if(AMOUNT_HASHMUTANTS_TLM GREATER 0)
foreach(HASHMUTANT_TLM RANGE ${AMOUNT_HASHMUTANTS_TLM})
	add_executable(testbench_hash_mutate_tlm${HASHMUTANT_TLM}
		benches/bench_hash.cpp
	)
	target_compile_definitions(testbench_hash_mutate_tlm${HASHMUTANT_TLM} PRIVATE hash_tlm${HASHMUTANT_TLM})
	target_link_libraries(testbench_hash_mutate_tlm${HASHMUTANT_TLM} peripherals_translated)
endforeach()
endif ()
if(AMOUNT_HASHMUTANTS_RTL GREATER 0)
	foreach(HASHMUTANT_RTL RANGE ${AMOUNT_HASHMUTANTS_RTL})
		add_executable(testbench_hash_mutate_rtl${HASHMUTANT_RTL}
				benches/bench_hash.cpp
		)
		target_link_libraries(testbench_hash_mutate_rtl${HASHMUTANT_RTL} peripherals_translated_hashrtl${HASHMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_map
		benches/bench_map.cpp
)
target_link_libraries(testbench_map peripherals_translated)

if(AMOUNT_MAPMUTANTS_TLM GREATER 0)
	foreach(MAPMUTANT_TLM RANGE ${AMOUNT_MAPMUTANTS_TLM})
		add_executable(testbench_map_mutate_tlm${MAPMUTANT_TLM}
				benches/bench_map.cpp
		)
		target_compile_definitions(testbench_map_mutate_tlm${MAPMUTANT_TLM} PRIVATE map_tlm${MAPMUTANT_TLM})
		target_link_libraries(testbench_map_mutate_tlm${MAPMUTANT_TLM} peripherals_translated)
	endforeach()
endif ()
if(AMOUNT_MAPMUTANTS_RTL GREATER 0)
	foreach(MAPMUTANT_RTL RANGE ${AMOUNT_MAPMUTANTS_RTL})
		add_executable(testbench_map_mutate_rtl${MAPMUTANT_RTL}
				benches/bench_map.cpp
		)
		target_link_libraries(testbench_map_mutate_rtl${MAPMUTANT_RTL} peripherals_translated_maprtl${MAPMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_gcd
		benches/bench_gcd.cpp
)
target_link_libraries(testbench_gcd peripherals_translated)

if(AMOUNT_GCDMUTANTS_TLM GREATER 0)
foreach(GCDMUTANT_TLM RANGE ${AMOUNT_GCDMUTANTS_TLM})
	add_executable(testbench_gcd_mutate_tlm${GCDMUTANT_TLM}
			benches/bench_gcd.cpp
	)
	target_compile_definitions(testbench_gcd_mutate_tlm${GCDMUTANT_TLM} PRIVATE gcd_tlm${GCDMUTANT_TLM})
	target_link_libraries(testbench_gcd_mutate_tlm${GCDMUTANT_TLM} peripherals_translated)
endforeach()
endif ()
if(AMOUNT_GCDMUTANTS_RTL GREATER 0)
	foreach(GCDMUTANT_RTL RANGE ${AMOUNT_GCDMUTANTS_RTL})
		add_executable(testbench_gcd_mutate_rtl${GCDMUTANT_RTL}
				benches/bench_gcd.cpp
		)
		target_link_libraries(testbench_gcd_mutate_rtl${GCDMUTANT_RTL} peripherals_translated_gcdrtl${GCDMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_comp
		benches/bench_comparison.cpp
)
target_link_libraries(testbench_comp peripherals_translated)
if(AMOUNT_PLICMUTANTS_TLM GREATER 0)
	foreach(PLICMUTANT_TLM RANGE ${AMOUNT_PLICMUTANTS_TLM})
		add_executable(testbench_comp_mutate_tlm${PLICMUTANT_TLM}
				benches/bench_comparison.cpp
		)
		target_compile_definitions(testbench_comp_mutate_tlm${PLICMUTANT_TLM} PRIVATE plic${PLICMUTANT_TLM})
		target_link_libraries(testbench_comp_mutate_tlm${PLICMUTANT_TLM} peripherals_translated)
	endforeach()
endif ()
if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
	foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
		add_executable(testbench_comp_mutate_rtl${PLICMUTANT_RTL}
				benches/bench_comparison.cpp
		)
		target_link_libraries(testbench_comp_mutate_rtl${PLICMUTANT_RTL} peripherals_translated_plicrtl${PLICMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_clock
		benches/bench_clock.cpp
)
target_link_libraries(testbench_clock peripherals_translated)

add_executable(testbench_plic
		benches/bench_plic.cpp
)
target_link_libraries(testbench_plic peripherals_translated)
if(AMOUNT_PLICMUTANTS_TLM GREATER 0)
	foreach(PLICMUTANT_TLM RANGE ${AMOUNT_PLICMUTANTS_TLM})
		add_executable(testbench_plic_mutate_tlm${PLICMUTANT_TLM}
				benches/bench_plic.cpp
		)
		target_compile_definitions(testbench_plic_mutate_tlm${PLICMUTANT_TLM} PRIVATE plic${PLICMUTANT_TLM})
		target_link_libraries(testbench_plic_mutate_tlm${PLICMUTANT_TLM} peripherals_translated)
	endforeach()
endif ()

add_executable(testbench_rtl
		benches/bench_plic_rtl.cpp
)
target_link_libraries(testbench_rtl peripherals_translated)
if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
	foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
		add_executable(testbench_plic_mutate_rtl${PLICMUTANT_RTL}
				benches/bench_plic_rtl.cpp
		)
		target_link_libraries(testbench_plic_mutate_rtl${PLICMUTANT_RTL} peripherals_translated_plicrtl${PLICMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_sysc_plic
		benches/bench_plic_sysc.cpp
)
target_include_directories(testbench_sysc_plic PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
# target_compile_definitions(testbench_sysc_plic PRIVATE EXTRA_BUGS)
target_link_libraries(testbench_sysc_plic peripherals_sysc) # ${SystemC_LIBRARIES} peripherals_sysc)

if(AMOUNT_PLICMUTANTS_TLM GREATER 0)
	foreach(PLICMUTANT_TLM RANGE ${AMOUNT_PLICMUTANTS_TLM})
		add_executable(testbench_plic_sysc_mutate_tlm${PLICMUTANT_TLM}
				benches/bench_plic_sysc.cpp
		)
		target_compile_definitions(testbench_plic_sysc_mutate_tlm${PLICMUTANT_TLM} PRIVATE plic${PLICMUTANT_TLM})
		target_include_directories(testbench_plic_sysc_mutate_tlm${PLICMUTANT_TLM} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_plic_sysc_mutate_tlm${PLICMUTANT_TLM} peripherals_sysc)
	endforeach()
endif ()

add_executable(testbench_sysc_map
		benches/bench_map_sysc.cpp
)
target_include_directories(testbench_sysc_map PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_link_libraries(testbench_sysc_map peripherals_sysc)

if(AMOUNT_MAPMUTANTS_TLM GREATER 0)
	foreach(MAPMUTANT_TLM RANGE ${AMOUNT_MAPMUTANTS_TLM})
		add_executable(testbench_map_sysc_mutate_tlm${MAPMUTANT_TLM}
				benches/bench_map_sysc.cpp
		)
		target_compile_definitions(testbench_map_sysc_mutate_tlm${MAPMUTANT_TLM} PRIVATE map_tlm${MAPMUTANT_TLM})
		target_include_directories(testbench_sysc_map_mutate_tlm${MAPMUTANT_TLM} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_map_sysc_mutate_tlm${MAPMUTANT_TLM} peripherals_sysc)
	endforeach()
endif ()
if(AMOUNT_MAPMUTANTS_RTL GREATER 0)
	foreach(MAPMUTANT_RTL RANGE ${AMOUNT_MAPMUTANTS_RTL})
		add_executable(testbench_map_sysc_mutate_rtl${MAPMUTANT_RTL}
				benches/bench_map_sysc.cpp
		)
		target_include_directories(testbench_sysc_map_mutate_rtl${MAPMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_map_sysc_mutate_rtl${MAPMUTANT_RTL} peripherals_sysc_maprtl${MAPMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_sysc_plic_rtl
		benches/bench_plic_rtl_sysc.cpp
)
target_include_directories(testbench_sysc_plic_rtl PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_link_libraries(testbench_sysc_plic_rtl peripherals_sysc) # ${SystemC_LIBRARIES} peripherals_sysc)

if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
	foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
		add_executable(testbench_plic_sysc_mutate_rtl${PLICMUTANT_RTL}
				benches/bench_plic_rtl_sysc.cpp
		)
		target_include_directories(testbench_plic_sysc_mutate_rtl${PLICMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_plic_sysc_mutate_rtl${PLICMUTANT_RTL} peripherals_sysc_plicrtl${PLICMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_sysc_comp
		benches/bench_comp_sysc.cpp
)
target_include_directories(testbench_sysc_comp PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_link_libraries(testbench_sysc_comp peripherals_sysc) # ${SystemC_LIBRARIES} peripherals_sysc)

if(AMOUNT_PLICMUTANTS_TLM GREATER 0)
	foreach(PLICMUTANT_TLM RANGE ${AMOUNT_PLICMUTANTS_TLM})
		add_executable(testbench_comp_sysc_mutate_tlm${PLICMUTANT_TLM}
				benches/bench_comp_sysc.cpp
		)
		target_compile_definitions(testbench_comp_sysc_mutate_tlm${PLICMUTANT_TLM} PRIVATE plic${PLICMUTANT_TLM})
		target_include_directories(testbench_comp_sysc_mutate_tlm${PLICMUTANT_TLM} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_comp_sysc_mutate_tlm${PLICMUTANT_TLM} peripherals_sysc)
	endforeach()
endif ()
if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
	foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
		add_executable(testbench_comp_sysc_mutate_rtl${PLICMUTANT_RTL}
				benches/bench_comp_sysc.cpp
		)
		target_include_directories(testbench_comp_sysc_mutate_rtl${PLICMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_comp_sysc_mutate_rtl${PLICMUTANT_RTL} peripherals_sysc_plicrtl${PLICMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_sysc_hash
		benches/bench_hash_sysc.cpp
)
target_include_directories(testbench_sysc_hash PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_link_libraries(testbench_sysc_hash peripherals_sysc) # ${SystemC_LIBRARIES} peripherals_sysc)

if(AMOUNT_HASHMUTANTS_TLM GREATER 0)
	foreach(HASHMUTANT_TLM RANGE ${AMOUNT_HASHMUTANTS_TLM})
		add_executable(testbench_hash_sysc_mutate_tlm${HASHMUTANT_TLM}
				benches/bench_hash_sysc.cpp
		)
		target_compile_definitions(testbench_hash_sysc_mutate_tlm${HASHMUTANT_TLM} PRIVATE hash_tlm${HASHMUTANT_TLM})
		target_include_directories(testbench_hash_sysc_mutate_tlm${HASHMUTANT_TLM} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_hash_sysc_mutate_tlm${HASHMUTANT_TLM} peripherals_sysc)
	endforeach()
endif ()
if(AMOUNT_HASHMUTANTS_RTL GREATER 0)
	foreach(HASHMUTANT_RTL RANGE ${AMOUNT_HASHMUTANTS_RTL})
		add_executable(testbench_hash_sysc_mutate_rtl${HASHMUTANT_RTL}
				benches/bench_hash_sysc.cpp
		)
		target_include_directories(testbench_hash_sysc_mutate_rtl${HASHMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_hash_sysc_mutate_rtl${HASHMUTANT_RTL} peripherals_sysc_hashrtl${HASHMUTANT_RTL})
	endforeach()
endif ()

add_executable(testbench_sysc_gcd
		benches/bench_gcd_sysc.cpp
)
target_include_directories(testbench_sysc_gcd PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
target_link_libraries(testbench_sysc_gcd peripherals_sysc) # ${SystemC_LIBRARIES} peripherals_sysc)

if(AMOUNT_GCDMUTANTS_TLM GREATER 0)
	foreach(GCDMUTANT_TLM RANGE ${AMOUNT_GCDMUTANTS_TLM})
		add_executable(testbench_gcd_sysc_mutate_tlm${GCDMUTANT_TLM}
				benches/bench_gcd_sysc.cpp
		)
		target_compile_definitions(testbench_gcd_sysc_mutate_tlm${GCDMUTANT_TLM} PRIVATE gcd_tlm${GCDMUTANT_TLM})
		target_include_directories(testbench_sysc_gcd_mutate_tlm${GCDMUTANT_TLM} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_gcd_sysc_mutate_tlm${GCDMUTANT_TLM} peripherals_sysc)
	endforeach()
endif ()
if(AMOUNT_GCDMUTANTS_RTL GREATER 0)
	foreach(GCDMUTANT_RTL RANGE ${AMOUNT_GCDMUTANTS_RTL})
		add_executable(testbench_gcd_sysc_mutate_rtl${GCDMUTANT_RTL}
				benches/bench_gcd_sysc.cpp
		)
		target_include_directories(testbench_sysc_gcd_mutate_rtl${GCDMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR} symsysc/klee)
		target_link_libraries(testbench_gcd_sysc_mutate_rtl${GCDMUTANT_RTL} peripherals_sysc_gcdrtl${GCDMUTANT_RTL})
	endforeach()
endif ()
