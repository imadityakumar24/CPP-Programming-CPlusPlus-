// linear search 


#include <iostream>
using namespace std ;

int main(){

	int value[5]={12,34,6,7,4};
    int number, i, found = 0;
    cout << "enter the number : ";
    cin >> number ;
    
    for(int i =0; i < 5; i++){
    	if(value[i] == number){
        	cout << "value is present at index value = " << i << endl;
            cout << "value is present at position = "  << i+1;
            found = 1; // if element is found then found become 1 if not it become 0 because condition is not satisfied 
            break;
        }
    }
    
    if (found == 0) {
        cout << "value is not present in array ";
    }
    
    
    
    return 0;
    
}