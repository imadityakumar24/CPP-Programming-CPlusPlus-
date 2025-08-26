#include<bits/stdc++.h>
using namespace std;


// tc = O(n^2)
// sc = O(1)

int main() {
    
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  //  int arr[] = {1};
   // int arr[] = {5,4,-1, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum, maxSum = 0;
    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);  // count every time to check for the max sum
        }
      //   maxSum = max(maxSum, sum);    // this give the wrong output 
    }
    
    cout << "maximum sum of subarray = " << maxSum;
    
    
    
    return 0;
}