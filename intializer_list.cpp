// we cant intialze value to any vairabele in class because memory is not allocates
// we we define a const variable in class so we cant intialize but 
// at this time we use initializer list to intialize the variable

#include <iostream>
using namespace std;

class dumy {
    int a,b;
    const int x;
public:
    dumy() : x(5) { // int a = 5 , and b = 7 // intializeer list
        cout << x;
    }    
};

int main() {

    dumy d1;

    return 0;
}




/*

// we cant intialze value to any vairabele in class because memory is not allocates
// we we define a const variable in class so we cant intialize but 
// at this time we use initializer list to intialize the variable

#include <iostream>
using namespace std;

class dumy {
    int a,b;
public:
    dumy() : a(5), b(7) { // int a = 5 , and b = 7 // intializeer list

    }    
};

int main() {



    return 0;
}

*/