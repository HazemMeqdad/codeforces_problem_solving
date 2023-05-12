#include <iostream>
using namespace std;


int main () {
    string str;
    cin >> str;

    const string vowels = "aoyeui";

    for (char i : str) {
        i = tolower(i);
        if (vowels.find(i) != string::npos)
            continue;
        cout << '.' << i;
    }
    return 0;
}
