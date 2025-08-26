#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    void getdata() {
        string name;
        cout << "Enter your name : ";
        getline(cin,name);
        cout << "Your name is : " << name << endl;
    }
} s1, s2;

int main() {

    cout << "Hello World!" << endl;
    s1.getdata();
    return 0;
}