#include <iostream>
using namespace std;

int main() {
    int n;
    string stones;
    cin >> n;
    cin >> stones;

    int moves = 0;
    for (int i = 1; i < n;i++) {
        int pos = i-moves;
        if (stones[pos] == stones[pos-1]) {
            moves++;
            stones.erase(pos-1, 1);
        }
    }
    cout << moves;
    return 0;
}
