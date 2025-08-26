// lower case to upper case string 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "Enter words in lower letters : ";
    getline(cin, name);
    
    cout << "New string is : ";
    for(int i = 0; name[i] != '\0'; i++) {
    
        if (name[i] != ' ') {
            int asciiValue = static_cast<int>(name[i]);
            asciiValue = asciiValue-32;
            char character = static_cast<char>(asciiValue);
            cout << character;
        }
        
    }
    
    
    return 0;
}