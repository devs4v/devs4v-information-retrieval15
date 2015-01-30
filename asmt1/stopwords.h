#include <fstream>
#include <vector>
#include <string>
// #include <regex>
#define d true

using namespace std;

vector<string> read_stop_words_from_file(string filename){
    vector<string> res;
    ifstream infile;
    //regex extract_stops("\\b");
    // smatch match;
    infile.open(filename, ios::in);

    string line;
    int blank_index;
	if (infile.is_open()){
		int num_lines = 30;
		while (getline (infile, line) && num_lines--){
			if(d)cout << line << '\n';
			blank_index = line.find(" ");
			if(d)cout<<"\t^----'"<<line.substr(0, blank_index)<<"' from index "<<blank_index<<"\n";
			if (blank_index > 0){
				res.push_back(line.substr(0, blank_index));
			}
		}
		infile.close();
	}
    

    return res;
}