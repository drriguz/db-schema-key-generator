#include "generator.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout << "DbSchema Key Generator" << endl
         << "Usage: keygen <username>" << endl;
    srand((unsigned)time(NULL));
    if(argc < 2)
        return 0;
    std::string key = generateKey(argv[1]);
    cout << "Key:" << endl;
    cout << key.c_str() << endl;
    return 1;
}
