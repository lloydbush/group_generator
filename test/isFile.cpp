#include <iostream>
#include <sys/stat.h>

inline bool exists(const std::string& filename){
    struct stat buffer;
    return (stat (filename.c_str(), &buffer) == 0);
}

int main(){
    std::cout << exists("arduino_fix.sh") << std::endl;
    return 0;
}