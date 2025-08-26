//  copy constructor

#include <iostream>
using namespace std;

class student{
    public:
    int x , y;
   // this for a1
    student() {
        cout << "hello you are so pretty" << endl ;
        cout << "this is default constructor" << endl;
    }
    // this for a2(10, 20)
     student(int a, int b) {
        x = a;
        y = b;
        cout << "x = " << x << " y = " << y << endl;
        cout << "hell0 2" << endl;
    }
    // this for a3
    student(student &a) { // reference of a2 
        cout << "coding 365 daly kro" << endl;
       // cout << "x = " << x;
    }
};

int main() {

    student a1;
    student a2(4,3);
    student a3(a2);

    return 0;
}