#include <iostream>
#include <string.h>
#include <vector>
#include <filesystem>

class dirStruct {
    public:
    std::vector<std::string> path_container;
    
    void printContainer();
    void readPath(std::filesystem::path path);
    void printFormat();
    private:

};