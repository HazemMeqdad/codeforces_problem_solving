#include <iostream>
using namespace std;

int s = 0, n = 0;


int solve() {
	int out, in;
	cin >> out >> in;
	n -= out;
	n += in;
	if (n > s)
		s = n;
}

int main() {
	int n;
	cin >> n;

	while (n--) {
		solve();
	}
	
	cout << s;

	return 0;
}
