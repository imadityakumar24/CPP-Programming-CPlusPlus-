// character is alphabet or not  or not

#include <iostream>
#include<cctype> // header files for alphabet 
using namespace std;
int main() {

    char character;
    cout << "enter the character : " ;
    cin >> character;

    if(isalpha(character)) { // is alpha() is funtion to check it is character or not 
        cout << "character is alphabet " << endl;
    }
    else {
        cout << "character is not alphaet " << endl;
    }

    return 0;
    
}