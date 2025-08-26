#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << setw(15) << "Aditya";
    cout << setw(15) << "Aditya";
    cout << endl << setw(15) << "loveed";
    cout << setw(15) << "nature" << endl;
    
    int number;
    //cout << "Enter your number : " << setw(10);
    cout << "Enter your number : ";
    cout << setw(10);
    cin >> number;
    return 0;
}