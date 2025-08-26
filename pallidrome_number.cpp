// pallidrome number

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

    int number;
    cout << "Enter number : ";
    cin >> number;
    int temp, dublicate; // temp for while loop // dublicate is used to compare reversedigit
    temp = dublicate = number;

    int reverseDigit = 0;
    while(temp != 0) {
        number = temp;
        number = number % 10;
        reverseDigit = (reverseDigit * 10) + number;
        temp = temp / 10;
    }   

    cout << "reverse is : " << reverseDigit << endl;

    if(dublicate == reverseDigit) {
        cout << "true its pallidrome";
    } 
    else {
        cout << "false its not pallidrome";
    }


    return 0;
}