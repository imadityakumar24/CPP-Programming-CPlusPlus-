// duplicate elements in array


#include<iostream>
using namespace std;

int main() {

    int arr[7] = {4,4,9,8,6,6,4};
    for(int i = 0; i < 7; i++) {
        cout << "array element are = " << arr[i] << endl;
    }
    
    cout << endl;

    int count = 0,number = 0;
    cout << "for which element you find duplicate = ";
    cin >> number;

    for(int i = 0; i < 7; i++) {
        if(number == arr[i]) {
            count++;
        }    
    }

    count -= 1; // because it compare complete array , so answer duplicate is +1 matlab 1 jyada batata hai to ek minus kar rhe hai taki shi number of duplicate elements pta lag jaye 

    cout << "There are " << count << " duplicate elements of  " << number;



    return 0;
}
