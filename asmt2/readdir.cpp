#include <fstream>
#include <iostream>
#include <string>

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

int main()
  {
  ifstream fin;
  string dir, filepath;
  int num;
  DIR *dp;
  struct dirent *dirp;
  struct stat filestat;

  cout << "dir to get files of: " << flush;
  getline( cin, dir );  // gets everything the user ENTERs

  dp = opendir( dir.c_str() );
  if (dp == NULL)
    {
    cout << "Error(" << errno << ") opening " << dir << endl;
    return errno;
    }

  while ((dirp = readdir( dp )))
    {
    filepath = dir + "/" + dirp->d_name;

    // If the file is a directory (or is in some way invalid) we'll skip it 
    if (stat( filepath.c_str(), &filestat )) continue;
    if (S_ISDIR( filestat.st_mode ))         continue;

    // Endeavor to read a single number from the file and display it
    fin.open( filepath.c_str() );
    if (fin >> num)
      cout << filepath << ": " << num << endl;
    fin.close();
    }

  closedir( dp );

  return 0;
  }