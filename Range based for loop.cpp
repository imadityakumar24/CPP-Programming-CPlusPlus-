// Range based for loop 

#include<iostream>
using namespace std;

int main() {

    int arr[] = {6,8,9,2};
    
    for (int b : {6, 8,9,2})
        cout <<b;
 
    /*
        
     int arr[] = {6,8,9,2};
     //    for (int j : arr){  // or
     for (auto j : arr){
         cout << j <<endl;
     }
     
    */
     
    return 0;
}