#include <iostream>
#include <string>
using namespace std;


int main () {
    string f, s;
    cin >> f >> s;
    for (int i = 0;i<f.size();i++) {
        if (tolower(f[i]) != tolower(s[i])) {
            if (tolower(f[i]) > tolower(s[i])){
                cout << "1";
                return 0;
            }
            else {
                cout << "-1";
                return 0;
            }
        }
    }
    cout << "0";
    return 0;
}
