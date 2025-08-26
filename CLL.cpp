
#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }

    // Insert at the beginning
    void insertBegin(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    // Delete a node by value
    void deleteNode(int key) {
        if (!head) return;

        Node *curr = head, *prev = nullptr;
        while (curr->data != key) {
            if (curr->next == head) {
                cout << "Key not found\n";
                return;
            }
            prev = curr;
            curr = curr->next;
        }

        if (curr == head && curr->next == head) {
            delete curr;
            head = nullptr;
            return;
        }

        if (curr == head) {
            prev = head;
            while (prev->next != head)
                prev = prev->next;
            head = curr->next;
            prev->next = head;
        } else if (curr->next == head) {
            prev->next = head;
        } else {
            prev->next = curr->next;
        }

        delete curr;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(HEAD)\n";
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertEnd(30);
    cll.insertBegin(5);
    cll.display();

    cll.deleteNode(20);
    cll.display();

    return 0;
}
