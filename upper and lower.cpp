// upper , lower case of character
//American standar code for information interchange
// islower( ) // to check the character ter is in lower case or not
// isupper( ) // to check the character is in upper case or not
//
#include <iostream>
#include <cctype>
using namespace std;

int main() {

    char character = 'a';
    cout << "character : " << character << endl;
    if (islower(character)) {
        cout << "character is in lower case" << endl << endl;
    }
    else {
        cout << "character is not in lower case" << endl;
    }

    char car = 'A';
    cout << "char : " << car << endl;
    if (islower(car)) {
        cout << "character is in lower case" << endl <<endl;
    }
    else {
        cout << "character is not in lower case" << endl << endl;
    }


    char ch = 'B';
    cout << "character : " << ch << endl;
    cout << "ASCII value of character : " << int(ch) << endl ;
    char lowercase ;
    lowercase = tolower(ch) ;
    cout << "lowercase character is : " << lowercase << endl <<endl <<endl;


    char aditya = 's';
    cout << "character : " << aditya << endl;
    cout << "ASCII value of character : " << int(aditya) << endl ;
    char kumar ;
    kumar = toupper(aditya) ;
    cout << "uppercase character is : " << kumar << endl <<endl <<endl;
    

    wchar_t value = L'ø'; // wide character using Unicode system
    wcout << "char : " << value << endl; //wcout is used to
    wcout << "ASCII value of char : " << int(value) << endl;
    wcout << "size is : " << sizeof(wchar_t) << endl << endl;

  
    char x;
    cout << "enter character in lowercase : ";
    cin >> x;
    cout << "character is "<< x << endl;
    char vivek;
    vivek = toupper(x);
    cout << "uppercase  value is = " << vivek << endl <<endl;


    wchar_t z;
    wcout << "enter character in  uppercase : ";
    wcin >> z;
    wcout << "character is "<< z << endl;
    wcout << "size is  " << sizeof(wchar_t) << endl;
    char sachin;
    sachin = tolower(z);
    cout << "lowercase value of sachin is = " << sachin << endl;


    return 0;

}