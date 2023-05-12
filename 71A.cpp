#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cin >> count;
    string result[count];
    for (int i = 0;i<count;i++) {
        string w;
        cin >> w;
        if (w.length() > 10) {
            result[i] = string{w[0]} + to_string(w.length()-2) + string{w[w.length()-1]};
        } else { 
            result[i] = w;
        }
    }
    for (string word : result) {
        cout << word << endl;
    }
    return 0;

}
