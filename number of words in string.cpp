// count number of words in string 

// approach : i count the whitespaces in a string and and there is i+1 words are present in string 

#include<iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "Enter the string : ";
    getline(cin, name);

    int whiteSpace = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            whiteSpace++;
        }
    }
    //cout << "WhiteSpace are : " << whiteSpace<< endl;
    whiteSpace = whiteSpace+1;
    cout << "There are " << whiteSpace << " words in string "<< endl;

    return 0;
}