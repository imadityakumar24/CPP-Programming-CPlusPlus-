// removing all string except alphsbet 

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
        if (isalpha(name[i])) { // with library function removing all string except alphsbet
            cout << name[i];
        }
    }

    cout << "\n" << "New string is : ";
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z') { // with own logic removing all string except alphsbet
            cout << name[i];
        }
    }


    return 0;
}