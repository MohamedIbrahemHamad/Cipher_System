#ifndef CIPHER_SYSTEM_PLAYFAIR_H
#define CIPHER_SYSTEM_PLAYFAIR_H
#include<bits/stdc++.h>
using namespace std ;

class PlayFair {
private :
    char keyTable[5][5] ;

    void findPosition( char ch, int& row, int& col) ;

public:

    void generateKeyTable(string key ) ;

    string encrypt(string plaintext) ;

    string decrypt(string ciphertext) ;

};


#endif //CIPHER_SYSTEM_PLAYFAIR_H
