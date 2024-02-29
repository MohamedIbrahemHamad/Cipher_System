#include<bits/stdc++.h>
using namespace std ;
#include "PlayFair.h"

void PlayFair::generateKeyTable(string key) {
    bool used[26] = {false};

    int i = 0, j = 0;
    for (char& c : key) {
        if (!isalpha(c))
            continue;

        if (c == 'J')
            c = 'I';

        if (!used[toupper(c) - 'A']) {
            keyTable[i][j] = toupper(c);
            j++;
            used[toupper(c) - 'A'] = true;
            if (j == 5) {
                j = 0;
                i++;
            }
        }
    }

    char start = 'A';
    for (int k = 0; k < 26; k++) {
        if (start == 'J')
            start++;

        if (used[start - 'A'] == 0) {
            keyTable[i][j] = start;
            j++;
            if (j == 5) {
                j = 0;
                i++;
            }
        }
        start++;
    }

}

void PlayFair::findPosition(char keyTable[5][5], char ch, int& row, int& col) {
    if (ch == 'J')
        ch = 'I';

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (keyTable[i][j] == ch) {
                row = i;
                col = j;
                return;
            }
        }
    }
}

string PlayFair::encrypt(string plaintext) {
    string ciphertext = "";

    for (char& c : plaintext) {
        if (isalpha(c))
            c = toupper(c);
    }


    for (int i = 0; i < plaintext.length(); i += 2) {
        if (plaintext[i] == plaintext[i + 1]) {
            plaintext.insert(i + 1, "X");
        }
    }


    if (plaintext.length() % 2 != 0) {
        plaintext += "X";
    }

    for (int i = 0; i < plaintext.length(); i += 2)
    {
        int row1, col1, row2, col2;
        findPosition(keyTable, plaintext[i], row1, col1);
        findPosition(keyTable, plaintext[i + 1], row2, col2);

        if (row1 == row2) {
            ciphertext += keyTable[row1][(col1 + 1) % 5];
            ciphertext += keyTable[row2][(col2 + 1) % 5];
        } else if (col1 == col2) {
            ciphertext += keyTable[(row1 + 1) % 5][col1];
            ciphertext += keyTable[(row2 + 1) % 5][col2];
        } else {
            ciphertext += keyTable[row1][col2];
            ciphertext += keyTable[row2][col1];
        }
    }

    return ciphertext;
}

string PlayFair::decrypt(string ciphertext) {
    string plaintext = "";


    for (char& c : ciphertext) {
        if (isalpha(c))
            c = toupper(c);
    }

    for (int i = 0; i < ciphertext.length(); i += 2) {
        int row1, col1, row2, col2;
        findPosition(keyTable, ciphertext[i], row1, col1);
        findPosition(keyTable, ciphertext[i + 1], row2, col2);

        if (row1 == row2) {
            plaintext += keyTable[row1][(col1 + 4) % 5];
            plaintext += keyTable[row2][(col2 + 4) % 5];
        } else if (col1 == col2) {
            plaintext += keyTable[(row1 + 4) % 5][col1];
            plaintext += keyTable[(row2 + 4) % 5][col2];
        } else {
            plaintext += keyTable[row1][col2];
            plaintext += keyTable[row2][col1];
        }
    }

    return plaintext;
}



