// deconstructor or destructre
// ~ this sign is used to declare de discunstrtor
// deconstructor always run , when objectvare staet destroying 


#include <iostream>
using namespace std;

class student {
    public:
    int x, y;
    ~student() {
        cout << "Aditya kumar" << endl;
    }
};

int main() {

    student a1, a2;
    
    cout << "roz pdha karo" << endl;

    return 0;
}