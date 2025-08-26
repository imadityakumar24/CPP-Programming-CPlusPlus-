// logical  operators

/*

&&    logical and.  it requires 2 operand or expression
||    logical or.    it requires 2 operand or expression
!     logical not   // uniary operator means it requires only 1 operand

*/

// condition true it give 1
// condition false it give 0
// logical operator are used to check more then two condition
// relational operators having higher precidence then logical operators
// assiativity. left to right
// in any line of code if we use logical operators then the whole expression is called logic expression or compound relational expression

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

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5, c = 8;

    cout <<"value = " << ((a > b) && (a > c)) <<endl;
    cout <<"value = " << ((a > b) || (a < c)) <<endl;
    cout <<"value = " << ((a < b) || (a < c)) <<endl;

    int x = 34;
    cout << "x = " << (!x) << endl; // 0 // 34 is true so it convert into false value
    int y = 0;
    cout << "y = " << (!y) << endl;// 1 // 0 is false so it convert into true value
    int z = 1;
    cout << "z = " << (!z) << endl; // 0 // 1 is true so it convert into false value


    return 0;

}