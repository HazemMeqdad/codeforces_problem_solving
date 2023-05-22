#include <iostream>
using namespace std;


int main(){
	int n;
	cin >> n;
	while (n--){
		int m;
		cin >> m;
		if (m == 1) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	
	return 0;
}
