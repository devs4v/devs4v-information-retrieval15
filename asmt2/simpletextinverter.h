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

struct _sort_by_first_lexico{
    inline bool operator() (const pair<string, string>& a, const pair<string, string>& b){
        return ((a.first == b.first)?(a.second < b.second):(a.first < b.first));
    }
};

class SimpleTextInverter{
    private:
        /* emit functions */
        int _parse_file_to_tokens(const string, set<string>&);
        int _get_file_data(const string, string&);
        int _write_tokens_to_file(set<string>&, string);
        int _remove_escape_chars(string&);
        set<string> _tokenize(string&);
        set<string> _split(string&, string);
        vector<string> _split_to_vector(string&, string);

        /* sort functions */
        int _load_emit_data(string, vector<pair<string, string>>&);
        int _sort_emit_data(vector<pair<string, string>>&);
        int _write_sorted_data(vector<pair<string, string>>&);

        /* invert functions */
        int _load_sorted_data(string, vector<pair<string, string>>&);
        int _invert_tokens(vector<pair<string, string>>&, vector<pair<string, vector<string>>>&);
        int _write_inverted_tokens(vector<pair<string, vector<string>>>&);
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

    ofstream fout;
    fout.open("emit.out", ios::out | ios::trunc);
    fout.close();

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
    if(!s.empty()){
        res.insert(s);
    }
    return res;
}

