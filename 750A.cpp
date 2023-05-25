#include <bits/stdc++.h>
using namespace std;

// he have 4 hours just
// and problems sorted with difficulty 
// His take 5*i to slove problme i
// How can use bainary search 		
int main(){
	int n, k;
	cin >> n >> k;
	int time = 240 - k;
	int r = 1;
	int temp = 0, ans = 0;
	while (r <= n) {
		if (temp < time){
			temp += r*5;
			ans++;
			r++;
		}
		if (temp > time){
			temp -= r*5;
			ans--;
			r--;
			break;
		} else if (temp == time)
			break; 
			
	}
	cout << ans;
	return 0;
}
