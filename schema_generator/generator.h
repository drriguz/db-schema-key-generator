#ifndef GENERATOR_H
#define GENERATOR_H

#include "md5.h"
#include <string>
#include <sstream>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

inline unsigned int random(int min, int max){
    return rand()%(max - min + 1) + min;
}

inline const string getSalt(){
    int r = random(10000, 30000);
    return std::to_string(r);
}
inline const string generateKey(string name)
{
    string salt = getSalt();
    cout << "salt:" << salt << endl;
    string encryptSource = "ax5" + name + "b52w" + salt + "vb3";
    cout << "encrypt:" << encryptSource << endl;
    string hash = MD5(encryptSource).toStr();
    cout << "md5:" << hash << endl;
    return hash.substr(0, 4) + salt + hash.substr(4);
}

#endif // GENERATOR_H
