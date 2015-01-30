#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include "stopwords.h"

using namespace std;

map<string, bool> read_stop_words_from_file(string filename);

int main(int argc, char** argv){
	map<string, bool> words = read_stop_words_from_file(argv[1]);
	for (map<string, bool>::iterator i = words.begin(); i != words.end(); ++i){
		cout<<"\'"<<i->first<<"\',";
	}

	return 0;
}