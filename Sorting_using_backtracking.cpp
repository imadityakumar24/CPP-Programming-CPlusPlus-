// sorting using backtracking 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i]) return false;
    }
    return true;
}

bool backtrack(vector<int>& arr, int idx) {
    if (idx == arr.size()) {
        return isSorted(arr); // Check if the permutation is sorted
    }

    for (int i = idx; i < arr.size(); i++) {
        swap(arr[i], arr[idx]);
        if (backtrack(arr, idx + 1)) return true; // Stop when sorted permutation is found
        swap(arr[i], arr[idx]); // backtrack
    }

    return false;
}

int main() {
    // vector<int> arr = {3, 1, 2};
    vector<int> arr = {3, 7, 21, 1, 6, 4, 2, 10};
    cout << "UnSorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl << endl;

    backtrack(arr, 0);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
