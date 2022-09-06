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