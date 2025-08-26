#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // string name = "A";
    char name = 'A';
    //cout << (int)name << endl;
    cout << static_cast<int>(name) << endl;
    
    int asciivalue = 65;
    char character = static_cast<char>(asciivalue);
    // char character = static_cast<char>(asciivalue) << endl; // giving error because we can't use endl
    cout << character;
    
    return 0;
}