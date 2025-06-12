file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h*)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

cmake_path(GET CMAKE_CURRENT_SOURCE_DIR PARENT_PATH PARENT_DIR)
cmake_path(GET PARENT_DIR PARENT_PATH PARENT_DIR)

set(VSOURCES
        ${PARENT_DIR}/verilator/include/verilated.cpp
)

add_library(peripherals_translated
        ${SOURCES}
        ${HEADERS}
        ${VSOURCES}
)
target_include_directories(peripherals_translated PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(peripherals_translated PUBLIC ${PARENT_DIR}/verilator/include)# ${CMAKE_CURRENT_SOURCE_DIR}/verilator/vltstd)
target_compile_definitions(peripherals_translated PUBLIC SYMSYSC)
target_link_libraries(peripherals_translated PUBLIC minikernel)

# custom mutant libraries only necessary for RTL bc TLM is currently defined exlusively in headers
# those are reloaded after inclusion in testbench => no problem
# RTL mutants mostly in source files => not changed after macro is set, always executing ELSE
if(AMOUNT_HASHMUTANTS_RTL GREATER 0)
    foreach(HASHMUTANT_RTL RANGE ${AMOUNT_HASHMUTANTS_RTL})
        add_library(peripherals_translated_hashrtl${HASHMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_translated_hashrtl${HASHMUTANT_RTL} PUBLIC VSBTaskHash___024root__DepSet_h96cc95e1__0${HASHMUTANT_RTL}=1)
        target_compile_definitions(peripherals_translated_hashrtl${HASHMUTANT_RTL} PUBLIC SYMSYSC)
        target_include_directories(peripherals_translated_hashrtl${HASHMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_translated_hashrtl${HASHMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_link_libraries(peripherals_translated_hashrtl${HASHMUTANT_RTL} PUBLIC minikernel)
    endforeach()
endif ()
if(AMOUNT_GCDMUTANTS_RTL GREATER 0)
    foreach(GCDMUTANT_RTL RANGE ${AMOUNT_GCDMUTANTS_RTL})
        add_library(peripherals_translated_gcdrtl${GCDMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_translated_gcdrtl${GCDMUTANT_RTL} PUBLIC VSBGCDCtrl___024root__DepSet_h475c8783__0${GCDMUTANT_RTL}=1)
        target_compile_definitions(peripherals_translated_gcdrtl${GCDMUTANT_RTL} PUBLIC SYMSYSC)
        target_include_directories(peripherals_translated_gcdrtl${GCDMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_translated_gcdrtl${GCDMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_link_libraries(peripherals_translated_gcdrtl${GCDMUTANT_RTL} PUBLIC minikernel)
    endforeach()
endif ()
if(AMOUNT_MAPMUTANTS_RTL GREATER 0)
    foreach(MAPMUTANT_RTL RANGE ${AMOUNT_MAPMUTANTS_RTL})
        add_library(peripherals_translated_maprtl${MAPMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_translated_maprtl${MAPMUTANT_RTL} PUBLIC VSBTaskMap___024root__DepSet_hc4b5a78b__0${MAPMUTANT_RTL}=1)
        target_compile_definitions(peripherals_translated_maprtl${MAPMUTANT_RTL} PUBLIC SYMSYSC)
        target_include_directories(peripherals_translated_maprtl${MAPMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_translated_maprtl${MAPMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_link_libraries(peripherals_translated_maprtl${MAPMUTANT_RTL} PUBLIC minikernel)
    endforeach()
endif ()
if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
    foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
        add_library(peripherals_translated_plicrtl${PLICMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_translated_plicrtl${PLICMUTANT_RTL} PUBLIC VRVPLIC___024root__DepSet_h21fe46eb__0${PLICMUTANT_RTL}=1)
        target_compile_definitions(peripherals_translated_plicrtl${PLICMUTANT_RTL} PUBLIC SYMSYSC)
        target_include_directories(peripherals_translated_plicrtl${PLICMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_translated_plicrtl${PLICMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_link_libraries(peripherals_translated_plicrtl${PLICMUTANT_RTL} PUBLIC minikernel)
    endforeach()
endif ()

add_library(peripherals_sysc
        ${SOURCES}
        ${HEADERS}
        ${VSOURCES}
)
target_include_directories(peripherals_sysc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(peripherals_sysc PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
target_include_directories(peripherals_sysc PRIVATE ${SystemC_INCLUDE_DIR})
target_link_libraries(peripherals_sysc PUBLIC ${SystemC_LIBRARIES})

# custom mutant libraries only necessary for RTL bc TLM is currently defined exlusively in headers
# those are reloaded after inclusion in testbench => no problem
# RTL mutants mostly in source files => not changed after macro is set, always executing ELSE
if(AMOUNT_HASHMUTANTS_RTL GREATER 0)
    foreach(HASHMUTANT_RTL RANGE ${AMOUNT_HASHMUTANTS_RTL})
        add_library(peripherals_sysc_hashrtl${HASHMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_sysc_hashrtl${HASHMUTANT_RTL} PUBLIC VSBTaskHash___024root__DepSet_h96cc95e1__0${HASHMUTANT_RTL}=1)
        target_include_directories(peripherals_sysc_hashrtl${HASHMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_sysc_hashrtl${HASHMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_include_directories(peripherals_sysc_hashrtl${HASHMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR})
        target_link_libraries(peripherals_sysc_hashrtl${HASHMUTANT_RTL} PUBLIC ${SystemC_LIBRARIES})
    endforeach()
endif ()
if(AMOUNT_GCDMUTANTS_RTL GREATER 0)
    foreach(GCDMUTANT_RTL RANGE ${AMOUNT_GCDMUTANTS_RTL})
        add_library(peripherals_sysc_gcdrtl${GCDMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_sysc_gcdrtl${GCDMUTANT_RTL} PUBLIC VSBGCDCtrl___024root__DepSet_h475c8783__0${GCDMUTANT_RTL}=1)
        target_include_directories(peripherals_sysc_gcdrtl${GCDMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_sysc_gcdrtl${GCDMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_include_directories(peripherals_sysc_gcdrtl${GCDMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR})
        target_link_libraries(peripherals_sysc_gcdrtl${GCDMUTANT_RTL} PUBLIC ${SystemC_LIBRARIES})
    endforeach()
endif ()
if(AMOUNT_MAPMUTANTS_RTL GREATER 0)
    foreach(MAPMUTANT_RTL RANGE ${AMOUNT_MAPMUTANTS_RTL})
        add_library(peripherals_sysc_maprtl${MAPMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_sysc_maprtl${MAPMUTANT_RTL} PUBLIC VSBTaskMap___024root__DepSet_hc4b5a78b__0${MAPMUTANT_RTL}=1)
        target_compile_definitions(peripherals_sysc_maprtl${MAPMUTANT_RTL} PUBLIC SYMSYSC)
        target_include_directories(peripherals_sysc_maprtl${MAPMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_sysc_maprtl${MAPMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_link_libraries(peripherals_sysc_maprtl${MAPMUTANT_RTL} PUBLIC minikernel)
    endforeach()
endif ()
if(AMOUNT_PLICMUTANTS_RTL GREATER 0)
    foreach(PLICMUTANT_RTL RANGE ${AMOUNT_PLICMUTANTS_RTL})
        add_library(peripherals_sysc_plicrtl${PLICMUTANT_RTL}
                ${SOURCES}
                ${HEADERS}
                ${VSOURCES}
        )
        target_compile_definitions(peripherals_sysc_plicrtl${PLICMUTANT_RTL} PUBLIC VRVPLIC___024root__DepSet_h21fe46eb__0${PLICMUTANT_RTL}=1)
        target_include_directories(peripherals_sysc_plicrtl${PLICMUTANT_RTL} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
        target_include_directories(peripherals_sysc_plicrtl${PLICMUTANT_RTL} PUBLIC ${PARENT_DIR}/verilator/include)# ${PARENT_DIR}/verilator/include/vltstd)
        target_include_directories(peripherals_sysc_plicrtl${PLICMUTANT_RTL} PRIVATE ${SystemC_INCLUDE_DIR})
        target_link_libraries(peripherals_sysc_plicrtl${PLICMUTANT_RTL} PUBLIC ${SystemC_LIBRARIES})
    endforeach()
endif ()

#"PRIVATE" not working as I expect it to (dont link at the end with executable...)
# but this is OK only as long as the executable target does link it anyway.
# With llvm-link it is not allowed to have multiple symbols, unless we specify --only-needed,
# which produces different problems (main not linked)
#target_link_libraries( peripherals_translated PRIVATE minikernel )
#target_link_libraries( peripherals_sysc PRIVATE ${SystemC_LIBRARIES} )
