#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Check if the queue is empty
bool isEmpty() {
    return front == -1;
}

// Check if the queue is full
bool isFull() {
    return (rear + 1) % SIZE == front;
}

// Enqueue operation
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full!" << endl;
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    cout << value << " enqueued." << endl;
}

// Dequeue operation
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << queue[front] << " dequeued." << endl;

    if (front == rear) {
        // Only one element was in queue
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Peek front element
void peek() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

// Display elements
void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue full here

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70); // Reuse space in circular way

    display();

    peek();

    return 0;
}




/*

10 enqueued.
20 enqueued.
30 enqueued.
40 enqueued.
50 enqueued.
Queue is full!
Queue elements: 10 20 30 40 50 
10 dequeued.
20 dequeued.
Queue elements: 30 40 50 
60 enqueued.
70 enqueued.
Queue elements: 30 40 50 60 70 
Front element: 30



*/