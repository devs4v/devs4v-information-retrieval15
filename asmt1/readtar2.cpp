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

using namespace std;




static void
die(string error){
	cerr<<"\n"<<error;
	exit(1);
}

string parse_and_return_text(string);

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
        while (archive_read_next_header(a, &entry) == ARCHIVE_OK && num_docs++ < 20) 
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
            cout<<"\nDoc Ends: ==============\n";
                       
            free(fileContents); //free the C string because I malloc'd
        }
    }
    printf("exit");
    return 0;
}


string parse_and_return_text(string doc){
	string blankie = "";
	regex no_tag_regex("<.*>");

	// string result;
	// result = regex_replace(doc, no_tag_regex, blankie);
	// regex_replace(back_inserter(result), doc.begin(), doc.end(), no_tag_regex, blankie);
	return regex_replace(doc, no_tag_regex, blankie);
}


int
some(int argc, char **argv)
{
	string this_filename = "readtar";
	if (argc < 2){
		die("Insufficient Params!\nUsage: " + this_filename + " <tarball>");
	}

	char buff[8192];
	// string document;
	int64_t entry_size;
	ssize_t len;
	int r;
	mode_t m;
	struct archive *ina;
	struct archive *outa;
	struct archive_entry *entry;

	ina = archive_read_new();
	archive_read_support_filter_all(ina);
	archive_read_support_format_all(ina);
	r = archive_read_open_filename(ina, argv[1], 8192); // Note 1
	if (r != ARCHIVE_OK)
	  exit(1);


	int document_count = 0;
	int num_docs = 0;
	char *document;
	while (archive_read_next_header(ina, &entry) == ARCHIVE_OK && num_docs++ < 20) {
	  printf("%s\n",archive_entry_pathname(entry));
	  cout<<"entry_size is: "<<entry_size;
	  		
	  if (entry_size = archive_entry_size(entry) > 0) {
	  		// cout<<"entry_size is: "<<entry_size;
	  		// char *document;
	  		document = (char *)malloc(entry_size+1);
	  		// document = "Document #" + document_count++;
			len = archive_read_data(ina, document, entry_size);
			document[entry_size] = '\0';
			cout<<document<<"\n";
			if (len < 0)
				die("Error reading input archive");
			free(document);
		}


	}
	r = archive_read_free(ina);  // Note 3
	if (r != ARCHIVE_OK)
  exit(1);


	return (0);
}