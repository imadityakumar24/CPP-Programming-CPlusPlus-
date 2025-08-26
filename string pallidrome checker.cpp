// string pallidrome

#include<iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "Enter the string : ";
    getline(cin, name);

    //cout << "Entered string is : " << name << endl;
    // cout << "Reversed string is : ";

    char newName[name.length()];
    int j = 0;

    for (int i = name.size()-1; i >= 0; i--) {
        newName[j]=  name[i];
        j++;
    }


    cout << "Reversed string is : " << newName << endl;
    if(newName == name) {
        cout << "String is pallidrome" << endl;
    } else {
        cout << "string is not pallidrome " << endl;
    }


    if(name.compare(newName) == 0) { // 0 means true that both string are same
        cout << "String is pallidrome" << endl;
    }
    else {
        cout << "string is not pallidrome " << endl;
    }


    return 0;
}