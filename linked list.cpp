#include<iostream>

using namespace std;

int main() {
    struct Node {
        int data;
        Node* next;
    };

    Node* newNode, *head;
    head = nullptr;
    
    newNode = new Node;
    
    cout << "Enter the data: ";
    cin >> newNode->data;
    newNode->next = nullptr;

    head = newNode;

    return 0;
}
    