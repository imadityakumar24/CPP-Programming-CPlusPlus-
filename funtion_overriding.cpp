// funtion overrriding
// c++ or oop follows bottom up aproach means first it go in child class if defination is not present then it goes in parent class 
// output // base class derived  class

#include <iostream>
using namespace std;

class father {
    public:
    void display() {
        cout << "base class ";
    }   
};

class son : public father {
    public:
    void display() {
        father::display(); // due to this it calls father daplay then come and prrint derived class
        cout << "derived  class ";
    }
};

int main() {

    son object;
    object.display();

    return 0;
}



/*

// funtion overrriding
// c++ follows bottom up aproach
// output // derived class

#include <iostream>
using namespace std;

class father {
    public:
    void display() {
        cout << "base class ";
    }   
};

class son : public father {
    public:
    void display() {
        cout << "derived  class ";
    }
};

int main() {

    son object;
    object.display();

    return 0;
}

*/