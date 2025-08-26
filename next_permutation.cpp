// written by Vivek 
//next permutation 

//Input: arr = [2, 4, 1, 7, 5, 0]
//Output: [2, 4, 5, 0, 1, 7]
// myOutput: 2 4 5 1 7 0

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextpermutation(vector<int> &arr){
    int n = arr.size();
    int* pivot = nullptr;
    int* gpivot = nullptr;
    
    for(int i = n-1; i > 0; i--){
        if(arr[i] > arr[i-1]){
            pivot = &arr[i-1];
            break;
        }
    }
    if(pivot == nullptr){
        reverse(arr.begin(), arr.end());
        return;
    }
    for(int i = n-1; i >= 0; i--){
       if(arr[i] > *pivot){
           gpivot = &arr[i];
           break;
       }
    }
    swap(*pivot, *gpivot);
    //cout << "*pivot: "<< *(pivot+1) << endl;
    reverse(pivot+1, &arr[n]);
}

int main() {

    vector<int> arr = {3,2,1};
    // vector<int> arr = {1,3,6};
    nextpermutation(arr);
    
    
    for(int value:arr){
        cout << value << " ";
    }
    
    return 0;
}