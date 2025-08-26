// swapping using Xor operator 
// properties of Xor 
// if we Xor the same number it will give output 0
// if we Xor a number with 0 it will give output the number 
// example 

// 10 ^ 10 = 0
// 10 ^ 0  = 10

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;
    
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl << endl;
    
    a = a ^ b;    // 10 ^ 20 
    b = a ^ b;    // 10 ^ 20 ^ 20    --> 10  so now b have 10
    a = a ^ b;    // 10 ^ 20 ^ 10    --> 20  so now a have 20  
    
    cout << "After swapping using Xor Operator" << endl <<endl;
    
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl << endl;
    
    return 0;
}