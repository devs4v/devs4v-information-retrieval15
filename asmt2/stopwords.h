#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
// #include <regex>
// #define d true

using namespace std;

map<string, bool> read_stop_words_from_file(string filename){
    map<string, bool> res;
    ifstream infile;
    bool d = false;
    //regex extract_stops("\\b");
    // smatch match;
    infile.open(filename, ios::in);

    string line;
    string stop_word;
    int blank_index;
	if (infile.is_open()){
		//int num_lines = 30;
		while (getline (infile, line)){
			if(d)cout << line << '\n';
			blank_index = line.find(" ");
			stop_word = line.substr(0, blank_index);

			if(d)cout<<"\t^----'"<<stop_word<<"' from index "<<blank_index<<"\n";
			if(blank_index < 0){
				blank_index = line.find("\\r");
			}
			stop_word = line.substr(0, blank_index);

			if(d)cout<<"\t^----'"<<stop_word<<"' from index "<<blank_index<<"\n";
			if (!stop_word.empty()){
				res[stop_word] = true;
			}
		}
		infile.close();
	}
    

    return res;
}