// member_function_defined_outside_the_class

#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    //int age;
    void getdata() {
        string name;
        cout << "Enter your name : ";
        getline(cin,name);
        cout << "Your name is : " << name << endl;
    }
    void printAge();
} s1, s2; // this are the objects 

// member function is defined outside the class
void student::printAge(){
    int age;
    cout << "Enter your age : " ;
    cin >> age;
    cout << "Your age is : " << age << endl;
}


int main() {

    cout << "Hello World!" << endl;
    s1.getdata(); // calling 
    s1.printAge(); //calling
    
    return 0;
}