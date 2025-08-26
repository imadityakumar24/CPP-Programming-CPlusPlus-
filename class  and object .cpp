// class with object 

#include<iostream>
using namespace std;

class student {
    
    int marks;
    public:
    void getmarks() {
        cout << "Enter the marks : ";
        cin >> marks;
    }
    
    public:
    void putmarks() {
        cout << "Put the marks : ";
        cin >> marks;
    }

};
int main() {

    student s1, Aditya; // s1 and Aditya is object 
    student Shreya; // Shreya is also a object 
    s1.getmarks(); 
    s1.putmarks();
    
    Aditya.getmarks();
    Shreya.putmarks();
    
    return 0;
}