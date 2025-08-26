// merge to sorted array 


#include<iostream>
using namespace std;

int main() {
    int arr1[5] = {5,7,9,12,23};
    int arr2[5] = {25,37,49,52,63};
    int newArray[10];
    
    for(int i = 0; i < 10; i++) {
        if(i < 5) {
            newArray[i] = arr1[i]; // from 0-4 first array to new array
        }
        else {
            newArray[i] = arr2[i-5]; // [i-5] // due to this it stated from 0 index because it is second array and second array element is starting from 0
        }
    }
    
    for(int i = 0; i < 10; i++) {
        cout << "newArray element =  " << newArray[i] << endl;
    }
    


    return 0;
}    