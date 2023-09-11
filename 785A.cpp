#include <iostream>
#include <map>
using namespace std;

map<string, int> v{
	{"Tetrahedron", 4},
	{"Cube", 6},
	{"Octahedron", 8},
	{"Dodecahedron", 12},
	{"Icosahedron", 20}
};

int main() {
	int c, result = 0;
	cin >> c;
	for (int i = 0; i<c; i++) {
		string m;
		cin >> m;
		result += v[m];
	};
	cout << result;
	return 0;
}
