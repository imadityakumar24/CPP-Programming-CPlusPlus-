// program to count digits, alphabet , special characters

#include <iostream>
#include <string>
#include <cctype> // header file to count alphabet number and special characters 

using namespace std;

int marks2 = 45;
int main() {

    string name;
    cout << "enter the string : ";
    getline (cin, name);
    cout << "entered string is " << name << endl;

    int digitCount = 0, alphabetCount = 0, specialCharcount = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        if ( isalpha(name[i]) )
            alphabetCount++;
        if ( isdigit(name[i]) )
            digitCount++;
        if ( ispunct(name[i]) )  // it count special character
            specialCharcount++;
    }

    cout << "Alphabets are : " << alphabetCount<< endl;
    cout << "digits are : " << digitCount << endl;
    cout << "special characters are : " << specialCharcount;


    /*

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] = 0||1||2||3||4||5||6||7||8||9)
            digitCount++;
        if (name[i] == Q||W||E||R||T||Y||U||I||O||P||A||S||D||F||G||H||J||K||L||Z||X||C||V||B||N||M)
            alphabetCount++;
       // if (name[i] = !||@||#$%^&*()_-+={}[]|\\:;'<>,.?/~`)


    }

    cout << "Digital are : " <<digitCount << endl;
    cout << "alphabet are : " <<alphabetCount ;

    */

    return 0;
}