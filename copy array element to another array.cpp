// copy one array element to another array


#include<iostream>
using namespace std;

int main() {

    int arr1[5] = {2,4,9,8,6};
    int arr2[5], i, j;
    
    
    
    for (i = 0, j = 0; i < 5, j < 5; i++ , j++) {
        arr2[j] = arr1[i];
    }
    
    for (j = 0; j < 5; j++) {
        cout << "arr2 elemts is = " << arr2[j]  << endl;
    }
    
    return 0;
}
    