#include<iostream>
using namespace std;

int main(){
    
    int number , originalnum;
    cout << "enter postive number : ";
    cin >> number;
    originalnum = number;
    
    if (number % 2 == 0){
        int minus = number - 2;
        cout << "  " <<minus <<" + 2 = " << originalnum<< endl;
    }
    else {
        int subtract = number - 3;
        cout << "  " <<subtract <<" + 3 = " << subtract<< endl;
    }
    
    return 0;
}