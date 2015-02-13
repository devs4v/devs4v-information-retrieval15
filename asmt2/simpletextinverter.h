#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <regex>
#include <iterator>
#include <utility>
#include <algorithm>

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define d true

using namespace std;

// struct _sort_by_lexicography {
//     static bool compare_chars(char x, char y) {
//         return toupper(x) < toupper(y);
//     }
//     bool operator()(const string& x, const string& y) const {
//         return lexicographical_compare(x.begin(), x.end(), y.begin(), y.end(), compare_chars);
//     }
// };
class SimpleTextInverter{
    private:
        /* emit functions */
        int _parse_file_to_tokens(const string, set<string>&);
        int _get_file_data(const string, string&);
        int _write_tokens_to_file(set<string>&, string);
        int _remove_escape_chars(string&);
        set<string> _tokenize(string&);
        set<string> _split(string&, string);

        /* sort functions */
        int _load_emit_data(string, vector<pair<string, string>>&);
        int _sort_emit_data(vector<pair<string, string>>&);
        int _write_emit_data(vector<pair<string, string>>&);

        /* invert functions */
        int _load_sorted_data(string, map<string, vector<string>>&);
        int _invert_tokens(map<string, vector<string>>&);
        int _write_inverted_tokens(map<string, vector<string>>&);
    public:
        void emit(const char *);
        void sort(const char *);
        void invert(const char *);
        
};

void SimpleTextInverter::emit(const char *direc){
    
    ifstream fin;
    string directory(direc);

    string filepath;
    DIR *dp;
    struct dirent *dirp;
    struct stat filestat;
    
    string fileContents;
    set<string> mapped_tokens;
    string filename;
    errno = 0;
    dp = opendir( directory.c_str() );
    if(dp == NULL){
        cout << "Error(" << errno << ") opening " << directory << endl;
        return;
    }

    while ((dirp = readdir( dp ))){
        filepath = directory + "/" + dirp->d_name;
        filename = dirp->d_name;
        if(d)cout<<"\nreading "<<filepath;

        // If the file is a directory (or is in some way invalid) we'll skip it 
        if (stat( filepath.c_str(), &filestat )) continue;
        if (S_ISDIR( filestat.st_mode ))         continue;

        cout<<"\nParsing "<<filename;
        if(0 != _parse_file_to_tokens(filepath, mapped_tokens)){
            cout<<"\nError: Error in parsing file for tokens. (Continuing with next file.)";
            continue;
        }

        if(0 != _write_tokens_to_file(mapped_tokens, filename)){
            cout<<"\nError: Error in writing tokens to disk. (Continuing with next file.)";
            continue;
        }
            

        if(d)cout<<"\nFinished writing to emit for "<<filename;

    }
    closedir( dp );
}

// map<string, string> SimpleTextInverter::_map_string_data_to_tokens(const string filename){
//     vector<string> tokens;
//     _parse_file_to_tokens(filename, tokens);
//     vector<string>::iterator token_it;
//     map<string, string> mapped_tokens;
//     for(token_it = tokens.begin(); token_it != tokens.end(); ++token_it){
//         mapped_tokens[*token_it] = filename;
//     }
//     return mapped_tokens;
// }

int SimpleTextInverter::_parse_file_to_tokens(const string filename, set<string>& tokens){
    string fileData;
    if(0 != _get_file_data(filename, fileData)){
        cout<<"\nError: Error in fetching file data from file.";
        return -1;
    }
    if(0 != _remove_escape_chars(fileData)){
        cout<<"\nError: Error in removing escape chars.";
        return -1;
    }
    tokens = _tokenize(fileData);

    return 0;
}

int SimpleTextInverter::_get_file_data(const string filename, string& fileContents){
    errno = 0;
    ifstream in(filename.c_str(), ios::in | ios::binary);
    if (in){
        in.seekg(0, ios::end);
        fileContents.resize(in.tellg());
        in.seekg(0, ios::beg);
        in.read(&fileContents[0], fileContents.size());
        in.close();
        return 0;
    }else{
        cout<<"\nError: Error in opening file to read tokens.";
        return -1;
    }
}


