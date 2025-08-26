// it is a friend of class it can acces all member funtion

#include <bits/stdc++.h>
using namespace std;

class box {
    int a, b;
public:    
    void setdata(int x, int y) {
        a = x; b = y;
    }

    friend void display(box p);
};

void  display(box p) { // it is not a member of class
   // cout << " a = b = "<< a + b; // not compiler is confused means a and b a1 ka hai ya a2 ka
   cout << p.a + p.b;
   
}

int main() {

    box a1, a2;
    a1.setdata(5,7);
    display(a1); // it is working because it is not a member funtion
    return 0;
}

/*
class box {
    int a, b;
public:    
    void setdata(int x, int y) {
        x = a;
        b = y;
    }

    friend void display();
};

void  display() { // it is not a member of class
   // cout << " a = b = "<< a + b; // not compiler is confused means a and b a1 ka hai ya a2 ka
   
}


// not it a part of class , but but if we dont write box :: , so it is not considered as a part of classs , so then friend funtion is used
// void box :: display() { // it is not a member of class

// }

int main() {

    box a1, a2;
    a1.setdata(5,7);
    display(); // it is working because it is not a member funtion
    return 0;
}

*/