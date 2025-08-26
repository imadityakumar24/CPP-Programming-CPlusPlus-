//  3 sum problem           using 3 methods


/*

// brute aproach using 3 loops 
// i + j + k == 0      and all three elements should be unique
// tc = O(n^3)
// sc = O(n)


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr) {
    set<vector<int>> st;

    // check all possible triplets:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());     // it helps to store unique pairs in the set if i don't use it in set dublicate values may by inserted 
                    st.insert(temp);
                }
            }
        }
    }

    //store the set elements in the answer:
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}


int main() {
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}

*/

/*

// second aproach using need more element and hashset
// tc = nearly O(n ^ 2 and logn for set)
// sc = nearly  O( n ) + o(no of unique triplets)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();

    set <vector<int>> result;

    for (int i = 0; i < n-1; i++) {
        set <int> hashSet;
        for (int j = i+1; j < n; j++) {
            int needMore =-(arr[i] + arr[j]);   // third element for triplet 
            if (hashSet.find(needMore) != hashSet.end()) {
                vector <int> temp = { arr[i], arr[j], needMore };
                sort(temp.begin(), temp.end());
                result.insert(temp);
            }
            else {
                hashSet.insert(arr[j]);
            }
        }
    }

    // printing the unique triplets 
    for (auto it : result) {
       cout << "[";
       for(auto i : it) {
        cout << i << " ";
       }
       cout << "]";
    }
      
    
    return 0;
}

*/

// third aproach using 3 pointer 
// tc = O(N ^ 2 + nlogn  for sorting ) 
// sc = O(no of triplets )
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector <vector<int>> result;

    for (int i = 0; i < n; i++) {
        int j = i+1;
        int k = n-1;
        if(i != 0 && arr[i] == arr[i - 1]) continue;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = { arr[i], arr[j], arr[k] };
                result.push_back(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j-1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }

    

    // printing the unique triplets 
    for (auto it : result) {
       cout << "[";
       for(auto i : it) {
        cout << i << " ";
       }
       cout << "]";
    }
      
    
    return 0;
}