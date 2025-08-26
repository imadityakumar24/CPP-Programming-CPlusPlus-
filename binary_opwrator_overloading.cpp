// binary operator overloading 
// means operator are performming some different tast 
// in this + operator is working as funtion

#include <iostream>
using namespace std;

/*
class box {
 public:   
    int a, b;

    void add( ) {
        cout << a+b;
    }
};

int main() {
    box a1, a2;
    a1.a = 4; a1.b = 6;
    a1.add();
   // int c = a + b;

    return 0;
}

*/


/*
class box {
    int a, b;
public:    
    void accept(int x, int y) {
        a = x; b = y;

    }

    box add(box z) { // box z receive a2 as argument
        box result;
        result.a = z.a + a;
        result.b = z.b + b;
        return result;
    }

    void display() {
        cout << a << endl  << b << endl;
    }
};

int main() {

    box a1, a2, a3;
    a1.accept(5,6); // 5, 3 is real and 6 , 7 is imaginary  
    a2.accept(3,7);
    a3 = a1.add(a2); // a2 is a type of box so receive memeory is also a type a box memeroy
    a3.display();

    return 0;
}

*/



class box {
    int a, b;
public:    
    void accept(int x, int y) {
        a = x; b = y;

    }
    // operator keyword is used so + is behave as funtion // if we dont use this it give error
    box operator +(box z) { // box z receive a2 as argument
        box result;
        result.a = z.a + a;
        result.b = z.b + b;
        return result;
    }

    void display() {
        cout << a << endl  << b << endl;
    }
};

int main() {

    box a1, a2, a3;
    a1.accept(5,6); // 5, 3 is real and 6 , 7 is imaginary  
    a2.accept(3,7);
   // a3 = a1 +(a2); // + behave as a funtion
    a3 = a1 + a2; // both are same
    a3.display();

    return 0;
}