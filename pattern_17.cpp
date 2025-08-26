/* // output

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI



*/

#include<iostream>
using namespace std;

void pattern(int N) {
    // this for uper stars
    for(int i = 0; i < N; i++) {
        // this for space
        for(int j = 0; j < N-i-1; j++) {
            cout << " ";
        }
        // this for albhabets
        for(int j = 0; j < 2*i+1; j++) {
            int assciValue;
            if(j <= (2*i+1)/2 ) {
                assciValue = 65+j;
                char character = static_cast<char>(assciValue);
                cout << character ;
            }
            else {
                assciValue--;
                char character = static_cast<char>(assciValue);
                cout << character;
            }
        }
        // this for space
        for(int j = 0; j < N-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    int N;
    cout << "Enter N : ";
    cin >> N;
    
    cout << endl;
    pattern(N);
    
    return 0;
}