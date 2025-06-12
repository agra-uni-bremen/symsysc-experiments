Symbolic Execution of SystemC Peripherals
=============================================

This repository contains the testbenches used for evaluating three approaches targeting the symbolic execution of SystemC peripherals.
CrosSym and SymSysC are designed aroung a minikernel replacing (parts of) the SystemC kernel.
SymSysC only supports TLM peripherals, while CrosSym supports TLM and RTL peripherals.
SEFOS supports the unmodified SystemC peripherals and kernel, which is realised by modifying KLEE, the modern state-of-the-art symbolic execution engine.

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
./make.sh
./source/run_all_tests.sh
```

# How to verilate

```bash
verilator --Mdir hash --sc -LDFLAGS -Wno-attributes -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED peripherals/SBTaskHash.v
```

# Bugfixes

## ASan Shadow Memory Range error
If the `Shadow memory range interleaves with an existing memory mapping. ASan cannot proceed correctly. ABORTING` error occurs,
it might be worth checking with `sudo cat /proc/sys/vm/mmap_rnd_bits` if the system works with entropy greater than 28 bits.
In that case, run `sudo sysctl vp.mmap_rnd_bits=28` to set to 28 bits entropy ([see here](https://github.com/google/sanitizers/issues/1614)).
Important: run on host system, not in the docker container.
This problem is fixed for LLVM 17.0.0, however the Docker file uses LLVM 11.
