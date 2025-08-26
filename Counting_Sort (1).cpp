// Counting sort 
// it is not a comparison sort 
// it is useful when only few elements are present in array and the are  dublicates of the lements are present 

// Tc = O(n + k).    k is max element in array 
// Sc = O(n)

#include<iostream>
using namespace std;

int main() {

    int arr[17] = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int max = 9;
    int hashArray[max+1];
    // hasing the array 
    for(int i = 0; i < 17; i++) {
        hashArray[arr[i]]++;
    }
    
    // updating the hash array
    for(int i = 1; i <= max; i++) {
        hashArray[i] = hashArray[i] + hashArray[i-1];
    }
    
    int newArray[17];
    // building the new array placing the element at correct position in array
    for(int i = 17-1; i >= 0; i--) {
         newArray[--hashArray[arr[i]]] = arr[i];
    }
    
    // coping the newArray to to old arr
    for(int i = 0; i < 17; i++) {
        arr[i] = newArray[i]; 
    }
    
    
    // printing the orginal sorted array
    for(auto i : arr) {
        cout << i << " ";
    }


    return 0;
}


