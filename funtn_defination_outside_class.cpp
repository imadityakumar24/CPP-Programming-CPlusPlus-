#include <iostream>
#include <string>
using namespace std;

class student {

    public:
    void getdata() {
        string name;
        cout <<endl << "Enter your name : ";
        getline(cin,name);
        cout << "Your name is : " << name << endl ;
        int marks;
        cout << "Enter your marks : " ;
        cin >> marks;
        
        // Clear the input buffer
        cin.ignore();
        
    }
    
} kalpana, nakshatra;

int main() {

    cout << "Hello World!" << endl;
    kalpana.getdata();
    cout << "Hello World!" << endl;
    nakshatra.getdata();
    
    return 0;
}