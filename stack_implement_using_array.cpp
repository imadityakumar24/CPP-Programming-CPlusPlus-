// shift + alt and down arrow for copy

#include <iostream>
using namespace std;

void display (int size, int stack[]) {
    if (size == -1) {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "Displaying stack : ";
        for (int i = 0; i < size; i++) {
            cout << stack[i] << " ";
        }
        cout << endl << endl;
    }
}

int main() {
    cout << endl << endl;

    
    int stack[5];
    int s = 5;
    int top = -1;

    while (true) {
       
        int choise = 0;
        cout  << endl << "1 : Enter for push   the element : " << endl;
        cout << "2 : Enter for pop    the element : " << endl;
        cout << "3 : Enter for top print element  : " << endl;
        cout << "4 : Enter for stack is empty     : " << endl;
        cout << "5 : Enter for print peek element : " << endl;
        cout << "6 : Display the stack            : " << endl;
        cout << "7 : Exit the system              : " << endl;

        cout << endl << "Enter your choise : "; 
        cin >> choise;

        if (choise == 1) {
            int element = 0;
            cout << "Enter element : ";
            cin >> element;
            if (top > 4) {
                cout << "Stack is full can not insert value";
            }
            // else {
            //     if (top == -1) {
            //         top++;
            //         stack[top] = element;
            //         top++;
            //     }
            //     else {
            //         stack[top] = element;
            //         top++;
            //     }
            // }
            // display(top, stack);
            else {
                top++;
                stack[top] = element;
            }
            display(top+1, stack);
        }
        else if (choise == 2) {
            if (top == -1) {
                cout << "Stack is empty can't pop";
            }
            // if (top == 5) {
            //     cout << "stack is full" << endl;
            //     display(top, stack);
            //     cout << "Exiting the system" << endl;
            //     break;
            // }

            // if ( top > -1 && top < 5) {
            else {    
                cout << "stack poped elemnt : " << stack[top] << endl;
                //  stack.pop();
                top--;  // reducing the size of stack
                display(top, stack);
            }
        }
        else if (choise == 3) {
            if (top > 4) {
                cout << "size of stack is : " << top << endl;
                cout << "Stack is overflow" << endl;
            }
            else {
                cout << "stack top element : " << stack[top];
                cout << "size of stack is : " << top << endl;
                display(top, stack);
            }
        }
        else if (choise == 4) {
            if (top == -1) {
                cout << "YES Stack is empty" << endl;
            }
            else if (top < 5) {
                cout << "Stack is not empty" << endl;
                display(top, stack);
            }
            else {
                cout << "Stack is overflow" << endl;
            }
        }
        else if (choise == 5) {
            if (top == -1) {
                cout << "Stack is empty don't have peek element" << endl;
            }
            else {
                display(top, stack);
                cout << "peek element : " << stack[top] << endl;
            }
        }
        else if (choise == 6) {
            if (top == -1) {
                cout << "Stack is empty can't print" << endl;
            }
            display(top, stack);
        }
        else if (choise == 7) {
            cout << "Exiting from system" << endl;
            break;
        }
        else {
            cout << "Invalid choise" << endl;
            cout << "enter correct choise" << endl;
            
        }

    }
    

    cout << endl << endl;
    return 0;
}