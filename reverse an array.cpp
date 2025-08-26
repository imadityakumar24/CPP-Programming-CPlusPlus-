// program to reverse an array 

// with the help of swaping I'm reversing the array 

#include<iostream>
using namespace std;

int main() {
    const int size = 5; // if I don't used const then size is not assigned to array because size is a keyword 
    int divide = 0, temp = 0;
    int arr1[size] = {5,7,9,12,23};
    
    divide = size / 2;
    for(int i = 0; i < divide; i++) {
        temp = arr1[i];
        arr1[i] = arr1[size-1-i];
        arr1[size-1-i] = temp;
    }
    
    cout << "reverse of array is " << endl;
    for(int i = 0; i < size; i++) {
        cout << " " << arr1[i];
    }

    return 0;
}    