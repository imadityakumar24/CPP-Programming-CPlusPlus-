// character is vowel or not

#include <iostream>
using namespace std;
int main() {

    char character;
    cout << "enter the character : " ;
    cin >> character;

    switch(character) {
    case 'a':
        cout << "a is vowel" << endl;
        break;
    case 'i':
        cout << "i is vowel" << endl;
        break;
    case 'o':
        cout << "o is vowel" << endl;
        break;
    case 'u':
        cout << "u is vowel" << endl;
        break;
    case 'e':
        cout << "e is vowel" << endl;
        break;
    default:
        cout << "character is not a vowel" << endl;

    }

    return 0;
    
}