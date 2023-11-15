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
        cout << "entered here" << endl;
        string argv_string(argv[1]);
        cout << argv_string << endl;
        const std::filesystem::path path_directory{argv_string};

        for (auto const& dir_entry : filesystem::directory_iterator{path_directory}) {
            cout << dir_entry.path() << '\n';
        }
    }
    
    return SUCCESS;
}