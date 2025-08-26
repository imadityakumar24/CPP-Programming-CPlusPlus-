// feet into centimetre
// 1 feet = 30.48 cm

#include<iostream>
using namespace std;

int main() {

    float number;
    cout << "enter the feet : ";
    cin >> number;
     
    cout << " " << number << " feet is equal to " << (number * 30.48) << "cm";

    return 0;
}