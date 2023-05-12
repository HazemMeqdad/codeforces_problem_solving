#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    auto width = n/a;
    if (n % a != 0)
        width++;
    auto hight = m/a;
    if (m % a != 0)
        hight++;
    cout << width*hight;
    return 0;
}
