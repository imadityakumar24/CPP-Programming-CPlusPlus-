#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class inheriting from Animal
class Mammal : public Animal {
public:
    void run() {
        cout << "Mammal is running." << endl;
    }
};

// Further derived class inheriting from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    // Create an object of Dog class
    Dog myDog;

    // Call methods from different levels of inheritance
    myDog.eat();  // From Animal
    myDog.run();  // From Mammal
    myDog.bark(); // From Dog

    return 0;
}
    