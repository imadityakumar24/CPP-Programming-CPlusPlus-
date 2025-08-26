// string concatenation 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!" << endl << "\n";
    
    string name1 = "Love ";
    string name2 = {"coding"};
    cout << name1 + name2 << endl;
    
    string name3 = "Aditya ";
    string name4 = "kumar";
    
    string newName;
    newName = name3 + name4;
    cout << "New string is : " << newName << endl;
    
    return 0;
}