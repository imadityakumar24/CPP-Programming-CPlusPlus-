//Recusive code to reverse the array

#include <bits/stdc++.h>
using namespace std;

void reverseTheArr(vector <int> &arr, int left, int right) {
    if (left >= right) return;
    swap(arr[left], arr[right]);
    left++;
    right--;
    reverseTheArr(arr, left, right);
}

int main() {

    vector <int> arr = {1,2,3,4,5,6,7,8,9,10};
    for (auto i : arr) {
        cout << i << " ";
    }
    
    cout << endl << "After reversing using recursion" << endl << endl;
    
    int left = 0, right = arr.size() - 1;
    
    reverseTheArr(arr, left, right);
    
    for (auto i : arr) {
        cout << i << " ";
    }
    
    return 0;
}