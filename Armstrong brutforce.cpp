// Armstrong number

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalnum,value, counter = 0;
    cout << "enter 3 digit number : ";
    cin >> number;
    originalnum = number;
    value = number;

    // 153, 370,371,407,  this are Armstrong number

    while (number != 0) {
        int modulus = number % 10;
        counter ++;
        number = number / 10;
    }
    cout << "number of digits are : " << counter << endl;
    cout << "power is = " <<counter << endl;

    int lastnum = originalnum % 10;
    cout << "lastnum = " << lastnum << endl;
    int cubelast = pow(lastnum, counter);
    cout << "power of " <<lastnum <<" is "<<cubelast << endl;

    originalnum = originalnum / 10;
    int secondnum = originalnum %10;
    cout << "second num = " << secondnum << endl;
    int cubesecond = pow(secondnum, counter);
    cout << "power of " <<secondnum <<" is = "<<cubesecond << endl;

    originalnum = originalnum / 10;
    int firstnum = originalnum % 10;
    cout << "first num = " << firstnum << endl;
    int cubefirst = pow(firstnum, counter);
    cout << "power of " <<firstnum <<" is = "<<cubefirst << endl;

    int result = cubefirst + cubesecond + cubelast;
    cout << "addition of number is = "<<result << endl;

    if (result == value) {
        cout << "given number is Armstrong number" << endl;
    }
    else {
        cout << "not an Armstrong number" << endl;
    }

    return 0;
}
