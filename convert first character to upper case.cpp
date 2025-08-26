// power of number

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    cout << "Enter the name : ";
    getline (cin, name);

    cout << "New string is : ";
    // it convert first chapter to upper case
    int capital = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ' && capital == 0) {
            int Ascii = static_cast <int>(name[i]);
            Ascii = Ascii - 32;
            char character = static_cast <char>(Ascii);
            cout << character;
            capital++;
        }
        else {
            cout << name[i];
        }
    }

    return 0;
}