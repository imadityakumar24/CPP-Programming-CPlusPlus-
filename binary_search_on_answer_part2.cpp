// binary search on answer
// applicable when you know the range of answer 
// whenever you have to find the minimum and max value and you already know the range of answera always use binary search 

// tc = o(logn)
// sc = o(1)

#include<iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

// tc = o(logn)
int sqrt(int n, int m) {
    int left = 1, right = m;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int power = pow(mid, n);
        if (power == m) return mid;
        else {
            if (power > m) 
                right = mid - 1;
            else 
                left = mid + 1;    
        }
    }
    
    return -1;
}


/*
// tc = nearly(n ^ 2)
int sqrt(int n, int m) {
    
    for (int i = 1; i <= m; i++) {
        int j = 1, sr = 1;
        while (j <= n) {
            sr = sr * i;
            j++;
        }
        if (sr == m) return i;
        if (sr > m) break;
    }
    
    return -1;
}
*/

int main() {

    int n = 2, m = 9;
   // int n = 3, m = 77;
   // int n = 4, m = 64;
    //int n = 3, m = 64;
    int ans = sqrt(n, m);
    
    cout << "Square root of value is " << ans;
    
    
    
    return 0;
}