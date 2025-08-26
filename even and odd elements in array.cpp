// even and odd elements in array

#include <iostream>
#include <queue>

using namespace std;

int main() {


    int column; // size of 1-d array
    cout << "enter the no of column : " ;
    cin >> column;

    cout << endl;// for leave the 1 line

    int arr[column]; // array size declaration // variable length arrays
    for(int i = 0; i < column; i++) { // array element input from user
        cout << "enter the value of index " << i << " = " ;
        cin >> arr[i];
    }

    cout << endl; // for leave the 1 line

    int even_value = 0, odd_value = 0; // counting even and odd values
    for(int i = 0; i < column; i++) {
        if(arr[i] % 2 == 0)
            even_value++;
        else
            odd_value++;
    }
    cout << "there are " << even_value << " even elements present in array" << endl;
    cout << "there are " << odd_value << " odd elements present in array" << endl;


    return 0;
}