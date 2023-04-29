rm -rf plic_dir
export SYSTEMC_LIBDIR=/home/klee/source/build/systemc-dist/lib-native/
export SYSTEMC_INCLUDE=/home/klee/source/build/systemc-dist/include/
verilator --Mdir plic_dir --sc -LDFLAGS -Wno-attributes -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED RVPLIC.v
cd ../..
cp -r verilator/include source/verilator
