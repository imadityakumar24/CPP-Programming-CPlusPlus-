// reverse a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "Enter the name : ";
    getline(cin, name);
    int length = name.size();
    cout << "string length is " << length << endl;

    for(int i = length - 1; i >= 0; i--) { // loops start from last index -1 
        cout << name[i] ;
    }

    return 0;
}