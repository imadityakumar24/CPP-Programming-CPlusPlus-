#include <bits/stdc++.h>
using namespace std;

/*

// brute force aproach
// tc = O(n^2)
// sc =O(1)

int main() {

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum, maxSum  = 0;

    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = i; j < n; j++) {
            sum = sum + arr[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout << "\n" << "Maximum sum of subarraay = " << maxSum << endl << endl;

    return 0;
}

*/

// optimized aproach  kadans algorithm
// tc = O(n)
// sc = O(1)


int main() {

    // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int curuntSum = 0, maxSum = INT_MIN;        // In C++, INT_MIN is a constant defined in the <climits> header (or <limits.h>) that represents the minimum value that an int (integer) type can hold. It is typically used to set a lower boundary for integer values in algorithms and is platform-dependent, but commonly equals -2^31 (i.e., -2147483648) on most systems where int is a 32-bit data type.

    for(int i = 0; i < n; i++) {
        curuntSum += arr[i];
        maxSum = max(maxSum, curuntSum);
        if(curuntSum < 0) {
            curuntSum = 0;
        }
    }

    cout << "\n" << "Maximum sum of subarraay = " << maxSum << endl << endl;

    return 0;
}