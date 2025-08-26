// using Euclidean algorithm to find gcd

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = ";
    cin >> b;
    
    while(a > 0 && b > 0) {
        if(a > b)
            a = a % b;
        else
            b = b % a;    
    }
    
    if(a == 0)
        cout << "gcd = " << b << endl;
    else 
        cout << "gcd = " << a << endl;
        
    return 0;    
}