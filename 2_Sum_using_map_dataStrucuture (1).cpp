#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Map to store the index of the numbers

    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        int needMore = target - num;
        if (numMap.find(needMore) != numMap.end()) {
              return {numMap[needMore], i};
        }

        // If not found, insert the current number with its index into the map
        numMap[num]  = i;
    }

    // Return an empty vector if no solution is found
    return {};
}

int main() {
    vector<int> nums = {1,2,0,7,2,3};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl << endl;
    } else {
        cout << "No two sum solution found." << endl << endl;
    }
    
    
    
    vector<int> array = {1,2,0,7,2,3};
    int tar = 29;
    vector<int> results = twoSum(array, tar);
    if (!results.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl << endl;
    } else {
        cout << "No two sum solution found." << endl << endl;
    }
    
    
    

    return 0;
}


/*

Sure! Let's walk through how the code works on each iteration using a sample input. Suppose we have:

nums = {2, 7, 11, 15}
target = 9
The goal is to find two numbers in nums that add up to 9. Let's break down how the code achieves this:

Initial Setup
We create an empty unordered_map<int, int> numMap to store the numbers from nums as keys and their indices as values.
Iteration 1: i = 0
Current number (nums[i]): 2
Complement: target - nums[i] = 9 - 2 = 7
Check the map: We check if 7 exists in numMap. It doesn't because numMap is currently empty.
Insert into map: We add 2 to numMap with its index 0:
cpp
Copy code
numMap[2] = 0;
The numMap now looks like this: {2: 0}.
Iteration 2: i = 1
Current number (nums[i]): 7
Complement: target - nums[i] = 9 - 7 = 2
Check the map: We check if 2 exists in numMap. It does (from the first iteration).
Return the indices: Since 2 is in the map and corresponds to index 0, we return the pair of indices [0, 1].
At this point, the function has found the solution and returns {0, 1}. The two numbers at these indices, 2 and 7, sum up to 9, which is the target.

Iteration 3 & 4: (Skipped)
Since the solution is found in the second iteration, the loop exits early, and the code does not proceed to further iterations.
General Working of Each Iteration
For each iteration in the loop:

Calculate the Complement: The code calculates the complement (target - nums[i]).
Check if Complement Exists in the Map: It checks if this complement is already stored in the map.
If the complement exists, it means the current number (nums[i]) and the complement together sum up to the target. The function then returns the indices.
If the complement does not exist, the current number and its index are added to the map for future reference.
Move to the Next Element: The loop proceeds to the next element in the nums vector.
How the Map Helps:
The map allows for O(1) average-time complexity lookups, making it efficient to check if a complement has already been encountered.
By storing indices, the map directly links each number to its position in the array, enabling quick identification of the correct index pair when a match is found.
This approach ensures that the problem is solved in O(n) time, where n is the length of the nums array.

*/
