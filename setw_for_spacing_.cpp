// setw in c++ 
// set widths 
// syntax setw(int n)
// include<iomanip> // it is necessary if we want to use setw()

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;
    for(int i = 1; i <= 5; ++i) {
        cout << setw(10) << i << setw(10) << i*i << setw(10) << i*i*i << endl;
    }
    return 0;
}
