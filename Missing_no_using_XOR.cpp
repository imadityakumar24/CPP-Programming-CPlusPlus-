/*


#include<iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    vector <int> nums= {1,2,3,4,3,2,1};
    int xr1 = 0, xr2 = 0;
    for(int i = 0; i < nums.size(); i++) {
        xr2 = xr2 ^ nums[i];
        xr1 = xr1 ^ (i+1);
    }
    xr1 = xr1 ^ nums.size();
    // cout << "result =  " << xr1 ^ xr2;

    int result = xr1 ^ xr2;
    cout << "missing no = " << result << endl;


    return 0;
}


*/





#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    // This vector should represent numbers from 1 to n with one missing number
    vector<int> nums = {1, 2, 3, 5, 6, 7, 8}; // missing 4
    int xr1 = 0, xr2 = 0;
    int n = nums.size() + 1;

    // XOR all the elements in nums
    for (int i = 0; i < nums.size(); i++) {
        xr2 = xr2 ^ nums[i];
    }

    // XOR all the numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xr1 = xr1 ^ i;
    }

    // The missing number is the XOR of xr1 and xr2
    int result = xr1 ^ xr2;
    cout << "missing no = " << result << endl;

    return 0;
}
