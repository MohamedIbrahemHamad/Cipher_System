#include<bits/stdc++.h>
#include "CipherManagement.h"
using namespace std ;

int main() {

    CipherManagement controller ;
    cout<< "Welcome to our Cipher system,You can encrypt and decrypt using the Caesar and Playfair methods "<<endl ;
    while (true) {
        cout << "*************************************************************************************************" <<endl ;
        cout << "Please chose mode : " <<endl ;
        cout << "Enter (1) to use Caesar method , (2) to use Playfair method and (3) to Exit the system . " << endl;
        cout << "__________________________________________________________________________________________________" << endl;
        int mode; cin >> mode;
        cout << "__________________________________________________________________________________________________" << endl;
        switch (mode) {

            case 1 : {
                cout <<"Welcome in Caesar , What do you want to do ?  "<<endl ;
                cout << "1) Encryption"<<endl ;
                cout << "2) Decryption"<<endl ;
                cout << "3) Return to previous step "<<endl ;
                cout << "__________________________________________________________________________________________________" << endl;
                  int m ;  cin >> m ;

                  // 1) Encryption
                  if (m == 1 ){
                      string p ; int k ;

                      cout << "Enter plaintext : " ;
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
                      getline(cin , p) ; // get all line even spaces as plaintext

                      cout << "Enter integer Key between (1) and (25) inclusive  : " ;   cin >> k ;

                      while(true) {
                          if (k < 26) {
                              controller.Set_plaintext(p);
                              controller.Set_caesarkey(k);
                              controller.Caesar_Encryption();
                              cout << "ciphertext is :  " << controller.Get_cipherText() << endl;
                              break ;
                          }
                          else
                              cout<< "sorry your key is invalid,please Enter integer Key between (1) and (25) inclusive : "; cin >> k ;
                      }//while

                  } // Encryption (if)

                  // 2) Decryption
                  else if (m == 2) {
                      cout << "How you will do Decryption ? " <<endl ;
                      cout << "__________________________________________________________________________________________________" << endl;
                      cout << "1) Known Key "<<endl ;
                      cout << "2) Unknown Key "<<endl ;
                      cout << "__________________________________________________________________________________________________" << endl;
                      int km ; cin >> km ;

                       // with key
                      if(km == 1 ) {
                          string c ; int k ;

                          cout << "Enter Ciphertext : " ;
                          cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
                          getline(cin , c) ; // get all line even spaces as Ciphertext

                          cout << "Enter integer Key between (1) and (25) inclusive  : " ; cin >> k ;

                          while(true) {
                              if (k < 26) {
                                  controller.Set_caesarkey(k);
                                  controller.Set_cipherText(c);
                                  controller.Caesar_Decryption();
                                  cout << "plaintext is :  " << controller.Get_plainText() << endl;
                                  break ;
                              }
                              else cout<< "sorry your key is invalid,please Enter integer Key between (1) and (25) inclusive : "; cin >> k ;

                          }// while

                      }// with key (if)



                      // without key
                      else if (km == 2 ) {
                          string c ;

                          cout << "Enter Ciphertext : " ;
                          cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer
                          getline(cin , c) ; // get all line even spaces as Ciphertext

                          controller.Set_cipherText(c) ;
                          cout << "These are all possible Keys (25) : "<< endl ;
                          controller.Caesar_Decryption_withoutKey() ;

                      }

                      else
                          cout << "sorry your input is invalid, please try again ! " ;
                  }


                   //3) Return to previous step
                   else if (m == 3) {}


                   // other inputs
                   else
                     cout << "sorry your input is invalid, please try again ! " ;


             } // case 1

                break;


            case 2 : {
                cout <<"Welcome in PlayFair , What do you want to do ?  "<<endl ;
                cout << "1) Encryption"<<endl ;
                cout << "2) Decryption"<<endl ;
                cout << "3) Return to previous step "<<endl ;
                cout << "__________________________________________________________________________________________________" << endl;
                int m ;  cin >> m ;
                // 1) Encryption
                if (m == 1 ){
                    string p , k ;
                    cout << "Enter plaintext : " ; cin >> p ;
                    cout << "Enter Key : " ; cin >> k ;
                    controller.Set_playfairkey(k) ;
                    controller.Set_plaintext(p) ;
                    controller.playfair_Encryption() ;
                    cout << "ciphertext is :  " <<controller.Get_cipherText()<< endl  ;
                }

                // 2) Decryption
                else if (m == 2) {
                    string c , k ;
                    cout << "Enter ciphertext : " ; cin >> c ;
                    cout << "Enter Key : " ; cin >> k ;
                    controller.Set_playfairkey(k) ;
                    controller.Set_cipherText(c) ;
                    controller.playfair_Decryption() ;
                    cout << "plaintext is :  " <<controller.Get_plainText()<< endl  ;

                }

                //3) Return to previous step
                else if (m == 3) {}

                // other inputs
                else
                    cout << "sorry your input is invalid, please try again ! " ;


            }// case 2

                break;


            case 3 : {

                cout << "Thank you for using !"<<endl;
                return 0;
            }



            default: {
                cout << "sorry your input is invalid, please try again ! " << endl;
                cout << "__________________________________________________________________________________________________"<< endl;
            }

        } //switch

    }//while

    }//main




