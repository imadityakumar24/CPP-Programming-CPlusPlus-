// wchar_t data type 

#include <iostream>
using namespace std;
int main () {

    wchar_t ch = L'ā';
    wcout << ch << endl; // ā
    cout << sizeof(wchar_t) << endl; // 
    
    wchar_t character = L'ā';
    wcout << (int)character << endl; // 257 is and unicode value 
    cout << sizeof(wchar_t) << endl;

    return 0;
}