#include <iostream>
#include <algorithm>
using namespace std;

string remove_sames(string username) {
    string re;
    for (int i = 0 ; i < username.size(); i++) {
        if (re.find(username[i]) != string::npos) 
            continue;
        re.push_back(username[i]);
    }
    return re;
}

int main() {
    string name;
    cin >> name;
    if (remove_sames(name).size() % 2 == 0) 
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
