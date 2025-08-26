// swaping_using_pointer 

#include <iostream>
using namespace std;


int main() {

    int a = 10, b = 80 , temp = 0;
    int *p , *q;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    p = &a;
    q = &b;
    
    temp = *p;
    *p = *q;
    *q = temp;
    
    

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}