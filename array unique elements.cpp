#include<iostream>
#include <bits/stdc++.h>

#include <vector>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    // int arr[5];

    vector <int> arr = {0,0,1,1,1,2,2,3,3,4};

    /*
       int carr[arr.size()];
       int k = 0;
       for(int i = 0; i < arr.size(); i++) {
           for(int j = 0; j <= i; j++) {
               if(arr[i] != carr[j]) {
                   carr[i] = arr[i];
                   k++;
                   break;
               }
               break;
           }
       }

       cout <<"unique elements : " << k;

       */

    set <int> s;
    for(int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }
    
    int k = 0;
    for(int i : s) {
        cout << i << " ";
        k++;
        
    }
    cout << endl <<"unique elements : " << k;


    return 0;
}