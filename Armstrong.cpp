#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // store the number of digits in n
    for (originalNum; originalNum != 0; originalNum /= 10) {
        ++n;
    }

    originalNum = num;

    // check if the number is Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (int(result) == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
