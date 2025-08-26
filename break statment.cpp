// break statment 

#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl <<endl;
    
    for (int i = 0; i < 20; i++) {
        cout << i << endl;
        
        if(i == 12)
            break;
        
    }
    
    cout <<endl;
    
    for (int j = 0; j < 20; j++) {
        int age;
        cout << "enter the age : " ;
        cin >> age;
        
        if(age > 24)
            break;
        
    }
    
    return 0;
}