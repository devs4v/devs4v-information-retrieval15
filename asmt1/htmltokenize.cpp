#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

#include <sys/stat.h>
#include <archive.h>
#include <archive_entry.h>
#include <cstdarg>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

#include <regex>
#include <iterator>
#include <map>
#include <utility>
#include <cstdint>
#include "timing.h"

using namespace std;
#define d false



static void
die(string error){
	cerr<<"\n"<<error;
	exit(1);
}

string parse_and_return_text(string);
map<string, int> tokenize(string);
vector<string> split(string s, string delim);
vector<pair<string, int>> frequency_sorted_tokens(map<string, int>);

struct _sort_by_frequency{
    inline bool operator() (const pair<string, int>& a, const pair<string, int>& b){
        return ((a.second == b.second)?(a.first < b.first):(a.second > b.second));
    }
};

struct _sort_by_lexicography{
    inline bool operator() (const pair<string, int>& a, const pair<string, int>& b){
        return ((a.first == b.first)?(a.second < b.second):(a.first < b.first));
    }
};


int main (int argc, const char * argv[]) 
{
    uint64_t starttime = GetTimeMs64();
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
    	// int num_docs = 0;
        while (archive_read_next_header(a, &entry) == ARCHIVE_OK) 
        {
            const char *currentFile = archive_entry_pathname(entry);
            char *fileContents;
            entry_size = archive_entry_size(entry); //get the size of the file
            fileContents = (char *)malloc(entry_size+1); //alloc enough for string - from my testing I see that this is how many bytes tar and ls report from command line
            archive_read_data(a, fileContents, entry_size); //read data into fileContents string for the HTML file size
            fileContents[entry_size] = '\0';
            if(d)printf("file name = %s, size = %ld\n", currentFile, entry_size);
            cout<<"\nDOCUMENT STATISTICS\n";
            cout<<currentFile<<" : "<<entry_size;
            string doc = string(fileContents);
            // printf("%s\n\n", fileContents); //this output over-reads chars from another file in this tar file
            string no_tag_doc = parse_and_return_text(doc);
            if(d)cout<<"\nDoc Starts: ==============\n";
            if(d)cout<<no_tag_doc;

            map<string, int> word_map;
            word_map = tokenize(no_tag_doc);

            cout<<"\nTERM STATISTICS\n";

            vector<pair<string, int>> sorted_tokens = frequency_sorted_tokens(word_map);
            
            long num_tokens = word_map.size();
            double tokens_c[num_tokens];


            pair<string, int> entry;
            int j = 0;
            for (vector<pair<string, int>>::iterator i = sorted_tokens.begin(); i != sorted_tokens.end(); ++i){
                ++j;
                entry = *i;
                cout<<setw(20)<<entry.first<<" : "<<setw(5)<<entry.second<<"\n";
                tokens_c[j-1] = j * ((double)entry.second / num_tokens);
            }

            double sum_c = 0.0;
            for (int i = 0; i < num_tokens; ++i){
                sum_c += tokens_c[i];
            }
            double average_c = sum_c / num_tokens;

            cout<<"\nAverage C for this doc: "<<average_c<<"\n";

            if(d)cout<<"\nDoc Ends: ==============\n";
                       
            free(fileContents); //free the C string because I malloc'd
        }
    }
    // printf("exit");
    uint64_t endtime = GetTimeMs64();
    cout<<"\n=================================\nExecution Time: "<<(endtime - starttime)<<" Microseconds\n=================================\n";
    return 0;
}

vector<pair<string, int>> frequency_sorted_tokens(map<string, int> word_map){
	vector<pair<string, int>> res;
	for (std::map<string, int>::iterator i = word_map.begin(); i != word_map.end(); ++i){
		res.push_back(make_pair(i->first, i->second));
	}
	sort(res.begin(), res.end(), _sort_by_frequency());

	return res;
}


map<string, int> tokenize(string no_tag_doc){
	map<string, int> token_map;
	vector<string> v = split(no_tag_doc, " ");
	for (vector<string>::iterator i = v.begin(); i != v.end(); ++i){
		if(d)cout<<"\""<<*i<<"\",";
		if(token_map.count(*i)>0){
			token_map[*i] += 1;
		}else{
			token_map[*i] = 1;
		}
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
	regex no_special_chars("[(\\/)|(:)|(;)|(\\)|(-)|(,)|(.)]");

	result = regex_replace(doc, no_tag_regex, blankie);
	result = regex_replace(result, no_linefeed_tabs, blankie);
	result = regex_replace(result, no_special_chars, blankie);
	return result;
}