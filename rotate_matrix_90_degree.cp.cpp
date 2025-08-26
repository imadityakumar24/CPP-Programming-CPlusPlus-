// LEETCODE PROBLEM
// rotate the matrix 90 degree
//tc = O(N*N) + O(N*N).One O(N*N) is for transposing the matrix and the other is for reversing the matrix.
// sc = O(1)

#include<bits/stdc++.h>

using namespace std;
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    
/*   //transposing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
*/

    // above and this code is working same only the logic is little bit different 
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    
    
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, 
            {4, 5, 6},     
            {7, 8, 9}};
            
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

    