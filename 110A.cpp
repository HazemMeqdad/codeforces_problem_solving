#include <iostream>
using namespace std;


int main() {
    string n;
    cin >> n;
    char luckys[2] {'7', '4'};

    int lucky = 0;
    for (char c : n) {
        if (c == '7' || c == '4')
            lucky++;
    }

    if (lucky == 4 || lucky == 7) 
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}

