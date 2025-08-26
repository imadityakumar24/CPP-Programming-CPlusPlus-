/* 


Node* copyRandomList(Node* head) {
    if (!head) return nullptr;

    // Step 1: Create new nodes next to originals
    Node* temp = head;
    while (temp) {
        Node* copy = new Node(temp->val);
        copy->next = temp->next;
        temp->next = copy;
        temp = copy->next;
    }

    // Step 2: Set random pointers of copy nodes
    temp = head;
    while (temp) {
        if (temp->random)
            temp->next->random = temp->random->next;
        temp = temp->next->next;
    }

    // Step 3: Separate the copy list from original
    Node* dummy = new Node(0);
    Node* copyTail = dummy;
    temp = head;
    while (temp) {
        copyTail->next = temp->next;
        copyTail = copyTail->next;

        temp->next = temp->next->next;
        temp = temp->next;
    }

    return dummy->next;
}

*/


/*

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

Node* copyRandomList(Node* head) {
    if (!head) return nullptr;

    unordered_map<Node*, Node*> nodeMap;

    // Step 1: Create new nodes and store mapping
    Node* temp = head;
    while (temp) {
        nodeMap[temp] = new Node(temp->val);
        temp = temp->next;
    }

    // Step 2: Set next and random pointers
    temp = head;
    while (temp) {
        nodeMap[temp]->next = nodeMap[temp->next];
        nodeMap[temp]->random = nodeMap[temp->random];
        temp = temp->next;
    }

    return nodeMap[head];
}

*/


/*

#include <iostream>
using namespace std;

// Node class definition (same as earlier)
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

// Your function (interweaving method)
Node* copyRandomList(Node* head) {
    if (!head) return nullptr;

    Node* temp = head;
    while (temp) {
        Node* copy = new Node(temp->val);
        copy->next = temp->next;
        temp->next = copy;
        temp = copy->next;
    }

    temp = head;
    while (temp) {
        if (temp->random)
            temp->next->random = temp->random->next;
        temp = temp->next->next;
    }

    Node* dummy = new Node(0);
    Node* copyTail = dummy;
    temp = head;
    while (temp) {
        copyTail->next = temp->next;
        copyTail = copyTail->next;

        temp->next = temp->next->next;
        temp = temp->next;
    }

    return dummy->next;
}

// Helper function to print list with random pointers
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << "Value: " << temp->val;
        if (temp->random)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    // Creating nodes
    Node* node1 = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);

    // Linking next pointers
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Linking random pointers
    node2->random = node1;
    node3->random = node5;
    node4->random = node3;
    node5->random = node1;

    // Print original list
    cout << "Original List:\n";
    printList(node1);

    // Make deep copy
    Node* copiedList = copyRandomList(node1);

    // Print copied list
    cout << "\nCopied List:\n";
    printList(copiedList);

    return 0;
}

*/



#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

Node* copyRandomList(Node* head) {
    if (!head) return nullptr;

    unordered_map<Node*, Node*> nodeMap;

    Node* temp = head;
    while (temp) {
        nodeMap[temp] = new Node(temp->val);
        temp = temp->next;
    }

    temp = head;
    while (temp) {
        nodeMap[temp]->next = nodeMap[temp->next];
        nodeMap[temp]->random = nodeMap[temp->random];
        temp = temp->next;
    }

    return nodeMap[head];
}

// Helper to print a linked list with random pointers
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << "Value: " << temp->val;
        if (temp->random)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    // Create example list: [[7,null],[13,0],[11,4],[10,2],[1,0]]
    Node* node1 = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);

    // Link next pointers
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Link random pointers
    node2->random = node1;
    node3->random = node5;
    node4->random = node3;
    node5->random = node1;

    // Print original list
    cout << "Original List:\n";
    printList(node1);

    // Create deep copy
    Node* copiedList = copyRandomList(node1);

    // Print copied list
    cout << "\nCopied List:\n";
    printList(copiedList);

    return 0;
}



