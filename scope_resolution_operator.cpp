// scope resolution operator 
// define funtion outside the class
// assigning static value 
// class memeber initializer list
// accesing global variables

#include<iostream>
using namespace std;

int a = 23;

int main()
{
    cout << "Hello World!" << endl;
    cout << a << endl; // 23
    int a = 5;
    cout << a << endl; // 5
    cout << :: a << endl; // 23 because it is global variable 
    
    return 0;
}