#include <iostream>
using namespace std;

// Definition for a linked list node
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Solution class
class Solution {
private:
    // Function to reverse the linked list
    Node* reverse(Node* head) {
        Node* prev = nullptr, *curr = head, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    // Function to add 1 to the linked list number
    Node* addOne(Node* head) {
        head = reverse(head);  // Step 1: Reverse the list
        Node* temp = head;
        int carry = 1;  // Step 2: Start carry with 1

        while (temp) {
            temp->data += carry;
            if (temp->data == 10) {
                temp->data = 0;
                carry = 1;
            } else {
                carry = 0;
                break;  // No more carry, exit loop
            }
            if (temp->next == nullptr && carry) {
                temp->next = new Node(1);  // Step 3: If last node still has carry, add new node
                carry = 0;
            }
            temp = temp->next;
        }

        return reverse(head);  // Step 4: Reverse back
    }
};

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

// Function to create a linked list from an integer array
Node* createList(int arr[], int size) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < size; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Main function to test the solution
int main() {
    int arr[] = {9, 9, 9};  // Example input
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createList(arr, size);
    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.addOne(head);

    cout << "Updated List: ";
    printList(head);

    return 0;
}