vector<string> SimpleTextInverter::_split_to_vector(string& s, string delim){
    vector<string> res;
    
    if(delim.empty()){
        // vector<string> res;
        res.push_back(s);
        return res;
    }
    size_t pos = 0;
    string token;
    while ((pos = s.find(delim)) != string::npos) {
        token = s.substr(0, pos);
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        if(!token.empty()){
            res.push_back(token);
        }
        // std::cout << token << std::endl;
        s.erase(0, pos + delim.length());
    }
    if(!s.empty()){
        res.push_back(s);
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

void SimpleTextInverter::sort(const char *emit_filename){// = "emit.out"){
    vector<pair<string, string>> emit_tokens;
    // string emit_file(emit_filename);
    string emit_file;
    emit_file = "emit.out";

    if(d)cout<<"\n(From sort) Loading emit data.";

    /*vector<long> positions;

    ifstream fin;
    fin.open("emit.out");

    string current_file = "";
    string line;
    vector<string> linePart;
    long pos = (long)fin.tellg();
    
    if(d)cout<<"\nTEST:";
    string thing = "my:thing";
    linePart = _split_to_vector(thing, ":");
        if(d)cout<<"\n\t\t Separated: "<<linePart[0]<<" & "<<linePart[1];
        

    while(getline(fin, line)){


        linePart = _split_to_vector(line, ":");
        if(d)cout<<"\n Separated: "<<linePart[0]<<" & "<<linePart[1];
        if("" == current_file || current_file != linePart[1]){
            current_file = linePart[1];
            positions.push_back(pos);
        }
        pos = (long)fin.tellg();
    }    

    for (std::vector<long>::iterator i = positions.begin(); i != positions.end(); ++i){
        fin.seekg(*i, ios::beg);
        string l;
        getline(fin, l);
        cout<<"\nAt position, "<<*i<<" we have "<<l;
    }
*/







    if(0 != _load_emit_data(emit_file, emit_tokens)){
        cout<<"\nError: Could not load emit data from file: "<<emit_filename;
        return;
    }
    if(d)cout<<"\n(From sort) LOADED emit data. Now sorting.";
    if(0 != _sort_emit_data(emit_tokens)){
        cout<<"\nError: Could not sort emit data.";
        return;
    }
    if(d)cout<<"\n(From sort) SORTED emit data. Now writing.";
    if(0 != _write_sorted_data(emit_tokens)){
        cout<<"\nError: Could not write data to sort.out.";
        return;
    }
    if(d)cout<<"\n(From sort) WRITTEND emit data. SORT DONE.";
    
}

int SimpleTextInverter::_load_emit_data(string emit_file, vector<pair<string, string>>& emit_tokens){
    ifstream fin;
    vector<string> fileLineInput;
    string fileLine;

    if(d)cout<<"\nLoading Emit Data";
    emit_tokens.clear();
    fin.open(emit_file, ios::in);
    if(fin.is_open()){
        while(getline(fin, fileLine)){
            fileLineInput = _split_to_vector(fileLine, ":");
            emit_tokens.push_back(make_pair(fileLineInput[0], fileLineInput[1]));
        }
    }else{
        cout<<"\nError: Error while opening emit file: "<<emit_file;
    }
    if(d)cout<<"\nLoaded Emit Data";

    fin.close();
    return 0;
}

int SimpleTextInverter::_sort_emit_data(vector<pair<string, string>>& emit_tokens){
    if(d)cout<<"\nSorting Emit Data";
    std::sort(emit_tokens.begin(), emit_tokens.end(), _sort_by_first_lexico());
    if(d)cout<<"\nSorted Emit Data";
    return 0;
}


int SimpleTextInverter::_write_sorted_data(vector<pair<string, string>>& emit_tokens){
    string outfile = "sort.out";

    ofstream fout;
    fout.open(outfile, ios::out | ios::trunc);

    if(d)cout<<"\nWriting sorted data to sort.out";

    if(fout.is_open()){
        for (vector<pair<string, string>>::iterator i = emit_tokens.begin(); i != emit_tokens.end(); ++i){
            fout<<(i->first)<<":"<<(i->second)<<endl;
        }
    }else{
        cout<<"\nError: Could not open emit.out file for writing.";
        return -1;
    }

    if(d)cout<<"\nFinished writing sorted data to sort.out";
    fout.close();
    return 0;
}

void SimpleTextInverter::invert(const char *sorted_filename){// = "sort.out"){
    vector<pair<string, string>> sorted_tokens;
    // string sorted_file(sorted_filename);
    string sorted_file("sort.out");
    vector<pair<string, vector<string>>> inverted_tokens;

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
    ifstream fin;
    fin.open(sorted_file, ios::in);

    if(d)cout<<"\nLoading sorted data from sort.out";

    if(fin.is_open()){
        string fileLine;
        vector<string> fileLineInput;
        sorted_tokens.clear();
        while(getline(fin, fileLine)){
            fileLineInput = _split_to_vector(fileLine, ":");
            sorted_tokens.push_back(make_pair(fileLineInput[0], fileLineInput[1]));
        }
    }else{
        cout<<"\nError: Could not read from sorted file.";
        return -1;
    }
    
    if(d)cout<<"\nFinished loading sorted data from sort.out";
    fin.close();
    return 0;
}
int SimpleTextInverter::_invert_tokens(vector<pair<string, string>>& sorted_tokens, vector<pair<string, vector<string>>>& inverted_tokens){
    string current_token = "";
    vector<string> current_token_filelist;
    if(d)cout<<"\nInverting tokens";

    for (vector<pair<string, string>>::iterator i = sorted_tokens.begin(); i != sorted_tokens.end(); ++i){
        if("" == current_token || current_token != (i->first)){
            inverted_tokens.push_back(make_pair(current_token, current_token_filelist));
            current_token_filelist.clear();
            current_token = i->first;
        }
        current_token_filelist.push_back(i->second);
    }
    inverted_tokens.push_back(make_pair(current_token, current_token_filelist));
    if(d)cout<<"\nInverted tokens";

    return 0;
}

int SimpleTextInverter::_write_inverted_tokens(vector<pair<string, vector<string>>>& inverted_tokens){
    string outfile = "invert.out";
    ofstream fout;
    fout.open(outfile, ios::out);

    if(d)cout<<"\nWriting Inverted tokens";

    vector<string> eachFileList;
    string term;
    if(fout.is_open()){
        for (std::vector<pair<string, vector<string>>>::iterator i = inverted_tokens.begin(); i != inverted_tokens.end(); ++i){
            eachFileList = i->second;
            term = i->first;

            fout<<term<<":";
            for (std::vector<string>::iterator i = eachFileList.begin(); i != eachFileList.end(); ++i){
                fout<<*i;
                if(i != eachFileList.end()){
                    fout<<",";
                }
            }
            fout<<endl;
        }
    }else{
        cout<<"\nError: Could not open invert.out file for writing.";
        return -1;
    }
    if(d)cout<<"\nFinished writing Inverted tokens";


    fout.close();
    return 0;
}