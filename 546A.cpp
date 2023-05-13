#include <iostream>
using namespace std;


int main() {
    int k, w;
    long long n;
    cin >> k >> w >> n;

    long long cost = 0;

    for (int i = 1 ; i<= n; i++) {
        cost += k*i;
    }
    if ((cost - w) <= 0 ) {
        cout << 0;
        return 0;
    }
    cout << cost - w;

    return 0;
}
