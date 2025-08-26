// number of words in string 

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    cout << "Enter the name : ";
    getline(cin , name);
    
    int character = 0, word = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            if (character != 0) {
                word++;
            }
            character = 0;
        }
        else {
            character++;
        }
    }
    
    if (character != 0) {
        word++;
    }
    
    cout << "Number of words : " << word << endl;
    
    return 0;
}