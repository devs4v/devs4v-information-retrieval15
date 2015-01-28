#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

#include <sys/stat.h>
#include <archive.h>
#include <archive_entry.h>
#include <cstdarg>
#include <cstdlib>

using namespace std;


static void
die(string error){
	cerr<<"\n"<<error;
	exit(1);
}

int
main(int argc, char **argv)
{
	string this_filename = "readtar";
	if (argc < 2){
		die("Insufficient Params!\nUsage: " + this_filename + " <tarball>");
	}

	char buff[8192];
	string document;
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
	while (archive_read_next_header(ina, &entry) == ARCHIVE_OK) {
	  printf("%s\n",archive_entry_pathname(entry));
	  
	  if (archive_entry_size(entry) > 0) {
			len = archive_read_data(ina, buff, sizeof(buff));
			while (len > 0) {
				document += buff;
				cout<<buff;


				// if (archive_write_data(outa, buff, len) != len)
				// 	die("Error writing output archive");
				len = archive_read_data(ina, buff, sizeof(buff));
			}
			if (len < 0)
				die("Error reading input archive");
		}


	}
	r = archive_read_free(ina);  // Note 3
	if (r != ARCHIVE_OK)
  exit(1);


	return (0);
}