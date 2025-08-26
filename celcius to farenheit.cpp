// celcius into farenheit
// 1 celcius = 33.8 degree Fahrenheit 

#include<iostream>
using namespace std;

int main() {

    float number;
    cout << "enter the celcius : ";
    cin >> number;
    
    cout << number << " celcius = " << ((number * 9/5) + 32) << " farenheit";
     
    
    return 0;
}