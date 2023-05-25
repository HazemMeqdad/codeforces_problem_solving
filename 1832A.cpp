#include <bits/stdc++.h>
using namespace std;

// I don't understand this problem
// https://www.youtube.com/watch?v=n5xboe9Sp9o&ab_channel=BinaryMagic
void solve() {
	string m;
	cin >> m;
	if (m.size() % 2) 
		m.erase(m.begin() + m.size() / 2);
	if (m != string(m.size(), m[0]))
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}


int main() {
	int n;
	cin >> n;
	while (n--)
		solve();
	
	return 0;
}
