
#ifndef CIPHER_SYSTEM_CAESAR_H
#define CIPHER_SYSTEM_CAESAR_H
#include <bits/stdc++.h>
using namespace std;

class Caesar {

public:
    string Encryption(string &p, int k) ;

    string Decryption(string &c, int k) ;

    void Decryption_Without_Key(string c ) ;


};


#endif //CIPHER_SYSTEM_CAESAR_H
