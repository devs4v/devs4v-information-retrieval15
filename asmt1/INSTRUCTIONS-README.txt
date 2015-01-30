Dependencies:
	C++11
	You might need to fetch g++ 4.9 to use the c++11 libraries by running:

		sudo add-apt-repository ppa:ubuntu-toolchain-r/test
		sudo apt-get update
		sudo apt-get install g++-4.9


	LibArchive
	Also, you will need the libarchive package
	You can do that by typing:
		sudo apt-get install libarchive-dev

FILES:
	This project has 2 source code files:
		htmltokenize.cpp	-- main code file which opens and tokenizes each document
		timing.cpp			-- execution time benchmarking functions

COMPILING:

	You can try to compile, although there is an executable added, by the name htmltokenize.o which can be directly run with the name of the tarball.
	Compile the program as:

		g++-4.9 -std=c++11 -Wno-deprecated-declarations -o htmltokenize.o htmltokenize.cpp -larchive -lz &&


RUNNING:

	RUN program as:
		./htmltokenize.o cacm.tar.gz