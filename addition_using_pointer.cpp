// addition_using_pointer 

#include <iostream>
using namespace std;


int main() {

    int a = 10, b = 80 , sum = 0;
    int *p , *q;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    p = &a;
    q = &b;
    
    sum = *p + *q;
    
    cout << "sum  = " << *p + *q << endl;
    cout << "sum = " << sum << endl;

    return 0;
}