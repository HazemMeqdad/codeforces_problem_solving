#include <iostream>
using namespace std;

int main() {
	int lucky[12] = {4, 7, 47, 74, 744, 774, 777, 477, 447, 444, 474, 747};
	int n;
	cin >> n;
	for (int i = 0; i<12;i++) {
		if (n % lucky[i] == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
