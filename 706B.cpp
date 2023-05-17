#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i<n;i++)
        cin >> a[i];

    sort(a, a+n);

    int q;
    cin >> q;
    for (int i = 0 ; i<q ;i++) {
        int m;
        cin >> m;

        int l = 0, r = n-1, count = 0;
        while (l <= r) {
            int mid = (l + r)/2;
            if (a[mid] <= m) {
                count = mid+1;
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        cout << count << "\n";
    }

	return 0;
}
