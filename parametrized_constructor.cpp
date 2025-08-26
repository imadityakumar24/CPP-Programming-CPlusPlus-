// parametrized_constructor

#include<iostream>
using namespace std;

class student{
    public:
    int x , y;
    // this for a1(10, 20)
    student(int a, int b) {
        x = a;
        y = b;
        cout << "x = " << x << " y = " << y << endl;
        cout << "this is paramitrized constructor" << endl;
    }
    // this for a2
    student() {
        cout << "hello you are so pretty" << endl ;
        cout << "this is default constructor" << endl;
    }
    // this for a3
    student(int s) {
        cout << "coding " << s << " dasy kro";
    }
};

int main() {
    
    student a1(10,20), a2 , a3 = 365;

    return 0;
}

/*

class student{
    public:
    int x , y;
    student(int a, int b) {
        x = a;
        y = b;
    }
};

int main() {
    student a1(5,6) , a2; // this give error because first object have argumrnt , but second object dont have so it give errror bcs for second object they dont have argument but in sunstructor defination the have memory for arguments
    //student a1(5,6) , a2(5,3); // this dont give error

    return 0;
}

*/