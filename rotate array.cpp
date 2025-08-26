#include<iostream>
using namespace std;

int main() {

    int arr[5]={-1,-2,3,-4,5};
    
    int k;
    cout << "enter k :";
    cin >> k;
    
    
    while(k > 0) {
        int temp = arr[5-1];
        int i = 5-1;
        while(i > 0) {
            arr[i] = arr[i-1];
            i--;
        }
        arr[0] = temp;
        k--;
    }
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}