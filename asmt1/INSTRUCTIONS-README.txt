Dependencies: C++11
You might need to fetch g++ 4.9 to use the c++11 libraries by running:


sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install g++-4.9


Also, you will need the libarchive package
You can do that by typing:
sudo apt-get install libarchive-dev

You can try to compile, although there is an executable added.
Compile the program as:
g++ --std=c++11 -Wno-deprecated-declarations -larchive -lz -o readtar readtar.cpp

RUN program as:
./readtar cacm.tar.gz