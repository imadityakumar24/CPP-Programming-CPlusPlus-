// left rotation of array 

#include<iostream>
using namespace std;

int main() {
    
    int Size = 11;
    //int arr[Size] = {1,2,3,4,13,10,8,17,12,5,16};
    int arr[11] = {1,2,3,4,13,10,8,17,12,5,16};
    
    int temp = arr[0];
    
    for(int i = 0; i < Size; i++) {
        arr[i] = arr[i+1];
    }    
    arr[Size-1] = temp;
    
    cout << "left rotate array is : " << endl;
    for(int i = 0; i < Size; i++) {
        cout << arr[i] << " " ;
    }
    
    return 0;
}
    