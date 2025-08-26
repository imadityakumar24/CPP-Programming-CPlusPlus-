// count whitespace in string 

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

    //cout << "Entered string is : " << name << endl;
    // cout << "Reversed string is : ";
    cout << name[6] << endl;
    int whiteSpace = 0;
    
    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            whiteSpace++;
        }
    }
    cout << "WhiteSpace are : " << whiteSpace<< endl;
    
    
/*    
    
    char character[50] = " shreya";
    cout << "entered name is : " << character << endl;
    
    if(isspace(character[50]))
        cout << "space is present" << endl;
    else 
        cout << "no space is present" << endl;    

*/    


    return 0;
}