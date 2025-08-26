// rearange the array
// tc = O(n)
// sc = O(n)


#include<bits/stdc++.h>
using namespace std;

int main() {

    vector <int> array = {3, 1, -2, -5, 2, -4};
    int n = array.size();
    vector<int> result(n, 0);
    
    int positive = 0; int negative = 1;
    for(int i = 0; i < n; i++) {
        if(array[i] < 0) {
            result[negative] = array[i];
            negative += 2;
        }
        else {
            result[positive] = array[i];
            positive += 2;
        }
    }
    
    for(auto v : result) {
        cout << v << " ";
    }
    
    
    cout << endl << "Rearranging the array" << endl;
    
    return 0;
} 