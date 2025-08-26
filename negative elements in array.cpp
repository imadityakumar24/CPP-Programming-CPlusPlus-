// negative elements in array

#include<iostream>
using namespace std;

int main() {
    /*
        int arr_size;
        cout << "enter the array length : ";
        cin >> arr_size;
    */
    int arr_element[6], count;

    for (int i = 0; i < 6; i++) {
        cout << "enter the array element = " ;
        cin >> arr_element[i];
    }

    for (int i = 0; i < 6; i++) {
        if (arr_element[i] < 0)
            count++;
    }

    cout << "there are " << count << " negative elements in array"<< endl;


    int column ;



    return 0;
}