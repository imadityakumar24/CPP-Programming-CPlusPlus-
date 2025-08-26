// array

#include<iostream>
using namespace std;

int main() {

    int row , column;
    /*
    int arr[2][3] = {6,8,46,9,5,1};
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    */
    cout << "enter the number of row : " ;
    cin >> row;
    cout << "enter the number of columns : " ;
    cin >> column;
    
    cout << endl;
    
    int arr[row][column];
    
    // input array element from user
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter the array element : " ;
            cin >> arr[i][j];
        }
    }
    
    cout << endl;
    
    // for printing matrix elements 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}