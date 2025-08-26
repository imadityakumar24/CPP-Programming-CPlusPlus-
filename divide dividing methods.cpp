// divide in c++

#include <iostream>
#include <string>
using namespace std;

int main() {

    int  dividend, divisor, remainder;
    cout << "Enter the dividend : ";
    cin >> dividend;
    cout << "Enter the divisor : ";
    cin >> divisor;
    
    
    
    // double quotient = static_cast<double>(dividend / divisor);// The expression dividend / divisor is performed as integer division first, and then the result is cast to a double. To get a floating-point division, you should cast at least one of the operands to double before the division. You can modify the line like this:
    double quotient = static_cast<double>(dividend) / divisor;
    cout << "Quotient : " << quotient << endl;
    remainder = dividend % divisor;
    cout << "Remainder : " << remainder << endl;
    
    float a = 5.7, b = 6.4 , c = 0; 
    c = a*b;
    cout << c << endl;
    
    
    return 0;
}