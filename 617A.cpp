#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long path;
    cin >> path;

    int steps = path/5;
    if (path % 5 != 0) {
        steps++;
    }
    cout << steps;
    return 0;
}
