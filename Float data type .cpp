
// float data types 
#include <iostream>
using namespace std;
#include <iomanip>
#include <limits>
 
int main() {

    int         a = 14.7475;
    // float  b = 6.7853789; // or
    float       b = 6.7853789f; 
    double      c = 6.1234432567785;
    long double d = 2.3464848928474739292l;
    
    cout << setprecision(9) <<endl; // it means we can set how many digits are print on output screen 
    
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;
    cout << "d = " << d <<endl <<endl;

    cout << numeric_limits <float> :: digits10 <<endl; // it is used to check that how many digits print any data types  // include header files also 
    cout << numeric_limits <double> :: digits10 <<endl;
    cout << numeric_limits <long double> :: digits10 <<endl;

	return 0;
}