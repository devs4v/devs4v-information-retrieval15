#include <iostream>
#include <string>

#include "timing.h"
#include "simpletextinverter.h"


using namespace std;


int main(int argc, char *argv[]){
    
    if (argc < 2){
        cout<<"ERROR: not enough params!\n Usage: sti.o <filename>";
    }

    uint64_t starttime = GetTimeMs64();

    SimpleTextInverter sti;

    string directory_to_read(argv[1]);

    sti.emit(directory_to_read.c_str());
    sti.sort("emit.out");
    sti.invert("sort.out");
    

    uint64_t endtime = GetTimeMs64();
    cout<<"\n=================================\nExecution Time: "<<(endtime - starttime)<<" Microseconds\n=================================\n";

    return 0;
}