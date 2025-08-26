// logical and operator 
// if both conditions are true then it give true means 1
// if any one is false then it give false 

/*
exp 1 && exp2    ootput 
	0  &&  0		0
	0  &&  1		0
	1. &&. 0		0
	1. &&  1		1
 
 */   

// if first condition is true then it check the second condition     // is both conditions are true then output will be true 1
// if first condition is false then it don't check the second condition and give output false 
#include <iostream>
using namespace std;
int main(){

	int a = 10, b = 5;
    
    cout << "value = " << (a == b  &&  b < a) << endl; // 0 == 1 // it give 1 
    
    cout << "value = " << (a > b  &&  b != 10 && b < 11 && a > 5) << endl; // it print 1 all conditions are true 
            //  10 > 5  &&. 5 != 10 && 5 < 11 && 10 > 5
 // output. //.    1.    &&    1     &&  1    &&   1
 
 
    int c = 20, d = 40;
    cout << "value = " << (c == d && c < d) << endl;// 0
                // 40==20 && 20 < 40
                  //. 0   &&   // 1 //output 0
    cout << "value = " << (c != d && c < d);// 1
               //20 != 40 && 20 < 40
                //.   1  && 1 // output 1 
                
    return 0;   
                
}