// polymorphism
// compile time polymorphism 
// funtioon performing many tasks 
// funtion overloading
// funtion name same but arguments are different 
// we can do this in same block , if we dont have funtion in same class then we can perform funtion overloading , then we can perform funtion hiding 

#include<iostream>
using namespace std;

class student {
    public:
    // this for a1
    void dimenstion(int a , int b) {
        cout << "rectangle A * B = " << a*b << endl;
    }
    // this is for a2
    void dimenstion(int x) {
        cout << "square = " << x*x << endl;
    }
};

int main(){
    student a1 , a2;
    a1.dimenstion(4,5);
    a1.dimenstion(4);
    return 0;
}