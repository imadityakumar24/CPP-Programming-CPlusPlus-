#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Insert new node after a given node
void insertAfter(Node* prevNode, int newData) {
    if (prevNode == nullptr) return;

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Delete a node after a given node
void deleteAfter(Node* prevNode) {
    if (prevNode == nullptr || prevNode->next == nullptr) return;

    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    delete temp;
}

int main() {
    // Create nodes
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    // Link nodes
    head->next = second;
    second->next = third;

    cout << "Initial list:\n";
    printList(head);

    // Insert node with value 5 after second
    insertAfter(second, 5);
    cout << "After inserting 5 after 2:\n";
    printList(head);

    // Delete node after second (which is 5)
    deleteAfter(second);
    cout << "After deleting node after 2:\n";
    printList(head);

    // Manually change link: head now skips second
    head->next = third;
    cout << "After skipping 2:\n";
    printList(head);

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}
