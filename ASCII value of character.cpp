// ASCII value of character
//American standar code for information interchange 

#include <iostream>
using namespace std;

int main() {

    char character = 'a';
    cout << "character : " << character << endl;
    cout << "ASCII value of character : " << int(character) << endl << endl;
    
    char car = 'A';
    cout << "char : " << car << endl;
    cout << "ASCII value of char : " << int(car) << endl << endl;
    
    char ch = '$';
    cout << "character : " << ch << endl;
    cout << "ASCII value of character : " << int(ch) << endl << endl;
    
    wchar_t value = L'ø'; // wide character using Unicode system 
    wcout << "char : " << value << endl; //wcout is used to 
    wcout << "ASCII value of char : " << int(value) << endl;
    wcout << "size is : " << sizeof(wchar_t) << endl << endl;
    
    char x;
    cout << "enter character : ";
    cin >> x;
    cout << "character is "<< x << endl << endl;
    
    wchar_t z;
    wcout << "enter character : ";
    wcin >> z;
    wcout << "character is "<< z << endl;
    wcout << "size is  " << sizeof(wchar_t) << endl;
    
    return 0;
    
}