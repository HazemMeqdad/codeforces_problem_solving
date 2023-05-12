#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string math_ques;
    cin >> math_ques;
    vector<int> arr{};
    for (int i = 0; i<math_ques.size();i++) {
        if (math_ques[i] == '+') 
            continue;
        arr.push_back(math_ques[i]-'0');
    }
    sort(arr.begin(), arr.end());
    for(int i = 0;i<arr.size();i++) {
        if (i == arr.size()-1){
            cout << arr[i];
            break;
        }
        cout << arr[i] << '+';
    }
    return 0;
}
