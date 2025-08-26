// switch control statment


#include <iostream>
using namespace std ;

int main() {

    int firstnum;
    cout << "enter firstnum : ";
    cin >> firstnum ;
    
    int secondnum;
    cout << "enter secondnum : ";
    cin >> secondnum ;
    
    int thirdnum;
    cout << "enter thirdnum : ";
    cin >> thirdnum ;
    
    int fourthnum;
    cout << "enter fourthnum : ";
    cin >> fourthnum ;
    
    cout <<firstnum <<secondnum <<thirdnum <<fourthnum << endl;
    
    if (firstnum == fourthnum) {
        if (secondnum == thirdnum) {
            cout << "it's is palidrome number" << endl;
        }
    }
    else {
        cout << "not a palidrome number" << endl;
    }
    
    

    return 0;

}