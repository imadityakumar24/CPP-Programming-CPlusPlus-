// Recursion basic questions

#include <iostream>
using namespace std;


void printName(int count) {
    if (count >= 5)
        return;
    cout << "Aditya " << endl; 
    count++;   
    printName(count);
}


void printNumber(int n) {
    if (n > 10) return;
    cout << n << " ";
    n++;
    printNumber(n);
}


void printNumberInReverse(int n) {
    if (n < 1) return;
    cout << n << " ";
    n--;
    printNumberInReverse(n);
}


int calculateFactorial(int n) {
    if (n == 0) {
       return 1;
    }
    int partialAns = calculateFactorial(n-1);
    return n * partialAns;
}



int main() {
    cout << endl;


    printName(0);   cout << endl;

    printNumber(1);     cout << endl << endl;

    printNumberInReverse(10);     cout << endl << endl;

    int ans = calculateFactorial(5);     
    cout << "factorail of given  number is : " << ans << endl;
    

    cout << endl;
    return 0;
}