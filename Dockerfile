FROM klee/klee:3.1

# fix of kitware key
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | sudo tee /usr/share/keyrings/kitware-archive-keyring.gpg >/dev/null
RUN echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ jammy main' | sudo tee /etc/apt/sources.list.d/kitware.list >/dev/null
#klee2.3 RUN echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ bionic main' | sudo tee /etc/apt/sources.list.d/kitware.list >/dev/null
RUN sudo apt-get update

RUN sudo apt update --allow-unauthenticated && sudo apt install time libglib2.0-dev libboost-all-dev wget libssl-dev python3-reportlab nano less python3-tabulate build-essential git autoconf flex bison -y
#klee2.3 RUN sudo apt update --allow-unauthenticated && sudo apt install time libglib2.0-dev libboost-all-dev wget libssl-dev python-reportlab nano less python-tabulate build-essential git autoconf flex bison -y

# ↓ not needed in klee3.1
# RUN sudo ln -sT /usr/bin/clang-11 /usr/bin/clang && sudo ln -sT /usr/bin/clang++-11 /usr/bin/clang++ && sudo ln -sT /usr/bin/llvm-link-11 /usr/bin/llvm-link
RUN echo '/tmp/libc++-install-130/lib' | sudo tee /etc/ld.so.conf.d/libc++.conf
# klee2.3 RUN echo '/tmp/libc++-install-110/lib' | sudo tee /etc/ld.so.conf.d/libc++.conf
RUN sudo ldconfig

RUN sudo pip3 install wllvm
#RUN export LLVM_COMPILER=clang

RUN sudo ln -sT /tmp/libc++-install-130/lib /usr/local/lib/libc++
# klee2.3 RUN sudo ln -sT /tmp/libc++-install-110/lib /usr/local/lib/libc++

# verilator
RUN cd && git clone https://github.com/verilator/verilator #&& git pull --recurse-submodules
WORKDIR verilator
RUN git checkout v4.228
RUN autoconf
RUN ./configure
RUN make -j16
USER root
RUN sudo make install

WORKDIR /home/klee
RUN mkdir build build_native && echo "cd build && cmake -DBUILD=bytecode ../source && make -j$(nproc) && cd ../build_native && cmake ../source && make -j$(nproc)" > make.sh && chmod +x make.sh
# ↓ not needed for klee3.1
# RUN ( echo "export CPLUS_INCLUDE_PATH=/tmp/llvm-110/libcxx/include" >> setup.sh ; echo "export LIBRARY_PATH=$LIBRARY_PATH:/tmp/libc++-install-110/lib" >> setup.sh ; echo "export LLVM_COMPILER=clang" >> setup.sh ; echo "export MAKEFLAGS=\"-j$(nproc)\"" >> setup.sh ; echo "SYSTEMC_INCLUDE=/home/klee/build_native/systemc-dist/include" >> setup.sh ; echo "SYSTEMC_LIBDIR=/home/klee/build_native/systemc-dist/lib-native" >> setup.sh ; chmod +x setup.sh)
# RUN ( echo "export CPLUS_INCLUDE_PATH=/tmp/llvm-130/libcxx/include" >> setup.sh ; echo "export LIBRARY_PATH=$LIBRARY_PATH:/tmp/libc++-install-130/lib" >> setup.sh ; echo "export LLVM_COMPILER=clang" >> setup.sh ; echo "export MAKEFLAGS=\"-j$(nproc)\"" >> setup.sh ; echo "SYSTEMC_INCLUDE=/home/klee/build_native/systemc-dist/include" >> setup.sh ; echo "SYSTEMC_LIBDIR=/home/klee/build_native/systemc-dist/lib-native" >> setup.sh ; chmod +x setup.sh)

# ↓ not needed for klee3.1
# RUN ( echo "export CPLUS_INCLUDE_PATH=/tmp/llvm-110/libcxx/include" >> .bashrc ; echo "export LIBRARY_PATH=$LIBRARY_PATH:/tmp/libc++-install-110/lib" >> .bashrc ; echo "export LLVM_COMPILER=clang" >> .bashrc ; echo "export MAKEFLAGS=\"-j$(nproc)\"" >> .bashrc )
# RUN ( echo "export CPLUS_INCLUDE_PATH=/tmp/llvm-130/libcxx/include" >> .bashrc ; echo "export LIBRARY_PATH=$LIBRARY_PATH:/tmp/libc++-install-130/lib" >> .bashrc ; echo "export LLVM_COMPILER=clang" >> .bashrc ; echo "export MAKEFLAGS=\"-j$(nproc)\"" >> .bashrc )
ENTRYPOINT ["bash", "--init-file", "~/.bashrc"]
