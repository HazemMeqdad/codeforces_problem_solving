#include <iostream>
using namespace std;


int main () {
    string n;
    int k;
    cin >> n >> k;

    unsigned long long result = stoi(n);
    for (int i = 0; i<k ; i++) {
        if (n.at(n.length()-1) != '0') {
            result--;
            n = to_string(result);
        } else{
            n.erase(n.length()-1, n.length());
            result = stoi(n);
        }
    }
    cout << result;
    return 0;
}
