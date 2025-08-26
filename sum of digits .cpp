// sum of digits 
#include <iostream>
using namespace std ;

int main () {
    int num, modulus, sum = 0;
    printf(" enter the number : ");
    scanf( "%d", &num );

    if( num == 0) {
        cout << "sum = 0" << endl;;
    }
    else if (num == 1) {
        cout << "sum = 1" << endl;
    }
    else {
        while( num!= 0) {
            modulus = num % 10;
            sum = sum + modulus;
            num = num / 10; // or 
           // num /= 10;
        }
        cout << "sum = " << sum;
    }

    return 0;
}