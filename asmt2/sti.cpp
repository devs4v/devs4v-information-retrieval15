#include <iostream>
#include <string>

#include "timing.h"
#include "simpletextinverter.h"


using namespace std;


int main(int argc, char * argv[]){
    
    if (argc < 2){
        cout<<"ERROR: not enough params!\n Usage: sti.o <filename>";
    }

    SimpleTextInverter sti;

    // cout << "dir to get files of: " << flush;
    // getline( cin, dir );  // gets everything the user ENTERs

    sti.emit(argv[1]);
    

    return 0;
}