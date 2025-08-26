#include<iostream>
using namespace std;

int main(){
    /*
    int arr[23];
   // cin >> arr[1] >> arr[4];
   cout << " value = " <<arr[56] << endl;
    */
    /*
    int arr[4] = {1,3,5,5};
    cout << "" <<arr[3] << endl;
    */
    
    int arr[4];
    /*
    cout << "enter value : " ;
    cin >> arr[0];
    cout << "enter value : " ;
    cin >> arr[1];
    cout << "enter value : " ;
    cin >> arr[2];
    cout << "enter value : " ;
    cin >> arr[3];
    */
    
    for (int i = 0; i < 4; i++){
        cout << "enter value : " ;
        cin >> arr[i];
    }
    
   for (int i = 0; i < 4; i++){
        cout << "value is : " <<arr[i];
        cout << endl ;
        
    } 
    
    
    return 0;
}