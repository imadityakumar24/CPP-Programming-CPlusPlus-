// Fibonacci series 

#include <iostream>
#include <string>
using namespace std;

int main() {

    int firstNumber, secondNumber, nextNumber;
    firstNumber = secondNumber = nextNumber = 0;
    cout << "Enter fistNumber : ";
    cin >> firstNumber;
    cout << "Enter secondNumber : ";
    cin >> secondNumber;
    cout << firstNumber << " " << secondNumber << " ";
    
    while ((nextNumber = firstNumber + secondNumber) < 100) {
        //nextNumber = firstNumber + secondNumber;
       // if (nextNumber < 100) {
        cout << nextNumber << " ";
      //  }    
        firstNumber = secondNumber;
        secondNumber = nextNumber;
        
    }
    
    return 0;
}