// exception handling

#include <iostream>
using namespace std;

int main() {

    cout << "welcome" << endl;
    try {
        throw 10;
        cout << "hi buddy" << endl;
    }
    catch(int e) {
        cout << "exception : " << e << endl;
    }
    cout << "last line" << endl;

    return 0;
}