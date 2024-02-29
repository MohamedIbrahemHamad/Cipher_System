
#include "Caesar.h"
#include <bits/stdc++.h>
using namespace std;

string Caesar::Encryption(string &p, int k) {

    int size_plain = p.size();
    for (int i = 0; i < size_plain; i++) {
        if (p[i] == ' ') {
            continue;
        }

        if (islower(p[i])) {
            p[i]=( (p[i] + k - 97) % 26 + 97);
        }

        else {
            p[i] = ((p[i] + k - 65) % 26 + 65);
        }

    }
    return p;

}

string Caesar::Decryption(string &c, int k) {
    int size_plain = c.size();
    for (int i = 0; i < size_plain; i++) {
        if (c[i] == ' ') {
            continue;
        }

        if (islower(c[i])) {
            c[i] = ((c[i] - k - 97 + 26) % 26 + 97);
        }

        else {
            c[i] = ((c[i] - k - 65 + 26) % 26 + 65);
        }
    }
    return c;
}


void Caesar::Decryption_Without_Key(string c) {

    string  text = c;
    for (int j=1 ;j<26 ; j++)
    {
        int size_plain = c.size();
        for (int i = 0; i < size_plain; i++) {
            if (c[i] == ' ') {
                continue;
            }

            if (islower(c[i])) {
                c[i] = ((c[i] - j - 97 + 26) % 26 + 97);
            }

            else {
                c[i] = ((c[i] - j - 65 + 26) % 26 + 65);
            }
        }
        cout <<"when key=" << j << " :" << c << endl;
        c = text;

    }
}