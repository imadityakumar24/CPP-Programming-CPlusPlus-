// Counting sort 
// it is not a comparison sort 
// it is useful when only few elements are present in array and the are  dublicates of the lements are present 


// tc = O(n + k + n + n). = O(3n + k)  = O(n + k)
// Tc = O(n + k).    k is max element in array 
// Sc = O(n)

#include<iostream>
using namespace std;

int main() {

    int arr[17] = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int max = 9;
    int count[max+1];
    // hasing the array counting the frequency 
    for(int i = 0; i < 17; i++) {
        count[arr[i]]++;
    }
    
    // updating the hash array
    for(int i = 1; i <= max; i++) {
        count[i] = count[i] + count[i-1];
    }
    
    int dublicate[17];
    // building the dublicate array placing the element at correct position in dublicate array
    for(int i = 17-1; i >= 0; i--) {
         dublicate[--count[arr[i]]] = arr[i];
    }
    
    // assigning the dublicate array elements to old arr array
    for(int i = 0; i < 17; i++) {
        arr[i] = dublicate[i]; 
    }
     
    // printing the orginal sorted array
    cout << "Sorted Array using counting sort" << endl;
    for(auto i : arr) {
        cout << i << " ";
    }


    return 0;
}


