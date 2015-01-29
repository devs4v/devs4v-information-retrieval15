#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

#include <sys/stat.h>
#include <archive.h>
#include <archive_entry.h>
#include <cstdarg>
#include <cstdlib>

#include <regex>
#include <iterator>
#include <map>
using namespace std;




static void
die(string error){
	cerr<<"\n"<<error;
	exit(1);
}

string parse_and_return_text(string);
map<string, int> tokenize(string);
vector<string> split(string s, string delim);

int main (int argc, const char * argv[]) 
{
    struct archive *a;
    struct archive_entry *entry;
    int r;
    int64_t entry_size;
    a = archive_read_new();
    archive_read_support_filter_all(a);
	archive_read_support_format_all(a);
	r = archive_read_open_filename(a, argv[1], 1024);
    if (r != ARCHIVE_OK)
    {
        printf("archive not found");
    }
    else 
    {
    	int num_docs = 0;
        while (archive_read_next_header(a, &entry) == ARCHIVE_OK && num_docs++ < 1) 
        {
            const char *currentFile = archive_entry_pathname(entry);
            char *fileContents;
            entry_size = archive_entry_size(entry); //get the size of the file
            fileContents = (char *)malloc(entry_size+1); //alloc enough for string - from my testing I see that this is how many bytes tar and ls report from command line
            archive_read_data(a, fileContents, entry_size); //read data into fileContents string for the HTML file size
            fileContents[entry_size] = '\0';
            printf("file name = %s, size = %ld\n", currentFile, entry_size);
            string doc = string(fileContents);
            // printf("%s\n\n", fileContents); //this output over-reads chars from another file in this tar file
            string no_tag_doc = parse_and_return_text(doc);
            cout<<"\nDoc Starts: ==============\n";
            cout<<no_tag_doc;

            map<string, int> word_map;
            word_map = tokenize(no_tag_doc);


            cout<<"\nDoc Ends: ==============\n";
                       
            free(fileContents); //free the C string because I malloc'd
        }
    }
    printf("exit");
    return 0;
}

map<string, int> tokenize(string no_tag_doc){
	map<string, int> token_map;
	vector<string> v = split(no_tag_doc, " ");
	for (vector<string>::iterator i = v.begin(); i != v.end(); ++i){
		cout<<"\""<<*i<<"\",";
	}
	return token_map;
	
}

vector<string> split(string s, string delim){
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

string parse_and_return_text(string doc){
	string blankie = " ";
	string result;
	regex no_tag_regex("<.*>");
	regex no_linefeed_tabs("[(\\n)|(\\t)]");
	regex no_special_chars("[(\\/)|(:)|(;)|(\\)|(-)]");

	result = regex_replace(doc, no_tag_regex, blankie);
	result = regex_replace(result, no_linefeed_tabs, blankie);
	result = regex_replace(result, no_special_chars, blankie);
	return result;
}