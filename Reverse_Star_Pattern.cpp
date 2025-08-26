/*

    8 7 6 5 4 3 2 1
    8 7 6 5 4 3 2
    8 7 6 5 4 3
    8 7 6 5 4
    8 7 6 5
    8 7 6
    8 7
    8

*/

#include <iostream>
using namespace std;
void pattern(); // function declaration 

int main() {
    
    pattern(); // function calling
    
    return 0;
}

// function defination 
void pattern() { 
    for(int i = 0; i < 8; i++) {
        for(int j = 8; j > i; j--) {
            cout << j << " "; // with space 
           // cout << j; // without space
        }
        cout << endl;
    }
}