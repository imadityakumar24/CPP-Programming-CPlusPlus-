// switch control statment


#include <iostream>
using namespace std ;

int main() {

    int a;
    cout << "enter a : ";
    cin >> a;

    switch (a) {
    case 1:
        cout << "hi handsome";
        break;
    case 4:
        cout << "love coding";
        break;
    default:
        cout << "do hard work";   
    }

    return 0;

}