// ones compliment 

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1 ,3, 0 ,0, 1};
    
    for(int j = 0; j < 5; j++) {
        cout << arr[j];
    }
    
    cout << endl;
    
    for (int i = 0; i < 5; i++){
    
        if(arr[i] == 1 || arr[i] == 0 )
            cout << !(arr[i]);
        else 
            cout << arr[i];
        
    }
    
    return 0;
}



/*

#include<iostream>
using namespace std;

int main(){
    
    int number , originalnum, remainder; 
    cout << "enter postive number : ";
    cin >> number;
    originalnum = number;
    
    while (number != 0) {
    
        remainder = number % 10;
        cout << remainder;
        number = number / 10;
        
    }
    
    cout <<endl;
    
    /*
    
    while (  != 0) {
    
        int last = remainder % 10;
        if (last == 0){
            cout << (!last);
        }
        else {
            cout << last;
        }
        
         =  / 10;
        
    }
    
    */
    
    /*
    
    return 0;
}

*/