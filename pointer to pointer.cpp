// pointer to pointer 

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << "a = " << a << endl;
    cout << "a = " << *p << endl;
    cout << "a = " << *(*q) << endl; 
    
    int ***r;
    r = &q;
    cout << "r = " << ***r << endl;
    cout << "r = " << *(*(*r)) << endl;
    cout << "Addres of r = " << &r << endl; 

    
    
    
    return 0;
}