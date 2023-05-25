#include <bits/stdc++.h>
using namespace std;

map<string, int> db;

void solve() {
	string m;
	cin >> m;
	if (db.find(m) == db.end()) {
		db.insert({m, 0});
		cout << "OK" << "\n";
	}else {
		db[m]++;	
		cout << m <<  db[m] << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	while (n--)
		solve();
	return 0;
}
