// increment string character 

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    cout << "Hello World!" << endl;
    string name;
    cout << "Enter the name : ";
    getline(cin, name);

    cout << "New string is : ";

    for (int i = 0; name[i] != '\0'; i++) {
        int asciiValue = static_cast<int>(name[i]);
        asciiValue += 1;
        char character = static_cast<char>(asciiValue);
        cout << character;
    }

    string name1;
    cout << endl << "Enter the string : " << endl;
    getline(cin, name1);

    // a to s
    // p to q
    // z to x
    
   // for (int i = 0; name1[i] != '\0'; i++) {
        


   // }



    return 0;
}