#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!" << endl;
    int number;
    cout << "enter number : ";
    cin >> number;
    
    if (number % number == 0 && number % 2 == 1)
        cout << "prime number" << endl;
    else 
        cout << "not prime number" << endl;
    
    /*
    if (number % number == 0 && number % 2 == 1)
        cout << "  " <<number " is prime number" << endl;
    else 
        cout << "  " <<number " not a prime number" << endl;    
    
    */
    return 0;
}