int SimpleTextInverter::_remove_escape_chars(string& str){
    string blankie = " ";
    string result;
    // regex no_tag_regex("<.*>");
    regex no_special_chars("[(\\n)|(\\t)|(\\/)|(\\*)|(,)|(~)|(\\.)|(;)|(:)|(\\!)|(\\?)|(')|(\")|(\\[)|(\\])|(\\()|(\\))]");
    // regex ("[]");

    // result = regex_replace(doc, no_tag_regex, blankie);
    // result = regex_replace(str, no_linefeed_tabs, blankie);
    str = regex_replace(str, no_special_chars, blankie);
    return 0;
}

set<string> SimpleTextInverter::_tokenize(string& no_tag_doc){
    return _split(no_tag_doc, " ");
}

set<string> SimpleTextInverter::_split(string& s, string delim){
    set<string> res;
    
    if(delim.empty()){
        // vector<string> res;
        res.insert(s);
        return res;
    }
    size_t pos = 0;
    string token;
    while ((pos = s.find(delim)) != string::npos) {
        token = s.substr(0, pos);
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        if(!token.empty()){
            res.insert(token);
        }
        // std::cout << token << std::endl;
        s.erase(0, pos + delim.length());
    }
    return res;
}

int SimpleTextInverter::_write_tokens_to_file(set<string>& tokens, string filename){
    ofstream fout;
    fout.open("emit.out", ios::out | ios::app);

    if(fout.is_open()){
        for (set<string>::iterator i = tokens.begin(); i != tokens.end(); ++i){
            fout<<*i<<":"<<filename<<endl;
        }
    }else{
        cout<<"\nError: Could not open emit.out file!";
    }
    fout.close();
    return 0;
}


/* sort functions */

void SimpleTextInverter::sort(const char *emit_filename = "emit.out"){
    vector<pair<string, string>> emit_tokens;
    string emit_file(emit_filename);

    if(0 != _load_emit_data(emit_file, emit_tokens)){
        cout<<"\nError: Could not load emit data from file: "<<emit_filename;
        return;
    }
    if(0 != _sort_emit_data(emit_tokens)){
        cout<<"\nError: Could not sort emit data.";
        return;
    }
    if(0 != _write_emit_data(emit_tokens)){
        cout<<"\nError: Could not write data to sort.out.";
        return;
    }
}

int SimpleTextInverter::_load_emit_data(string emit_file, vector<pair<string, string>>& emit_tokens){
    ifstream fin;
    fin.open(emit_file, ios::in);


    fin.close();
    return 0;
}

int SimpleTextInverter::_sort_emit_data(vector<pair<string, string>>& emit_tokens){
    return 0;
}

int SimpleTextInverter::_write_emit_data(vector<pair<string, string>>& emit_tokens){
    string outfile = "emit.out";

    ofstream fout;
    fout.open(outfile, ios::out);

    if(fout.is_open()){

    }else{
        cout<<"\nError: Could not open emit.out file for writing.";
    }

    fout.close();
    return 0;
}



void SimpleTextInverter::invert(const char *sorted_filename = "sort.out"){
    vector<pair<string, string>> sorted_tokens;
    string sorted_file(sorted_filename);
    map<string, vector<string>> inverted_tokens;
    if(0 != _load_sorted_data(sorted_file, sorted_tokens)){
        cout<<"\nError: Could not load sorted data from file: "<<sorted_filename;
        return;
    }
    if(0 != _invert_tokens(sorted_tokens, inverted_tokens)){
        cout<<"\nError: Could not invert sorted emit data.";
        return;
    }
    if(0 != _write_inverted_tokens(inverted_tokens)){
        cout<<"\nError: Could not load inverted data to invert.out.";
        return;
    }
}

int SimpleTextInverter::_load_sorted_data(string sorted_file, vector<pair<string, string>>& sorted_tokens){
    return 0;
}

int SimpleTextInverter::_invert_tokens(vector<pair<string, string>>& sorted_tokens, map<string, vector<string>>& inverted_tokens){
    return 0;
}

int SimpleTextInverter::_write_inverted_tokens(map<string, vector<string>>& inverted_tokens){
    string outfile = "invert.out";
    ofstream fout;
    fout.open(outfile, ios::out);

    if(fout.is_open()){

    }else{
        cout<<"\nError: Could not open invert.out file for writing.";
    }

    fout.close();
    return 0;
}