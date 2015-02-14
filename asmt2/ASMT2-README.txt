README
ASSIGNMENT 2 : INFORMATION RETRIEVAL - WINTER 2015



Dependencies:
	C++11
	You might need to fetch g++ 4.9 to use the c++11 libraries by running:

		sudo add-apt-repository ppa:ubuntu-toolchain-r/test
		sudo apt-get update
		sudo apt-get install g++-4.9


FILES:
	This project has 3 source code files:
		sti.cpp 				: A driver program to run the 3 functions that we were instructed to write and carry out.
		simpletextinverter.h 	: Main header file for SimpleTextInverter class with emit, sort and invert public functions.
		timing.h				: timing functions header file.
	
	Additionally, the provided files for use as dataset are kept in the "files" folder.
	

COMPILING:

	You can try to compile, although there is an executable added, by the name htmltokenize.o which can be directly run with the name of the tarball.
	Compile the program as:

		Part(1):
			g++-4.9 -std=c++11 -Wno-deprecated-declarations -o sti.o sti.cpp

			[Note that the above command will also compile the header files for the SimpleTextInverter class.]
		

RUNNING:

	RUN program as:
		Part(1):
			./sti.o files
		



OBSERVATIONS:
	We observe that we have generated an inverted index of the tokens (words, numbers, etc.) extracted from the given data files. This inverted index mapping can be useful in retrieval of information.
