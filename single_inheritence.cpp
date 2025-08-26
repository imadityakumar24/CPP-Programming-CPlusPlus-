// single inheritence
// derived class acquire the properties of base class

#include <bits/stdc++.h>
using namespace std;

class parent {
public:
    string fName = "shri ram";
    int fNumber = 76;
};

class child : public parent { // chile class acquire the properties of base class 
public:
    string cName = "aditya kumar";
    int cValue = 89;
};

int main() {

    child object; // with the help of this object we can acces the parent class member funtion
    // getline(cin, object.name);
    cout << "Father name is : " << object.fName << endl;
    cout << "father value is " <<  object.fNumber<< endl;
    cout << "child name is : "<< object.cName << endl;
    cout << "child value is "<< object.cValue << endl;

    return 0;
}