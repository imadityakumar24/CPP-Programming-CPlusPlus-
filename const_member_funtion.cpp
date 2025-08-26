#include <iostream>
using namespace std;

class Circle {
private:
    const float pi = 3.14159;  // const data member

public:
    float radius;

    // Constructor to initialize the radius
    Circle(float r) : radius(r) {}

    // Function to calculate and return the area of the circle
    float calculateArea() const {
        return pi * radius * radius;  // accessing const data member
    }
};

int main() {
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Create a Circle object with the given radius
    Circle myCircle(r);

    // Calculate and display the area of the circle
    cout << "Area of the circle: " << myCircle.calculateArea() << endl;

    return 0;
}
