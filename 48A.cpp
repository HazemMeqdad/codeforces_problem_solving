#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main (){
	string m;
	cin >> m;
	string k = "hello";
	int index = 0, count=0;
	for (size_t i = 0;i<m.size();i++) {
		if (m[i] == k[index]) {
			index++;
			count++;
			if (count == 5){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
