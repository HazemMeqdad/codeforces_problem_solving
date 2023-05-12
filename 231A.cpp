#include <iostream>
#include <string>
#include <vector>
using namespace std;

int can_solve(vector<vector<int>> arrs, int n) {
    int result = 0;
    for (int i = 0; i < n;i++) {
        int count = 0;
        for (int num : arrs[i]) {
            if (num == '1')
                count++;
        }
        if (count >= 2)
            result++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> arrs;
    for (int i = 0; i<n ; i++) {
        string w;
        getline(cin, w);
        arrs.push_back({w[0], w[2], w[4]});
    }
    cout << can_solve(arrs, n);
    return 0;

}
