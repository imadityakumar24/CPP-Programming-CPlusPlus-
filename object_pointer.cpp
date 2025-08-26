// object pointer
// A pointer contains address of an object is called object pointer

#include <bits/stdc++.h>
using namespace std;

class student {
    int x, y;
public:    

    void add(int a, int b) {
        x = a; 
        y = b; 
    }
   
    void display() {
        cout << "x = " << x  << " y = " << y;
    }
};


int main() {
    student *ptr, a1; // pointer conating the addres of object
    ptr = &a1;
    // a1.add(5, 3); // correct

    // ptr.add(5, 3); // wrongp
    ptr -> add(5,3); // correct
    ptr -> display();

    return 0;
}