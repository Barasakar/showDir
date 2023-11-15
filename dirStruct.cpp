#include "dirStruct.h"
using namespace std;
void dirStruct::printContainer() {
    for(vector<string>::iterator it = this->path_container.begin(); it != this->path_container.end(); ++it) {
        cout << *it << endl;
    }
}

void dirStruct::readPath(string path) {
   
}