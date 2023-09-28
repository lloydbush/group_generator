#include <iostream>
using namespace std;

int main(){
    int num=0;
    int& refNum=num;
    refNum=10;
    std::cout << num << "," << refNum << endl;
    return 0;
}