// brute force aproach
// tc = O(N^2)
// SC = O(1)

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;
/*

// tc = O(N^2)
// SC = O(1)


int main() {

  //  vector <int> nums = {1,1,1,1,1,1,1, 2, 3, 2, 0};
    vector <int> nums = {2,3,1,1,0,6};
    int k = 5;
    int newLenth = 0;

    for(int i = 0; i < nums.size(); i++) {
        int sum = 0, lenth = 0;
        for(int j = i; j < nums.size(); j++) {
            sum = sum + nums[j];
            lenth++;
            if(sum > k) {
                break;
            }
            if(sum == k) {
                if(lenth > newLenth) {
                    newLenth = lenth;
                }
                // break;
            }
        }
    }

    cout << endl << "longest subarray size is = " << newLenth << endl;

    cout << endl;
    return 0;
}


*/



// this is only working with positive number;
int longestSub(vector <int>& nums, int target) {
    // map <long long, int> presum;
    unordered_map <long long, int> presum;
    int long long sum = 0;
    int maxlen = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
        if(sum == target) {
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - target;
        if(presum.find(rem) != presum.end()) {
            int lenth = i - presum[rem];
            maxlen = max(maxlen, lenth);
        }
        presum[sum] = i;
    }
    return maxlen;
}


int main() {

    //    vector <int> nums = {1,1,1,1,1,1,1, 2, 3, 2, 0};
    //    vector <int> nums = {2,3,1,1,0,6};
    vector <int> nums = {0,1,1,2,3,6};
    int k = 6;

    int result = longestSub(nums, k);

    cout << endl << "longest subarray size is = " << result << endl;

    cout << endl;
    return 0;
}






/*

#include <iostream>
#include <vector>
using namespace std;

int main() {

  //  vector <int> nums = {1, 2, 3, 2, 0};
 //                      0  1  2  3  4
  vector <int> nums = {1, 1,1,1,1,1, 2, 0};
    int k = 6;
    int newLenth = 0;
    for(int i = 0; i < nums.size(); i++) {
        int sum = 0, lenth = 0;
        for(int j = i; j < nums.size(); j++) {
            sum = sum + nums[j];
            lenth++;
            if(sum > k) {
                break;
            }
            if(sum == k) {
                newLenth = lenth;
                break;
            }
            if(lenth > newLenth) {
                newLenth = lenth;
            }
        }
    }

    cout << endl << "longest subarray size is = " << newLenth << endl;


    return 0;
}

*/