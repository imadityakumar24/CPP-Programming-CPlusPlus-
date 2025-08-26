// nested if else 

// within if if we want to use another if so it is called nested if 
// if we want to check multiple condition so we use nested if 
// if we want to check 2 conditio at once that time we used nested if or we used logical && and operators 
// if we use of else so if we write ; semicolon after if so it give error because we can't used else without if 
// you know all the thing 
// try on your copy new new program 

#include <iostream>
using namespace std ;

int main(){

	int age , salary;
    cout << "enter the age and salary : ";
    cin >> age >> salary;
    
    if(age > 50){
    	if(salary < 60000){
        	salary = salary +10000;
            cout << "salary =  " << salary << endl;
        }
        else{
        	salary = salary + 5000;
            cout << "salary = " << salary << endl;
        }
    }
    else{
    	salary = salary + 3000;
        cout << "salary = " << salary; 
    }
    
    return 0;
    
}    
    
    