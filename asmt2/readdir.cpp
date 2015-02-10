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

#include "timing.h"

using namespace std;


class SimpleTextInverter{
    private:
        string data;
        string parse_file_to_tokens();
        string removeEscapeChars();
        void tokenize();
        void split();
    public:
        SimpleTextInverter();
        void get_file_data(const string, string&);
        // void load_data(string data);
        // void print_data();
        void emit(char *, const string outFile);
        void sort(char *, const string outFile);
        void invert(char *, const string outFile);
        ~SimpleTextInverter();
        
};

void SimpleTextInverter::load_data(string data){
    this.data = data;
}
void SimpleTextInverter::print_data(){
    for(int i=0; i<50; i++){
        cout<<data[i];
    }
    cout<<"\n";
}

void SimpleTextInverter::get_file_data(const string filename, string& fileContents){
    errno = 0;
    ifstream in(filename.c_str(), std::ios::in | std::ios::binary);
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
void SimpleTextInverter::parse_file_to_tokens(){
    string res = removeEscapeChars();
    map<string> m = tokenize();

}

void SimpleTextInverter::removeEscapeChars(){
    string blankie = " ";
    string result;
    // regex no_tag_regex("<.*>");
    regex no_linefeed_tabs("[(\\n)|(\\t)]");
    regex no_special_chars("[(\\/)|(*)|(,)|(.)|(;)|(:)|(!)|(?)|(\\’)|(\\\")|([)|(])|(\\()|(\\))]");

    // result = regex_replace(doc, no_tag_regex, blankie);
    result = regex_replace(result, no_linefeed_tabs, blankie);
    result = regex_replace(result, no_special_chars, blankie);
    return result;
}

int main(){
    ifstream fin;
    string dir, filepath;
    string data;
    DIR *dp;
    struct dirent *dirp;
    struct stat filestat;
    string fileContents;
    SimpleTextInverter sti;

    cout << "dir to get files of: " << flush;
    getline( cin, dir );  // gets everything the user ENTERs

    errno = 0;
    dp = opendir( dir.c_str() );
    if(dp == NULL){
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir( dp ))){
        filepath = dir + "/" + dirp->d_name;
        if(d)cout<<"\nreading"<<filepath;

        // If the file is a directory (or is in some way invalid) we'll skip it 
        if (stat( filepath.c_str(), &filestat )) continue
        if (S_ISDIR( filestat.st_mode ))         continue;

        // Endeavor to read a single number from the file and display it
        if (read_file_data(filepath, fileContents) != 0){
            cout << "Error(" << errno << ") opening " << dir << endl;
            return errno;
        }
        sti.load_data(fileContents);
        free(fileContents);
    }

    closedir( dp );

    return 0;
}