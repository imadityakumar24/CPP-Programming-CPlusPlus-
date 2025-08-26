// ternary operator
// it required 3 operand 
// syntax 

// expression 1 ? expression 2 : expression 3;

// if we want to use ternary operator so expression 1 must be a condition 

#include <iostream>
using namespace std ;

int main() {

    int a = 10, b = 15, c;
    c = (a < b)? a: b;
    cout << c << endl;
    
    c = (a > b)? a: b;
    cout << c;

/*
    int a ;
    a = (cout << "aditya" , 5);
    cout << a;
*/    
    
    return 0;
    
}