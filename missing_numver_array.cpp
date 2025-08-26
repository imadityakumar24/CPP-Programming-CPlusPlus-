
/*

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    //int N = 8;
    vector<int> a = {1, 2,3, 5, 6,7,8};
    int N = a.size();
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}


*/








// tc = o(n)
// sc = o(1)
/*
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector <int> nums={1,2,3,4,5,7,8};
    int n = nums.size();
    int sum = (n*(n + 1)) / 2;
    cout << "sum of natural no = " << sum << endl;
    // int totals = accumulate(nums.begin(), nums.end(), 0);
    int totals  = 0;
    for (int i = 0; i < nums.size()-1; i++) {
        totals += nums[i];
    }
    cout << "total sum  = " << totals << endl;
    cout << "Mising no = " << sum - totals << endl;
    return 0;
}

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector<int> nums = {1, 2, 3, 4, 5, 7, 8};
    int max_value = *max_element(nums.begin(), nums.end());
    int sum = (max_value * (max_value + 1)) / 2;
    cout << "sum of natural no = " << sum << endl;

    // int vSum = accumulate(nums.begin(), nums.end(), 0);  // Using accumulate for simplicity we can use loop as well for thai 
    int vSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        vSum += nums[i];
    }
    
    cout << "total sum  = " << vSum << endl;
    cout << "Missing no = " << sum - vSum << endl << endl;
    
    
    
    auto xsum = [](int p, int q) {return p^q;};
    cout << xsum(1,1) << endl; 
    cout << xsum(3,1) << endl; 
    cout << xsum(5,9) << endl; 
    cout << xsum(0,0) << endl; 
    cout << xsum(9,9) << endl<<endl; 
   // cout << sum(1,1) << endl;  
    
    
   
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < nums.size(); i++) {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ nums.size();
    cout << "result =  " << xor1 ^ xor2;
    
    
    /*
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < nums.size(); i++) {
        xor1 = xor1 ^ i;
    }
    for(int i = 0; i < nums.size()-1; i++) {
        xor2 = xor2 ^ nums[i];
    }
    cout << "result =  " << xor1 ^ xor2;
    */
    
    return 0;
}


    