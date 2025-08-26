// pointer to array

#include<iostream>

using namespace std;

int main() {

    int age = 26;
    int *ptr;
    ptr = &age;
    cout << age << endl; // 26
    cout << &age << endl; // address of a
    cout << ptr << endl; // addres of a
    cout << *ptr << endl; // a value = 26
    *ptr = 45;
    cout << *ptr << endl << endl;


    int arr[5] = {3,5,78,34,4};
    int *pointer;
    // error  pointer = &arr[]; // we can't do o
    pointer = &arr[4];
    cout << pointer << endl;
    cout << *pointer << endl << endl; // 4

    for (int i = 0; i < 5; i++) {
      //   pointer = arr[i] ; because pointer only store addess 
        pointer = &arr[i];
        cout << pointer << endl;
        cout << *pointer << endl;

    }
    
    

    return 0;
}
    