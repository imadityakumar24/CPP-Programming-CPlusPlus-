// minimum element in array in array

#include <iostream>
using namespace std;

int main() {


    int arr[5] = {8, 5, 10, 90, 9};
    //int arr[5] = {10, 0, 45, 60, 9};
    int minimum = arr[0];
    for (int i = 1; i < 5; i++) {
        if (minimum < arr[i])
            minimum;
        else
            minimum = arr[i];
    }
    cout << "minimum element in array is " << minimum << endl;



    return 0;
}