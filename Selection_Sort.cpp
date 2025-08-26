// selection sort pich tha samalest element and place it in first position
// tc = O(n^2)
// sc = O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> nums = {5,3,7,2,1};
    int min = 0;
    
    for(int i = 0; i < nums.size()-1; i++) {
       // min = nums[i];
       min = i;
        for(int j = i; j < nums.size(); j++) {
            if(nums[j] < nums[min]) {
                min = j;
            }
        }
        swap(nums[min], nums[i]);
    
    }
    
    for(auto value : nums) {
        cout << value << " ";
    }
    
    return 0;
}