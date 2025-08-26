// reverse of a number 
#include <iostream>
using namespace std ;

int main () {

    int number, modulus;
    cout << endl << " enter the first number : ";
    cin >> number;

    while(number != 0) {
       modulus = number % 10;
       cout << modulus;
       number = number / 10;
    }

    return 0;
}