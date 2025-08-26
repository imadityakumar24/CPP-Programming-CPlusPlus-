#include<iostream>
using namespace std;

int main()
{
    int count =0;
    int value = 0;
    cout << "enter value : " ;
    cin >> value;
    
    for(int i = 1; i <= value; i++) {
        if(value % i == 0) {
            count++;
        }
    }
    if(count == 2)
        cout << "it is prime no " << endl ;
    else
        cout << "not a prime no " << endl;   
        
         
    return 0;
}