// merge two sorted array
// first array size is double of second array 

#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

    // vector<int>num1 ={1,2,3,0,0,0};
    // vector<int>num2 ={2,5,6};
    vector<int>num1 ={1,2,3,5,0,7,10,66};
    vector<int>num2 ={2,5,6,8};
    int m = num1.size(), n = num2.size();
    int mnum1 = *max_element(num1.begin(), num1.end());
    int mnum2 = *max_element(num2.begin(), num2.end());
    int Mmax = max(mnum1, mnum2);
    
    vector<int>hash(Mmax+1, 0);
    for(int i = 0; i < m; i++) {
        hash[num1[i]]++;
    }
    for(int i = 0; i < n; i++) {
        hash[num2[i]]++;
    }
    
    vector<int>ans;
    for(int i = 1; i < hash.size(); i++) {
        for(int j = 1; j <= hash[i]; j++) {
            ans.push_back(i);
        }
    }
    
    for(auto i : ans) {
        cout << i << " ";
    }
    
    return 0;
}