// recursive code for Fibonacci series


#include <bits/stdc++.h>
using namespace std;


void printFiboSeries(int last, int secondLast, int count) {
    if (count == 10) return;
    int value = last + secondLast;
    cout << value << " ";
    count++;
    printFiboSeries(value, last, count);
}


// tc = o(2^N)   means exponential time complexity
// sc = o(1)
int nthFiboNumber (int n) {
    if (n <= 1) 
        return n;
    int last = nthFiboNumber (n -1);
    int sLast = nthFiboNumber (n - 2);
    return last + sLast; 
}


int main() {
    cout << endl;

    cout <<"0 1 1 ";
    int count = 0;
    printFiboSeries(1, 1, count);

    int nthFiboValue = nthFiboNumber(4);    // pass the any index value it will return the fibonaci value 

    cout << endl << endl << "nthFiboValue is : " << nthFiboValue << endl;

    
    cout << endl << endl;
    return 0;
}