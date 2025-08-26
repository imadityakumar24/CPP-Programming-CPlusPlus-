/* // this is the output 

{



}

*/


#include <iostream>
using namespace std;

void pattern(int N, int temp) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            cout << temp << " ";
            if(temp == 1) {
                temp = 0;
            }
            else {
                temp = 1;
            }
        }
        cout << endl;
    }
}

int main() {

    int N;
    cout << "Enter n : ";
    cin >> N;
    int temp = 1;
    pattern(N, temp);

    return 0;
}