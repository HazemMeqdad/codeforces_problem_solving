#include <iostream>
using namespace std;


int main () {
    string w;
    cin >> w;
    
    int uppers = 0;
    int lowers = 0;

    for (char c : w) {
        if (islower(c)) {
            lowers++;
        } else {
            uppers++;
        }
    }

    if (lowers == uppers) {
        for (char a : w) {
            cout << (char)tolower(a);
        }
    } else if (lowers > uppers) {
        for (char a : w) {
            cout << (char)tolower(a);
        }
    } else {
        for (char a : w) {
            cout << (char)toupper(a);
        }
    }

    return 0;
}

