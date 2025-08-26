#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    //Counter() : count(0) {} // Constructor to initialize count to 0
    Counter() {
        count = 0;
    }
    void display() {
        cout << "Count: " << count << endl;
    }

    // Overloading prefix increment (++count)
    Counter operator++() {
        count++;
        return *this; // Return the modified object
    }

    // Overloading prefix decrement (--count)
    Counter operator--() {
        count--;
        return *this; // Return the modified object
    }
};

int main() {
    Counter c1;

    cout << "Initial ";
    c1.display();

    ++c1; // Incrementing c1
    cout << "After increment ";
    c1.display();

    --c1; // Decrementing c1
    cout << "After decrement ";
    c1.display();

    return 0;
}
