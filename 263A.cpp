#include <iostream>
using namespace std;

int main() {
    int size = 5 * 5;
    int arr[5][5];

    int index = 0;
    int i_arr = 0;

    int one_pos, one_arr; 

    for (int i = 0; i<size; i++) {
        if (index == 5) {
            i_arr++;
            index = 0;
        }
        cin >> arr[i_arr][index];
        if (arr[i_arr][index] == 1) {
            one_pos = index;
            one_arr = i_arr;
        }
        index++;
    }

    int moves_count = 0;

    while (arr[2][2] != 1) {
        if (one_arr > 2){
            one_arr--; 
            moves_count++;
        } else if (one_arr < 2) {
            one_arr++; 
            moves_count++;
        }

        if (one_pos > 2){
            one_pos--; 
            moves_count++;
        } else if (one_pos < 2) {
            one_pos++; 
            moves_count++;
        }
        arr[one_arr][one_pos] = 1;
    }
    cout << moves_count;
    return 0;
}
