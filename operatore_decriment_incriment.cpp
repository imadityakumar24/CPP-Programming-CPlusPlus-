#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance(int f , int i) {
        this -> feet = f;
        this -> inch = i;
    }
    void operator-() {
        feet--;
        inch--;
        cout << "Feet = " << feet << " inch = " << inch << endl;
    }
    void operator+() {
        feet++;
        inch++;
        cout << "Feet = " << feet << " inch = " << inch << endl;
    }
};

int main() {
    Distance d1(8,9);
    -d1;
    Distance d2(10, 20);
    +d2;
    return 0;
}
