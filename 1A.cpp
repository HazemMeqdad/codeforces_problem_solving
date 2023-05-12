// Not solved
#include <iostream>
using namespace std;

int main() {
    string w;
    getline(cin, w);
    int n = w[0] - '0';
    int m = w[2] - '0';
    int a = w[4] - '0';
    
    int size = n * m;
    int re = 0;
    for (; size > 0;) {
        if (size )
        size -= a;
    }

    return 0;
}
