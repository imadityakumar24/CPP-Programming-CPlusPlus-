// power of number

#include <iostream>
using namespace std;

int main() {

    int Base = 0, Exponent = 0, Power = 1;
    cout << "Enter the Base : ";
    cin >> Base;
    cout << "Enter the Exponent : ";
    cin >> Exponent;
    
    int i = 0;
    while ( i != Exponent) {
        Power = Power * Base;
        i++;
    }
    cout << "Power is = " << Power << endl;

/* // this is for exceptional case 
    int i = 0;
    while ((i == 0 && Base == 0 && Exponent == 0) || i != Exponent) {
        if (Base == 0 && Exponent == 0) {
            cout << "This is Undefined" << endl;
            cout << "exceptional case" << endl; //exceptional case
            break;
        }
        Power = Power * Base;
        i++;
    }
    cout << "Power is = " << Power << endl;
*/    
    
/*  
    if (Base == 0 && Exponent == 0) {
        cout << " This is Undefined" << endl;
    }
    else if (Exponent == 0 ) {
        cout << "Power of number : 1" << endl;
    }
    else if(Base == 0 ) {
        cout << "Power of number : 0" << endl;
    }
*/
    return 0;
}