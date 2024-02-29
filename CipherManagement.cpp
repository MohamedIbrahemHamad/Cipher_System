#include<bits/stdc++.h>
using namespace std ;
#include "CipherManagement.h"
#include "Caesar.h"
#include "PlayFair.h"

// Setter

void CipherManagement::Set_caesarkey(int k) {
    caesar_key = k ;
}

void CipherManagement::Set_playfairkey (string k) {
    playfair_key = k ;
}

void CipherManagement::Set_plaintext(string p) {
    plainText = p ;
}

void CipherManagement::Set_cipherText(string c) {
    cipherText = c ;
}

// Getter
string CipherManagement::Get_plainText() {
    return plainText ;
}

string CipherManagement::Get_cipherText() {
    return cipherText ;
}


// operation


void CipherManagement::Caesar_Encryption() {
    cipherText = caesar.Encryption(plainText , caesar_key );

}
void CipherManagement::Caesar_Decryption() {
    plainText = caesar.Decryption(cipherText , caesar_key );
}

void CipherManagement::Caesar_Decryption_withoutKey() {
 caesar.Decryption_Without_Key(cipherText ) ;
// print All (25) possible cases
}

void CipherManagement::playfair_Encryption() {
    playfair.generateKeyTable(playfair_key) ;
    cipherText= playfair.encrypt(plainText) ;
}

void CipherManagement::playfair_Decryption() {
    playfair.generateKeyTable(playfair_key) ;
    plainText= playfair.decrypt(cipherText) ;
}


