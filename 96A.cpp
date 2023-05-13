#include <iostream>
using namespace std;


int main () {
    string w; 
    cin >> w;

    int o = 0, t = 0;
    int l_o = 0, l_t = 0;
    

    for (char c : w) {
        if (c == '0') {
            o++;
            if (o > l_o)
                l_o = o;
            t=0;
        } else if (c == '1') {
            t++;
            if (t > l_t) 
                l_t = t;
            o = 0;
        }
    }
    if (l_t >= 7 or l_o >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
