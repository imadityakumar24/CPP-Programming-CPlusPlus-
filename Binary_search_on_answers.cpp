// binary search on answer
// applicable when you know the range of answer 
// whenever you have to find the minimum and max value and you already know the range of answera always use binary search 

// tc = o(logn)
// sc = o(1)

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

// both functions are working same 

/*
int sqrt(int value) {
    int low = 1, high = value;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long int sr = mid * mid;
        if (sr == value) {
            return mid;
        }
        
        if(sr > value) 
            high = mid - 1;
        else 
            low = mid + 1;    
    }
    return high;
}
*/

int sqrt(int value) {
    int low = 1, high = value, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if((mid * mid) < value) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // you can return ans or high both are contained same answers 
  //  return ans; 
    return high;
}

int main() {

    //int value = 64;
   // int value = 6;
    int value = 28;
   // int value = 99;
    int ans = sqrt(value);
    
    cout << "Square root of value is " << ans;
    
    
    
    return 0;
}