#include <iostream>
using namespace std;


int main () {
    int n;
    cin >> n;
    int a = 0, d = 0;
    while (n--){
        char c;
        cin >> c;
        if (c == 'A')
            a++;
        else if (c == 'D') 
            d++;
    }
    if (a > d) 
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
