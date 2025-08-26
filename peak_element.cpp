// peak element in array. means peak element should is greater the neibour elements 
// tc = nearly O(n)
// sc = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function for Binary Search
int binarySearch(const vector<int>& arr) {

    int ans = -1;
    int n = arr.size();

    if(n == 1) return 0;
    if(n == 2) {
        if(arr[0] < arr[1])
            return 0;
        else
            return 1;
    }

    for(int i = 0; i < n; i++) {
        if (i == 0 && arr[0] > arr[i+1]) {
            ans = 0;
            break;
        }
        else if (i == n && arr[n-1] > arr[n-2]) {
            ans = n-1;
            break;
        }
        else {
            if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {
                ans = i;
                break;
            }
        }

    }

    return ans;
}

int main() {

//  vector<int> arr = {1,1,1,3,5,6,4};
// vector<int> arr = {1,2,3,1};
    vector<int> arr = {1,2,3,3,4,5,6,8};

    int result = binarySearch(arr);

    cout << "Peak element in the array = " << result;

    return 0;
}
