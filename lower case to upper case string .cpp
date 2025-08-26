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
    
    int asciiValue;
    for(int i = 0; name[i] != '\0'; i++) {
        asciiValue = static_cast<int>(name[i]); // it print ASCII value of characters
        //cout << asciiValue << endl;
        
        asciiValue = asciiValue - 32; 
        char character = static_cast<char>(asciiValue); // it print character with the help of ASCII values
        cout << character;
        
    }
    
    
    return 0;
}