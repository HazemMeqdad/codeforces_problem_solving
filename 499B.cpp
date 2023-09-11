#include <iostream>
#include <map>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	string result = "";
	map<string, string> words;
	
	for (int i = 0; i<m; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			words[s2] = s1;
		else if (s2.size() < s1.size())
			words[s1] = s2;
		else
			words[s2] = s1;
	}

	for (int i = 0; i<n; i++) {
		string w;
		cin >> w;
		if (words.find(w) != words.end())
			cout << words[w] << " ";
		else 
			cout << w << " ";
	}
	return 0;
}
