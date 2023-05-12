#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    int arr[105]{};
    cin >> n;
    cin >> k;
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    int re = 0;
    for (int n : arr) {
        if (n >= arr[k-1] && n != 0)  
            re++;
    }
    cout << re;
    return 0;
}
