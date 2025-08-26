// if funtion name is same in both class then it is called funtion overriding
// child class pointer can't acces the parent class
// parent class pointer can access both the class

// output : It is child class
//          it is parent class

#include <bits/stdc++.h>
using namespace std;

class A {
public:
// virtual keyword se compiler ko pta lag jayega ki fun() li late binding karni hai
    virtual void fun() {
        cout << "It is parent class" << endl;
    }
};

class B : public A {
public:
    void fun() {
        cout << "It is child class" << endl;
    }
};

int main() {

    A *ptr, object1;
    B object2;
    // ptr = &object1; // it is working
    ptr = &object2; // parent class pointer can access  both the parent and child class
    ptr -> fun(); // now call kaarte samy pointer ke type ko aadhar nhi, uske content ko aadhaar mana jayega
    // output : It is child class

    ptr = &object1;
    ptr -> fun(); // output // It is parent class


    return 0;
}



/*

// if funtion name is same in both class then it is called funtion overriding
// child class pointer can't acces the parent class
// parent class pointer can access both the class

// output : It is parent class

#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void fun() {
        cout << "It is parent class" << endl;
    }
};

class B : public A {
public:
    void fun() {
        cout << "It is child class" << endl;
    }
};

int main() {

    A *ptr, object1;
    B object2;
    // ptr = &object1; // it is working
    ptr = &object2; // parent class pointer can access  both the parent and child class
    ptr -> fun(); // directly it go in parent class and print it is parent class // early binding

    // to solve the problem, hum cahenge ki early binding na ho ke late or dynamic binding ho


    return 0;
}

*/