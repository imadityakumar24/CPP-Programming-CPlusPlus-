/*

// insertion sort
// not optimized  code because if our array is already sorted , still our loops are iterating 
// time complexity = O(n^2)  // average and worst  case  
// best case = o(n)       // when our array will already sorted
// select the minimun and put it in the first position 



#include <bits/stdc++.h>
using namespace std;

int main() {

    
    int size = 0;
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];  
    for(int i = 0; i < size; i++) {
        cout << "Enter the array element : ";
        cin >> array[i];
    }

    for(int i = 0; i < size; i++) {
        int temp = array[i];
        int j = i-1;
        while(j >= 0 && array[j] >  temp) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
        cout << "hello" << endl;         // for under standing 
    }
        
    
    cout  << endl << "Sorted array is : ";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

*/


// insertion sort
// not optimized  code because if our array is already sorted , still our loops are iterating 
// time complexity = O(n^2)  // average and worst  case  
// best case = o(n)       // when our array will already sorted
// select the minimun and put it in the first position 



#include <bits/stdc++.h>
using namespace std;

int main() {

    
    int size = 0;
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];  
    for(int i = 0; i < size; i++) {
        cout << "Enter the array element : ";
        cin >> array[i];
    }
    
    cout << endl << "using temp variable method" << endl;
    for(int i = 0; i < size; i++) {
        int temp = array[i];
        int j = i-1;
        
        while(j >= 0 && array[j] >  temp) {
            array[j+1] = array[j];
            j--;
        }
        

        array[j+1] = temp;
    }
        
    
    cout  << "Sorted array is : ";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    cout  << endl;
    
    vector<int> nums ={14,9,15,12,6,8,13};
    cout << "using swaping second method " << endl;
    for(int i = 0; i < nums.size()-1; i++) {
        int j = i;
        while(j > 0) {
            if(nums[j-1] > nums[j]) {
                swap(nums[j-1], nums[j]);
               // j--;
            }
            j--;
        }
        
    }
    
    cout << "Sorted array is : ";
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}