// minutes element in array 
// tc = 
// sc = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function for Binary Search
int binarySearch(const vector<int>& arr) {

    int left = 0, right = arr.size() - 1;
    int minElement = INT_MAX; 
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow
        if(arr[left] <= arr[mid]) {
            minElement = min(minElement, arr[left]);
            left = mid + 1;
        }
        else {
       // if(arr[mid] <= arr[right]) {
            minElement = min(minElement, arr[mid]);
            right = mid - 1;
        }
 
    }

    return minElement; 
}

int main() {
    //vector<int> arr = {0,1,2,4,5,6,7}; // Sorted array
    //vector<int> arr = {4,5,6,7,10,111,42};
    vector<int> arr = {6,7,10,1,2,4,5};

    int result = binarySearch(arr);

    cout << "minimum element in the array = " << result;

    return 0;
}
    