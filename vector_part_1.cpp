#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> number;

    cout << "size of vector is : " << number.size() << endl; // 0
    cout << "capacity of vector is : " << number.capacity() << endl; // 0
    number.push_back(3); // 1  1
    number.push_back(2); // 2.  2
    number.push_back(4); // 3    4
    number.push_back(9); // 4    4
    number.push_back(1); // 5.    8
    cout << "size of vector is : " << number.size() << endl;
    cout << "capacity of vector is : " << number.capacity() << endl << endl;

    vector<int> data(10, 5); // this means print 5 , 10 times
    for(int i = 0; i < 10; i++) {
        cout << data[i] << endl;
    }
    
    cout << endl << endl;
    vector<int> newdata(10); // this means print 10 times
    fill(newdata.begin(), newdata.end(), 86 ); // this means print 86, 10 times
    for(int i = 0; i < newdata.size(); i++) {
        cout << newdata[i] << endl;
    }
    
    cout << endl << endl;
    vector<int> value = {89, 8, 0, 5, 3, 6}; // like arrayi intialization // it's called initializer list
    cout << "vector 1" << endl;
    for(int i = 0; i < value.size(); i++) {
        cout << value[i] << endl;
    }
    
    cout << endl << endl;
    vector<int> digits = {89, 8, 0, 5, 3, 6}; 
    vector<int> copy_values(digits.begin(), digits.end()); // new vector is copying the vector 1 data
    for(int i = 0; i < digits.size(); i++) {
        cout << copy_values[i] << endl;
    }


    return 0;
}


/*

int main() {

    vector<int> number;
    number.push_back(23);
    number.push_back(3);
    cout << number[0] << endl;
    cout << number[1] << endl;
    cout << number[9] << endl;

    vector<int> value[10];
 //   int data;
    for(int i = 0; i < 3; i++) {
        cout << "enter the number : ";
        cin >> number.push_back(value);
    }

    for(int i = 0; i < 3; i++) {
        cout << "entered numbers are : ";
        cin >> value[i];
    }

    return 0;
}

*/