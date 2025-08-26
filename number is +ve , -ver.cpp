// number is positive or negative

#include <iostream>
using namespace std ;

int main() {

    float number;
    cout << "enter number : ";
    cin >> number;

    if (number > 0 || number == 0) {
        cout << "number is postive" << endl;
    }
    else {
        cout << "number is negative" << endl;
    }

    return 0;
}