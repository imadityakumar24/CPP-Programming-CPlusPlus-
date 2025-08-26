/* // this is the output 

{

Enter n : 4
*
**
***
****
***
**
*

}

*/


#include <iostream>
using namespace std;

void pattern(int N, int temp) {
    for(int i = 0; i < N*2-1; i++) {
        if(i < temp) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }
        }
        else {
            for(int j = temp; j > 1; j--) {
                cout << "*";
            }
            temp--;
        }
        
        cout << endl;
    }

}

int main() {

    int N;
    cout << "Enter n : ";
    cin >> N;
    int temp = N;

    pattern(N, temp);

    return 0;
}