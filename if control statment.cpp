// if control statment


#include <iostream>
using namespace std ;

int main() {

    int a;
    cout << "enter a : ";
    cin >> a;
    // other than 0 value it considered as true
    if(a)  // if we write 0 then it is out of if statement and it print out of block
    {
        cout << "inside the block" << endl;
        cout << "a = " << a << endl;
    }
    cout << "out of block " <<endl << endl;

    int b ;
    cout << "enter the b : ";
    cin >> b;

    if(b); // it terminate the condition
    {
        cout << "hello hi" << endl;
    }
    cout << "kese ho" <<endl <<endl;

    int age;
    cout << "enter age : ";
    cin >> age;

    if(age = 25)// assignment operator so 25 is assign to a
    {
        cout << "age is = " << age << endl << endl;
    }

    int value;
    cout << "enter the value : ";
    cin >> value;

    if(value == 14)// equality operator
    {
        cout << "you are great" <<endl;
    }
    cout << "you are handsome";


}