// incriminat decriment 

#include <iostream>
using namespace std;
int main() {

    int a = 10, b;
    b = ++a; // pre increment 
    cout << "b = "<< b << endl << "a = "<< a <<endl << endl;
    
    int x = 10, y;
    y = x++; // post incriminat 
    cout << "y = "<< y << endl << "x = "<< x <<endl << endl;
    
    int c = 10, d;
    d = --c; // pre decrincrement 
    cout << "d = "<< d << endl << "c = "<< c <<endl << endl;
    
    int e = 10, f;
    f = e--; // post decriminat 
    cout << "f = "<< f << endl << "e = "<< e;
    
    return 0;
    
}