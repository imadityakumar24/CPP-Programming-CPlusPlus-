// pointer 

#include<iostream>
using namespace std;

int main() {

    int a = 10, b = 20;
    int *ptr;
    ptr = &a;
    int *qtr;
    qtr = &b;
    
    cout << "a = " << a << endl;
    cout << "addres of a is " << &a << endl;
    cout << "value of a using pointer : " << ptr << endl;
    cout << "value of a using pointer is : " << *ptr << endl;
    cout << "addres ilof pointer : " << ptr << endl;

/*
    cout << "Hello World!" << endl;
    int a = 56;
    int* ptr;
    ptr = &a;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    
    char s = 'g';
    int *ptr1;
    ptr1 = &s;
*/    
    return 0;
}