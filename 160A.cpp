#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	for (int i = 0;i<n;i++) {
		int m;
		cin >> m;
		v[i] = m;
		sum += m;
	}
	sort(v.begin(), v.end());
	int s = 0, cnt = 0;
	for (int i = n-1;i>=0;i--) {
		if (s > sum/2) break;
		cnt++;
		s += v[i];
	}
	cout << cnt;
	return 0;
}
