// new and delete 

#include <iostream>
using namespace std;

int main() {

    int *p;
    int a = 5;
    p = &a;
    cout << "value at addres : " << *(p) << endl;

    int *ptr = new int(10);
    cout << "value at address is : " << *(ptr) << endl;

// new operator
    int * arr = new int[4];
    arr[0] = 9;
    arr[1] = 45;
    arr[2] = 2;
    cout << "value is : " << arr[0] << endl;
    cout << "value is : " << arr[1] << endl;
    cout << "value is : " << arr[2] << endl;

// delete operator    
    int * arry = new int[4];
    arry[0] = 9;
    arry[1] = 45;
    arry[2] = 2;
    delete[] arry;
    cout  << endl << "value is : " << arry[0] << endl;
    cout << "value is : " << arry[1] << endl;
    cout << "value is : " << arry[2] << endl;



    return 0;
}