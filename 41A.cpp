#include <iostream>
using namespace std;

int main() {
	string n, m;
	cin >> n >> m;

    for (int i = 0; i<n.length();i++) {
        if (n.at(i) != m.at(m.length()-1-i)){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
	return 0;
}
