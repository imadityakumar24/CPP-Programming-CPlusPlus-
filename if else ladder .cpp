// if else ladder
// used to test multiple classes
// it is also know as multiple decision making statement
// with the help of if else ladder we can write multiple conditions
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter the marks : ";
    cin >> marks;

    if(marks > 90) {
        cout << "A grade" << endl;
        cout << "keep it up" << endl;
    }
    else if(marks > 80) {
        cout << "B grade" << endl;
        cout << "keep it up" << endl;
    }
    else if(marks > 70) {
        cout << "c grade" <<endl;
        cout << "keep it up" <<endl;
    }
    else if(marks > 60) {
        cout << "d grade" << endl;
        cout << "keep it up" << endl;
    }
    else {
        cout << "E grade marks" << endl;
        cout << "work hard" << endl;
    }

    cout << "best of luck";

    return 0;

}