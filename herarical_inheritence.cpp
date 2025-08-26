// herarical inheritence 
// means base class have 2 derived classs like herarical data structure 
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class parent {
public:
    string name = "Amarjeet";
};

class child_1 : public parent {
public:
    string s1Name = {"Pream sagar"};
};

class child_2 : public parent {
public:
    string s2Name = {"Ganga sagar"};
};

int main() {

    child_1 object_1;
    cout << "Fathe name is : " << object_1.name << endl;
    cout << "Fathe name is : " << object_1.s1Name << endl;

    child_2 object_2;
    cout << "Fathe name is : " << object_2.name << endl;
    cout << "Fathe name is : " << object_2.s2Name << endl;



    return 0;
}