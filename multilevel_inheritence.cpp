// multilevel inheritence
// derived class acquire the properties of base class

#include <bits/stdc++.h>
using namespace std;



class grandfather {
public:
    string gfName = "Genhri prajapati";
    int gfNumber = 9888;
};

class father : public grandfather { // father inherit the property of grand father
public:
    string fName = "shri ram";
    int fNumber = 7696;
};

class child : public father { // chile class acquire the properties of base class 
public:
    string cName = "aditya kumar";
    int cValue = 6232;
};

int main() {


    child object; // with the help of this object we can acces the parent class member funtion
    // getline(cin, object.name);
    cout << "With the help of child class object " << endl;
    cout << "grand father name is : " << object.gfName << endl;
    cout << "father name is       : " << object.fName << endl;
    cout << "child name is        : " << object.cName << endl;
  
    
    father a1;
    cout << endl << "With the help of father class object " << endl;
    cout << "grand father name is : " << a1.gfName << endl;
    cout << "father name is       : " << a1.fName << endl;
   // cout << "child name is        : " << a1.cName << endl; // error due to  because we don't have access to child class
    

    return 0;
}