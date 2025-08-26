#include<iostream>
using namespace std;

struct student {

    int rollno;
    char name[30];
    float marks;

};

int main()
{
    cout << "Hello World!" << endl;

    struct student Ak;
    cout << sizeof(Ak) << endl;
    cout << sizeof(struct student) << endl;

    Ak = {45, "Shridhar", 8.6};

    cout << (Ak.rollno) << endl;
    cout << (Ak.name) << endl;
    cout << (Ak.marks) << endl;

    struct student value;
    cout << "enter the roll no : ";
    cin >> value.rollno;
    cout << (value.rollno);



    return 0;
}