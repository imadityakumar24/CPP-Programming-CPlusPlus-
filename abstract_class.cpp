// a class conating a pure virtual funtion so we cant crreate the object of that classs / and this class called abtract classs
// if we want to use the parent class to child class bananan jaruri hai bahut 
// after making child class, with the help of child class we can use the parent class members
// in java we have abstract keyword , to make a abstaract class

// output : hi handsomme
//          you are beautiful

#include <bits/stdc++.h>
using namespace std;

// if we want to use the parent class to child class bananan jaruri hai bahut
class person { // this class object can' created if it has do nothing funtion
public:
    // void fun()=0; // now we can't define it inside the class as well outside the class
    virtual void fun()=0; // late binding hogi // pure virtual funtion

    void enjoy() {
        cout << "you are beautiful" << endl;
    }
};

class student : public person {
public: 
    void fun() {
        cout << "hi handsome" << endl;
    }

}; 

int main() {
   // person ak; // it give error because if a class conating a pure virtual funtion so we cant crreate the object of that classs / and this class called abtract classs
   // ak.fun();

    student ab;
    ab.fun(); // hi handsome

    ab.enjoy(); // with tthe help of child class we can acces the parent class members // you are beautiful

    return 0;
}