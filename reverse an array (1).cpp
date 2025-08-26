#include<iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {5, 7, 9, 12, 23};

    cout << "Original array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
      //  cout << arr[i];
       // cout << " " << arr[i];
    }

    // Reverse the array
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "\nReversed array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
