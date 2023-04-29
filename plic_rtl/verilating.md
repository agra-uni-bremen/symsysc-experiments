# RVPLIC

klee-Dockerimage works on an old ubuntu version (apt verilator: 3.916, very old) and has a slightly difficult setup for building the bytecode correctly.
If Verilator is built from source, the normal stuff does not seem to work ("Compiler cannot create executables").
As a (not that pretty) fix, the repository contains the verilated RVPLIC as well as the necessary include files (from verilator 4.228) due to one header file which is created with the actual configuration (verilated_config.h).

If attempting to build outside of Docker container, the PLIC might need to be built on the local system. 
In addition, the include directory in CMakeList would need to be changed.

If you want to verilate the PLIC for the Docker container, the necessary steps are described below.

## Verilate RVPLIC

First, uncomment the verilator installation in the Dockerfile.
Build the Dockerimage and start the container.
There, execute ```verilate.sh``` in ```plic_rtl```.

Now, exit the container.
Comment the verilator installation again, and rebuild everything.
Now, you can build the testbenches as usual with make.sh.
