// farenheit to celcius
// 1 celcius = 33.8 degree Fahrenheit

#include<iostream>
using namespace std;

int main() {

    float farenheit;
    cout << "enter the farenheit : ";
    cin >> farenheit;

    cout << farenheit << " farenheit = " << ((farenheit - 32) * 5/9) << " celcius" << endl;


    return 0;
}