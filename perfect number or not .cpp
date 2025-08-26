// perfect number or not
// ex = 6 and 28 is perfect number
// 6 is co pmetly divided by 1 , 2 and 3 and total of 3+2+1 = 6

#include<iostream>
using namespace std;

int main() {

    int number;
    int sum = 0; // adding all i which is completely divide by number
    cout << "enter the number : ";
    cin >> number;

    cout << endl;

    for(int i = 1; i <= number; i++) {
        if (number % i == 0 && i < number) {
            cout << " " << i;
            sum = sum + i; // adding all i which is completely divide by number
        }
    }

    cout << endl  << "total is = "<< sum << endl;
    
    if ( sum == number)
        cout << number << " perfect number" << endl;
    else
        cout << number << " not perfect number" << endl;


    return 0;
}