// reference variable 


#include <iostream>
using namespace std ;

int main(){

    int x = 234;
    int & y = x; // y reference variable which is pointing to x
    int z = y;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
    
}