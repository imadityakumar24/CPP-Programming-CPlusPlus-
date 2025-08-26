// multiple inheritence
// derived class acquire the properties of base class

#include <bits/stdc++.h>
using namespace std;

class father {
public:
    string fName = "shri ram";
    int fNumber = 7696;
};

class mother {
public:
    string mName = "shri ram";
    int mNumber = 7600;
};


class child : public mother , public father { // chile class acquire the properties of base class 
public:
    string cName = "aditya kumar";
    int cValue = 6232;
};

int main() {


    child object; // with the help of this object we can acces the parent class member funtion
    // getline(cin, object.name);
    cout << "Father name is : " << object.fName << endl;
    cout << "father value is " <<  object.fNumber<< endl;
    cout << "Mother name is : " << object.mName << endl;
    cout << "Mother value is " <<  object.mNumber<< endl;
    cout << "child name is : "<< object.cName << endl;
    cout << "child value is "<< object.cValue << endl;


    return 0;
}