#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
    cout << "Fixed size Sliding window" << endl;
    //int arr[] = {4,1,4,20,5,7};
    vector <int> arr = {4,1,4,20,5,7};
    int n = arr.size();
    int windowSize = 3;
    int maxSum = 0;
    for(int i = 0; i < n-windowSize+1; i++) {
        int sum = 0;
        for(int j = i; j < windowSize+i; j++) {
            sum = sum + arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    
    cout << "maximum sum = " << maxSum << endl;
    
    return 0;
}