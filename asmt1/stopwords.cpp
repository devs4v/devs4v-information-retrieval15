#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "stopwords.h"

using namespace std;

vector<string> read_stop_words_from_file(string filename);

int main(int argc, char** argv){
	vector<string> words = read_stop_words_from_file(argv[1]);
	for (std::vector<string>::iterator i = words.begin(); i != words.end(); ++i){
		cout<<"\'"<<*i<<"\',";
	}

	return 0;
}