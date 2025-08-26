// change specific character in string 

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string name;
    cout << "Enter the string : ";
    getline(cin, name);
    cout << "New string is : ";
    
    // change a to s
    // change p to q
    // change z to x

    string characters = {'a', 's', 'p', 'q', 'z', 'x'};
    for(int i = 0; name[i] != '\0'; i++) {
        if (name[i] == 'a') {
            name[i] = 's';
            cout << name[i];
        }
        else if (name[i] == 'p') {
            name[i] = 'q';
            cout << name[i];
        }
        else if (name[i] == 'z') {
            name[i] = 'x';
            cout << name[i];
        }
        else {
            cout << name[i];
        }
    }

    return 0;
}