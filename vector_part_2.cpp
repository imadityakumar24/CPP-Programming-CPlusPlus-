//#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    vector<int> number= {3,4,9,7,5};
    cout << "endex 0 : " << number[0] << endl; // 3
    cout << "endex 0 : " << number.at(2) << endl; // 9 // at  this method provide bound checking // it show exception
    cout << "endex 0 : " << number.front() << endl; // 3
    cout << "endex 0 : " << number.back() << endl; // 5

    number.at(2) = 99; // modifying the value it overwrite 99 on 9 and pritn 99
    cout << "endex 0 : " << number.at(2) << endl;

    //  cout << "endex 0 : " << number.at(10) << endl; // out of range

    // user input for vectors elements
    vector<int> data(5);
    for(int i = 0; i < data.size(); i++) {
        cout << "Enter the data : " ;
        cin >> number[i];
    }

    return 0;
}