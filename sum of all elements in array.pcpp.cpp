// sum of all elements in array

#include <iostream>
#include <queue>

using namespace std;

int main() {


    int column; // size of 1-d array
    cout << "enter the no of column : " ;
    cin >> column;
    
    cout << endl;// for leave the 1 line
    
    int arr[column]; // array size declaration 
    for(int i = 0; i < column; i++) { // array element input from user 
        cout << "enter the value of index " << i << " = " ;
        cin >> arr[i];
    }
    
    cout << endl; // for leave the 1 line
    
    int total = 0; // storing sum of all elements 
    for(int i = 0; i < column; i++) {
        total = total + arr[i];
    }
    cout << "sum of all elements value is = " << total;
    

    return 0;
}