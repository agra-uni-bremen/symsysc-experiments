Symbolic Execution of SystemC TLM Peripherals
=============================================

This is a Mini-Kernel, designed to replace (parts of) the SystemC TLM kernel and optimized for symbolic execution frameworks,
especially like [klee](https://klee.github.io/).
It is the experimental proof-of-concept of [this](https://dl.acm.org/doi/abs/10.1145/3489517.3530604) paper.

How to test:
------------
```bash
$ ./make.sh # optional
$ ./run_all_tests.sh
```

# How to run Dockerimage

```bash
make docker-build
make docker
```

# How to use Dockerimage

```bash
source setup.sh
./make.sh
./source/run_all_tests.sh
```

# How to verilate

```bash
verilator --Mdir map --sc -LDFLAGS -Wno-attributes -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED peripherals/SBTaskMap.v
```
