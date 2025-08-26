
// bool data type 
// means Boolean algebra true and false 
// o is considered as false 
// other number considered as true 

#include <iostream>
using namespace std;
int main() 
{

    bool value = false;
    cout << "value is equal to  " << value << endl;
    cout << sizeof(bool) << endl ;
    
    
    bool v = 67;
    cout << "value is equal to  " << v << endl;
    cout << sizeof(bool) << endl << endl;
    
    int x = 100, y = 12;
    
    if ((x > y) == true)
        cout <<"hello world" << endl; 
    else 
        cout << "love you all" << endl;    
        
    int z;
    z = x + y + true - false ; // 100 + 12 + 1 - 0
    cout << z;  

    return 0;
}