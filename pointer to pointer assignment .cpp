// pointer assignment
// pointer to pointer assignment 

#include<iostream>
using namespace std;

int main() {

    int a = 10, b = 20;
    int *p , *q;
    p = &a;
    // q = p;
    q  = &b;
    
    cout << "a = " << *p << endl;
    cout << "b = " << *q << endl;
    
    *q = *p;
    cout << "a = " << *p << endl;
    cout << "b = " << *q << endl;
    
    
    return 0;
}