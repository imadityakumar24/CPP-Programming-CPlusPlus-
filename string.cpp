#include <iostream>
#include <string>

using namespace std;

int main() {
    /*

    string name;
    cout << "enter the complete name : ";
    cin >> name; // after space it don't print anything
    cout << "entered name is : "<< name << endl;
    
    */
    
     // by using this all code is working properly 
    string name;
    cout << "enter the complete name : ";
    getline(cin , name); // after space it don't print anything
    cout << "entered name is : "<< name << endl;
    

    string charcter;
    string character(5, 'S');
    cout << character << endl;
    // cout << " "<< character ;
    cout << endl;


    string coding;
    cout << "enter your name : ";
    getline(cin, coding);  // it print after white spaces also
    cout << endl << "entered string is : " << coding << endl;
    
    string value = "Dost banao";
    cout << value << endl;
    string value1 = "lovekaro";
    cout << value1 << endl;
    
    // getline is only used when we input the string 
    // string value2 = "Ashiquikaro";
    //getline(value2);




    /*

    char name[7] = {"aditya"};
    cout << name << endl;

    char string[5] ={'k', 'u', 'm', 'a', 'r'};
    cout << string << endl;
    cout << string[0] << endl;
    cout << string[1] << endl;
    cout << string[2] << endl;
    cout << string[3] << endl;
    cout << string[4] << endl;
    cout << string[5] << endl;

    */

    return 0;
}