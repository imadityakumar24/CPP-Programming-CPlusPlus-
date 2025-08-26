/*

{


* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *


}

*/


#include <iostream>
using namespace std;


int pattern(int N) {
    for(int i = 0; i < N; i++) {
        // this for space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // this for stars
        for(int j = N*2-2; j >= i*2; j--) {
            cout << "*";
        }
        // this for space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

}

int main() {

    int N;
    cout << "Enter n : ";
    cin >> N;

    pattern(N);

    return 0;
}