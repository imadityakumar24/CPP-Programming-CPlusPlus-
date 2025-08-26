// this pointer in c++ used as a ponter it point to objects

#include <bits/stdc++.h>
using namespace std;

class student {
    int x, y;
public:    
/*
    void add(int x, int y) {
        x = x;  // name conflicting situation
        y = y; // name conflicting situation
    }
*/    
    void add(int x, int y) {
        this -> x = x;  // this -> x  means a1 ka x
        this -> y = y;  // this -> y  means a1 ka y
    }

    void display() {
        cout << this -> x  << " " << this -> y;
    }
};


int main() {
    student a1, a2;
    a1.add(5, 3);
    a1.display();

    return 0;
}