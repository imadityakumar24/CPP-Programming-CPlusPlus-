// block 

#include <iostream>
#include <string>
using namespace std;

int marks2 = 45;
int main()
{
    int marks = 65;
    cout << "marks = " << marks << endl; 
    {
        int marks2 = 100;
       // cout << "marks2 = " << marks2 << endl;
       // cout << "marks = " << marks << endl;
    }
     cout << "marks2 = " << marks2 << endl;
    
    
    

    return 0;
}