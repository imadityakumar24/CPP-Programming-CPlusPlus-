// max element in array in array

#include <iostream>
using namespace std;

int main() {


    // int arr[5] = {8, 5, 10, 0, 9};
    int arr[5] = {10, 0, 45, 60, 9};
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "max element in array is " << max << endl;
    int secondLargest = arr[0];
    int limit = max;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > secondLargest && arr[i] < limit)
            secondLargest = arr[i];
    }
    cout << "second max element in array is " << secondLargest << endl;
    



    return 0;
}