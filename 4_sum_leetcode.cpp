// 4 sum problem
// i != j != k != l  == target 
// find the pairs which are equal to target and the indexes should be zero


/*

// brute force solution
// tc = nearly O(n ^ 4)
// sc = O(no pairs)
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { 1, 0, -1, 0, -2, 2};
    int n = arr.size();
    int target = 0;
    set <vector<int>> result;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                for (int l = k+1; l < n; l++) {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target) {
                        vector<int> temp = { arr[i], arr[j], arr[k], arr[l] };
                        sort(temp.begin(), temp.end());
                        result.insert(temp);
                    }
                }
            } 
        }
    }

    // printing the unique triplets 
    for (auto it : result) {
       cout << "[";
       for(auto i : it) {
        cout << i << " ";
       }
       cout << "]" << " ";
    }
  
    return 0;
}

*/


// better solution
// tc = nearly O(n ^ 3 + logn for searching)
// sc = O(no pairs)
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { 1, 0, -1, 0, -2, 2};
    int n = arr.size();
    int target = 0;
    set <vector<int>> result;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            set <int> hashSet;
            for (int k = j+1; k < n; k++) {
                int needMore = target-(arr[i] + arr[j] + arr[k]);
                if (hashSet.find(needMore) != hashSet.end()) {
                    vector <int> temp = { arr[i], arr[j], arr[k], needMore };
                    sort(temp.begin(), temp.end());
                    result.insert(temp);
                }
                else {
                    hashSet.insert(arr[k]);
                }
            } 
        }
    }

    // printing the unique triplets 
    for (auto it : result) {
       cout << "[";
       for(auto i : it) {
        cout << i << " ";
       }
       cout << "]" << " ";
    }
  
    return 0;
}