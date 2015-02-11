#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>
#include <iterator>
#include <utility>
#include <algorithm>

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


using namespace std;


class SimpleTextInverter{
    private:
        // map<string, string> _map_string_data_to_tokens(const string);
        void _parse_file_to_tokens(const string, vector<string>&);
        void _get_file_data(const string, string&);
        string _remove_escape_chars(string&);
        vector<string> _tokenize(string&);
        vector<string> _split(string&, string){
    public:
        SimpleTextInverter();
        void emit(char *);
        void sort(char *);
        void invert(char *);
        ~SimpleTextInverter();
        
};

void SimpleTextInverter::emit(string directory){
    
    ifstream fin;
    ofstream fout("emit.out", ios::out | ios::app);

    string dir, filepath;
    string data;
    DIR *dp;
    struct dirent *dirp;
    struct stat filestat;
    
    string fileContents;
    vector<string> mapped_tokens;
    string filename;
    errno = 0;
    dp = opendir( dir.c_str() );
    if(dp == NULL){
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir( dp ))){
        filepath = dir + "/" + dirp->d_name;
        filename = dirp->d_name;
        if(d)cout<<"\nreading"<<filepath;

        // If the file is a directory (or is in some way invalid) we'll skip it 
        if (stat( filepath.c_str(), &filestat )) continue;
        if (S_ISDIR( filestat.st_mode ))         continue;

        if(fout.is_open()){
            _parse_file_to_tokens(filepath, mapped_tokens);

            /* TODO write map to emit.out */
            for (std::vector<string>::iterator i = mapped_tokens.begin(); i != mapped_tokens.end(); ++i){
                fout<<*i<<":"<<filename<<endl;
            }
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

void SimpleTextInverter::_parse_file_to_tokens(const string filename, vector<string>& tokens){
    string fileData;
    _get_file_data(filename, fileData);
    string sanitized_chars = _remove_escape_chars(fileData);
    tokens = tokenize(sanitized_chars);
}

void SimpleTextInverter::_get_file_data(const string filename, string& fileContents){
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
        return -1;
    }
}


string SimpleTextInverter::_remove_escape_chars(string& str){
    string blankie = " ";
    string result;
    // regex no_tag_regex("<.*>");
    regex no_linefeed_tabs("[(\\n)|(\\t)]");
    regex no_special_chars("[(\\/)|(*)|(,)|(.)|(;)|(:)|(!)|(?)|(\')|(\")|([)|(])|(()|())]");

    // result = regex_replace(doc, no_tag_regex, blankie);
    result = regex_replace(str, no_linefeed_tabs, blankie);
    result = regex_replace(result, no_special_chars, blankie);
    return result;
}

vector<string> SimpleTextInverter::_tokenize(string& no_tag_doc){
    return split(no_tag_doc, " ");
}

vector<string> _split(string& s, string delim){
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
        if(!token.empty()){
            res.push_back(token);
        }
        // std::cout << token << std::endl;
        s.erase(0, pos + delim.length());
    }
    return res;
}