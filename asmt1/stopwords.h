#include <fstream>
#include <vector>
#include <string>
// #include <regex>
#define d true

using namespace std;

map<string, bool> read_stop_words_from_file(string filename){
    map<string, bool> res;
    ifstream infile;
    //regex extract_stops("\\b");
    // smatch match;
    infile.open(filename, ios::in);

    string line;
    int blank_index;
	if (infile.is_open()){
		//int num_lines = 30;
		while (getline (infile, line)){
			if(d)cout << line << '\n';
			blank_index = line.find(" ");
			if(d)cout<<"\t^----'"<<line.substr(0, blank_index)<<"' from index "<<blank_index<<"\n";
			if (blank_index > 0){
				res[line.substr(0, blank_index)] = true;
			}
		}
		infile.close();
	}
    

    return res;
}