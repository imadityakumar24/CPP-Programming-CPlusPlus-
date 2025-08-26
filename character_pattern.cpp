/* // output 

Enter N : 5

A
AB
ABC
ABCD
ABCDE


*/

#include <iostream>
using namespace std;

void characterPattern(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            int assciValue = 65+j; // due to this assciValue value increases by 1 and then printing alphabets 
            char character = static_cast <char> (assciValue);
            cout << character;
        }
        cout << endl;
    }
}

int main() {

    int N;
    cout << "Enter N : ";
    cin >> N;
    
    cout << endl;
    characterPattern(N);
    
    return 0;
}