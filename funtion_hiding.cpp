// funtion hidding 
// when child class hide the parent class then it called funtion hidding
// it not called funtion overloading
// in this early binding is hapning 

#include <iostream>
using namespace std;

class father {
    public:
    void value(int x) {
        cout << "parent class : " << x << endl;
    }
};

class son : public father {
    public:
    
};

int main() {

    son object1 , object2;
    object1.value(5); // this run parent class because in child class we dont have any funtion so it goes in parent  class and check for funtion
    father a1;
    a1.value(7); // this run parent class
   
    return 0;
}

/*

#include <iostream>
using namespace std;

class father {
    public:
    void value(int x) {
        cout << "parent class : " << x << endl;
    }
};

class son : public father {
    public:
    void value(float y) {
        cout << "child value = " << y << endl;
    }
};

int main() {

    son object1 , object2;
    object1.value(5); // this run child class , arguments are match or not match its not neccessary 

    father a1;
    a1.value(7); // this run parent class
   
    return 0;
}

*/