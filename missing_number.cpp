#include<iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector <int> nums = {1,2,3,4,2,3,1};
    int xr = 0;
    for(int i = 0; i < nums.size(); i++){
        xr = xr ^ nums[i]; // same no wilt give 0
    }
    cout << "missing number = " << xr << endl;
    return 0;
}