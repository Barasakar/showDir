#include "dirStruct.h"
using namespace std;
void dirStruct::printContainer() {
    for(vector<string>::iterator it = this->path_container.begin(); it != this->path_container.end(); ++it) {
        cout << *it << endl;
    }
}

void dirStruct::readPath(filesystem::path path) {
   string path_string = path.generic_string();
   for (auto const& dir_entry : filesystem::directory_iterator{path}) {
    string iter_string = dir_entry.path().generic_string();

    iter_string.erase(0, path_string.length() + 1);
    path_container.push_back(iter_string);
    // cout << "Line " << __LINE__ << ": "<< iter_string << endl;
   }
 }


 void dirStruct::printFormat() {
    for (int i = 0; i < path_container.size(); i++) {
        cout << "|" << "________" << path_container[i] << endl;
    }
 }