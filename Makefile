THREADS := $(shell nproc)
MAKEFLAGS += --no-print-directory

container_prog:= podman
ifeq (, $(shell which podman))
 container_prog:= docker
endif

default: native

all: native bytecode #wllvm

build/native:
	mkdir -p build/native

build/bytecode:
	mkdir -p build/bytecode

build/wllvm:
	mkdir -p build/wllvm

build/native/Makefile: build/native
	cd build/native && cmake -DBUILD=native ../..

build/bytecode/Makefile: build/bytecode
	cd build/bytecode && cmake -DBUILD=bytecode ../..

build/wllvm/Makefile: build/wllvm
	cd build/wllvm && cmake -DBUILD=wllvm ../..

native: build/native/Makefile
	make -C build/native

bytecode: build/bytecode/Makefile
	make -C build/bytecode

clean-native:
	rm -r build/native

clean-bytecode:
	rm -r build/bytecode

clean: clean-native clean-bytecode

docker-build:
	echo "if problems occur, execute"
	echo "sudo mkdir /sys/fs/cgroup/systemd"
	echo "sudo mount -t cgroup -o none,name=systemd cgroup /sys/fs/cgroup/systemd"
	$(container_prog) build --tag crossym-experiments:3.1 .

docker:			#todo: check if docker image exists
	$(container_prog) run -ti --ulimit='stack=-1:-1' -v $(shell pwd):/home/klee/source:Z crossym-experiments:3.1
	#$(container_prog) run --rm -ti --ulimit='stack=-1:-1' -v $(shell pwd):/home/klee/source:Z klee-more:1.0


#git submodule deinit <path_to_submodule>
#git rm <path_to_submodule>
#git commit-m "Removed submodule "
#rm -rf .git/modules/<path_to_submodule>
