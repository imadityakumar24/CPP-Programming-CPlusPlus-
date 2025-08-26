
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = nullptr;
    }
};

// Doubly Circular Linked List class
class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int data) {
        Node* newNode = new Node(data);

        if (!head) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
            return;
        }

        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }

    // Insert at the beginning
    void insertBegin(int data) {
        insertEnd(data);
        head = head->prev; // Move head to the newly inserted node
    }

    // Delete a node by value
    void deleteNode(int key) {
        if (!head) return;

        Node* curr = head;
        Node* prevNode = nullptr;

        while (curr->data != key) {
            if (curr->next == head) {
                cout << "Key not found\n";
                return;
            }
            prevNode = curr;
            curr = curr->next;
        }

        if (curr == head && curr->next == head) {
            delete curr;
            head = nullptr;
            return;
        }

        if (curr == head) {
            Node* last = head->prev;
            head = head->next;
            last->next = head;
            head->prev = last;
        } else if (curr->next == head) {
            prevNode->next = head;
            head->prev = prevNode;
        } else {
            prevNode->next = curr->next;
            curr->next->prev = prevNode;
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
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(HEAD)\n";
    }
};

int main() {
    DoublyCircularLinkedList dcll;

    dcll.insertEnd(10);
    dcll.insertEnd(20);
    dcll.insertEnd(30);
    dcll.insertBegin(5);
    dcll.display();

    dcll.deleteNode(20);
    dcll.display();

    return 0;
}
