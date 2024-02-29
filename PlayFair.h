#ifndef CIPHER_SYSTEM_PLAYFAIR_H
#define CIPHER_SYSTEM_PLAYFAIR_H
#include<bits/stdc++.h>
using namespace std ;

class PlayFair {
private :
    char keyTable[5][5] ;

public:

    void generateKeyTable(string key ) ;

    void findPosition(char keyTable[5][5], char ch, int& row, int& col) ;

    string encrypt(string plaintext) ;

    string decrypt(string ciphertext) ;

};


#endif //CIPHER_SYSTEM_PLAYFAIR_H
