// sum within range
#include <iostream>
using namespace std ;

int main () {

    int firstnum, secondnum, sum = 0;
    cout << endl << " enter the first number : ";
    cin >> firstnum;
    cout << " enter the second number : ";
    cin >> secondnum;

    int i = firstnum;
    cout << "value of i = " << i << endl;


    while(i <= secondnum) {
        sum = sum + i;
        i++;
    }
    cout << "sum all number between firstnum to secondnum = " << sum;

    return 0;
}