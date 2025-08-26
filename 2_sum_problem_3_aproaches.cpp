/*

using set ds

tc = O(n * nlogn) // nlogn for find()
sc = O(n)


using 2 pointer and sort funtion 

tc = O(n * nlogn) // nlogn for sort
sc = O(1)


using 2 loops

tc = O(n^2)
sc = O(1)


*/



#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

void printResult(vector <int> &arr, int s, int t) {
    unordered_set <int> set;
    for(int i = 0; i < arr.size(); i++) {
        int needMore = t - arr[i];
        auto it = set.find(needMore);
        if(it != set.end()) {
            cout << "Yess pair is exist" << endl;
            cout << arr[i] << " " << *it;
            return;
        }
        /* for print yes or no
        if(set.find(needMore) != set.end()) {
            cout << "Yess pair is exist";
            return;
        }
        */
        set.insert(arr[i]);
    }
    cout << "No pair is exist";
}

int main() {
    //  vector<int> nums = {4,3,9,0,2,1};
    vector<int> nums = { 1,2,0,7,2,3 };
    int target = 9;
    int size = nums.size();
    
    cout <<"Using set data structure " << endl;
    printResult(nums, size, target);
    
    cout  << endl <<"Using Sort funtion and 2 pointer" << endl;
    
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size() - 1;
    while(i < j) {
        int sum = nums[i] + nums[j];
        if(sum == target) {
            cout << "Yes pair exist " << nums[i] << " + " << nums[j] << " = " << target;
            break;
        }
        else if(sum > target) {
            j--;
        }    
        else {
            i++;    
        }    
    }
    



    return 0;
}


/*

int main() {
    vector<int> nums = {4,3,9,0,2,1};
    unordered_map<int, int> frequency;

    for(int i = 0; i < nums.size(); ++i) {
        frequency[nums[i]]++;
    }
    
    int target = 6;
    for(int i = 0; i < nums.size(); i++) {
        int value = nums[i];
        int moreneed = target - value;
        if(frequency.find(moreneed) != frequency.end()) {
           // cout << "yess" << endl;
           cout << frequency[value] << "  " << i;
            break;
        }
        frequency[value] = i;
    }



    return 0;
}

*/

/*

Element 2 occurs 3 times.
Element 4 occurs 2 times.
Element 6 occurs 1 time.
Element 5 occurs 1 time.
Element 1 occurs 1 time.

*/

