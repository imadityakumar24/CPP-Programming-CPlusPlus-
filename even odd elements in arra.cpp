// program to put even odd elements in two array



#include<iostream>
using namespace std;

int main() {
    
    int arr[11] = {1,2,3,4,13,10,8,17,12,5,16};
    int evenArray[6], oddArray[5];
    
    for(int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    
    int evencount = 0, oddcount = 0;
    for(int i = 0; i < 11; i++) {
        if(arr[i] % 2 == 0){
            evenArray[evencount] = arr[i];
            evencount++;
        }
        else {
            oddArray[oddcount] = arr[i];
            oddcount++;
        }
    }
    
    
    cout << endl <<evencount << endl << oddcount;
    cout << endl << endl;
    
    
    for (int i = 0; i < evencount; i++) {
        cout << evenArray[i] << " ";
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < oddcount; i++) {
        cout << oddArray[i] << " ";
    }
    
    
    return 0;
}
    