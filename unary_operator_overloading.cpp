// unary operator overloading 


#include <iostream>
using namespace std;

class box {
    int a, b;
public:    
    void accept(int x, int y) {
        a = x; b = y;
    }
    
     box operator -( ) { 
  //  box  -( ) {     
        box z1;
        z1.a = -a;
        z1.b = -b;
        return z1;
    }

    void display() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main() {

    box a1 , a2;
    a1.accept(5,6);
    //  a2 = a1.-(); // a1 calling his - operator and it donot passsing arguments
   //  a2 = -a1; // both are same
     a2 = -(a1); // both are same
     a1.display();
     a2.display();

    return 0;
}