// if else control statment


#include <iostream>
using namespace std ;

int main() {

    int age;
    cout << "enter age : ";
    cin >> age;
    
    if (age > 20 && age < 30)
        cout << "age = " << age << endl;
    else {
        cout << "age is samll" << endl;
        cout << "jenny is best" << endl;
    }    
    cout << "jenny lecture is best";
    
    return 0;

}