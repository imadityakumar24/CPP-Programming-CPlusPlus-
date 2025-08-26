// static data member
// scope withn the block 
// lifetime through out the programm
// it retains it previous values it don't intialized again and again
// static are created only once in program

#include <iostream>
using namespace std;

class student{
    public:
    int x,y;        // instanc memory variable 
    static int z;   // it memory it defined outside the class // static member variable // class variable
};
int student::z;     // definatiion ofstatuc variable 

int main() {

    cout << "static data member in classs " << endl;

    student a1, a2;
     // z = 556;                 // this give error because it dont in which class z is defined
     student::z = 556;           // we can do this when z is not a private variable
     cout << student::z << "\n";
     cout << a1.z;

    return 0;
}