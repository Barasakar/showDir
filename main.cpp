#include "dirStruct.h"

#define SUCCESS 0

using namespace std;

void usage(char * argv[]) {
    cout << "usage:\t" << argv[0] << " " << "/path/to/your/folder" << endl;
}


int main(int argc, char * argv[]) {
    dirStruct reader;
    if (argc - 1 <= 0) {
        usage(argv);
    } else {
        string argv_string(argv[1]);
        //cout << argv_string << endl;
        const std::filesystem::path path_directory{argv_string};
        cout << path_directory.generic_string() << endl;
        reader.readPath(path_directory);
        reader.printFormat();
    }
    
    return SUCCESS;
}