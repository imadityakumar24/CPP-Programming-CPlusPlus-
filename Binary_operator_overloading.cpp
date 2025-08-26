#include <iostream>
using namespace std;

class complex {
public:
    int R,I;
    complex operator + (complex & C2) {
        complex Result;
        Result.R = R + C2.R;
        Result.I = I + C2.I;
        return Result;
    }
};

int main() {
    complex N1, N2, R;
    N1.R = 5;
    N1.I = 4;
    N2.R = 3;
    N2.I = 6;
    R = N1 + N2;
    cout << "Real addition = "  << R.R << endl;
    cout << "Imaginary addition = " << R.I << endl;
    
    return 0;
}
