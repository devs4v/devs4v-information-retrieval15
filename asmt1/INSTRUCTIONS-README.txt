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
	This project has 4 source code files:
		htmltokenize.cpp			-- main code file which opens and tokenizes each document.
		htmltokenizewithstop.cpp	-- main code file which opens and tokenizes each document but avoid the stop words from coming in the index.
		timing.h					-- execution time benchmarking functions.
		stopwords.h 				-- contains functions which read the stopwords file and returns a map of all stopwords from the given file.

COMPILING:

	You can try to compile, although there is an executable added, by the name htmltokenize.o which can be directly run with the name of the tarball.
	Compile the program as:

		Part(a):
			this is just the tokenize function. You can view the code in htmltokenize.cpp for example. The same code is used in htmltokenizewithstop.cpp where extra functions are used to stop the stop words being included in the index.

		Part(b)
			g++-4.9 -std=c++11 -Wno-deprecated-declarations -o htmltokenize.o htmltokenize.cpp -larchive -lz
		
		Part(c)
			g++-4.9 -std=c++11 -Wno-deprecated-declarations -o htmltokenizewithstop.o htmltokenizewithstop.cpp -larchive -lz


RUNNING:

	RUN program as:
		Part(b):
			./htmltokenize.o cacm.tar.gz
		
		Part(c):
			./htmltokenizewithstop.o cacm.tar.gz stopwords.txt

