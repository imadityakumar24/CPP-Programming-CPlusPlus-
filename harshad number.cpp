// harshad number

#include<iostream>
using namespace std;

int main() {

    int number, modulus, sum = 0;
    cout << "enter the number : ";
    cin >> number;
    int reference = number;

    while (number != 0) {
        modulus = number % 10;
        cout << modulus << endl;
        sum = sum + modulus ;
        number = number / 10;
    }
    cout << "sum of digits = " << sum  << endl;

    if (reference % sum == 0) // reference is number
        cout << "harshed number";
    else
        cout << "not harshad number" << endl;

    return 0;
}