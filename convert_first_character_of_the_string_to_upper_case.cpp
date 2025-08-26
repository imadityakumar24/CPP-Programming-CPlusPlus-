// convert_first_character_of_the_string_to_upper_case

#include <iostream>
#include <string>
using namespace std;

int main() {

    register string name;
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
            if (name[i] == ' ') {
                capital = 0;
            }
        }
    }

    return 0;
}