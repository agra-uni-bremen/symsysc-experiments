file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h*)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(peripherals_translated
        ${SOURCES}
        ${HEADERS}
)
target_include_directories( peripherals_translated PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(peripherals_sysc
        ${SOURCES}
        ${HEADERS}
)
target_include_directories( peripherals_sysc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories( peripherals_sysc PRIVATE ${SystemC_INCLUDE_DIR})

#"PRIVATE" not working as I expect it to (dont link at the end with executable...)
# but this is OK only as long as the executable target does link it anyway
# (with llvm-link it is not allowed to have multiple symbols)
#target_link_libraries( bench_translated PRIVATE minikernel )
#target_link_libraries( bench_sysc PRIVATE ${SystemC_LIBRARIES} )
