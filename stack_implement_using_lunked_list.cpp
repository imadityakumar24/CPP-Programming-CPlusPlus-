/* ===== STACK IMPLEMENTAION USING LINKED LIST ===== */

/*

Important Points about Stack
A stack is a linear data structure that follows the LIFO (Last In, First Out) principle, meaning the last element added is the first one removed.

Common operations include:

push(x) – Adds element x to the top.
pop() – Removes the top element.
peek()/top() – Views the top element without removing it.
isEmpty() – Checks if the stack is empty.
size() – Returns the number of elements in the stack.

Applications of stacks:

Managing function calls (especially recursion).
Expression evaluation (like postfix/infix).
Undo/redo features in text editors.
Backtracking (e.g., solving puzzles or mazes).
Web browser history.
Balanced parentheses checking.

Implementation can be done using:

Arrays
Linked lists
C++ STL: stack<int> s;

Advantages:

Simple and easy to implement.
Useful in reversing or tracking previous actions.

Limitations:

Fixed size if implemented with arrays.
Risk of overflow if memory is full or not managed.

*/


#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    cout << "Pushing: " << value << endl;
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void peek() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top/Peek element of stack is: " << top->data << endl;
    }
}

void pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Popped element is: " << top->data << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Display: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

int main() {
    cout << endl;

    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();

    cout << endl;
    return 0;
}