#include <bits/stdc++.h>
using namespace std;


void solve() {
	string m;
	cin >> m;
	size_t ans = m.size();
	int cnt = 0;
	for (size_t i = 0;i<m.size()/2;i++) {
		if (m[i] != m[ans-i+1]) {
			if (cnt < 1) {
				ans--;
			} 
			cnt++;
		}
	}
	
	if (ans == m.size() || cnt > 1)
		cout << -1 << "\n";
	else
		cout << ans << "\n";
}

int main (){
	int n;
	cin >> n;
	while (n--)
		solve();
	return 0;
}