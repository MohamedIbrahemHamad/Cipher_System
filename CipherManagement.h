
#ifndef CIPHER_SYSTEM_CIPHERMANAGEMENT_H
#define CIPHER_SYSTEM_CIPHERMANAGEMENT_H

#include<bits/stdc++.h>
#include "Caesar.h"
#include "PlayFair.h"
using namespace std ;


class CipherManagement {
private :
    Caesar  caesar ;
   PlayFair playfair ;
    int   caesar_key  ;
    string      playfair_key  ;
    string  plainText  ;
    string   cipherText ;

public :

   //setter :
   void Set_caesarkey (int k) ;
   void Set_playfairkey (string k) ;
   void  Set_plaintext (string p) ;
   void  Set_cipherText (string c ) ;


    //Getter :
    string Get_plainText () ;
    string Get_cipherText () ;


    //Operation :

     void Caesar_Encryption () ;
     void Caesar_Decryption () ;
     void Caesar_Decryption_withoutKey () ;
     void playfair_Encryption () ;
     void playfair_Decryption () ;

};


#endif //CIPHER_SYSTEM_CIPHERMANAGEMENT_H
