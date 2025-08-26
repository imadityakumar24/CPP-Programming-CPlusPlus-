#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    // Constructor
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Check if queue is full
    bool isFull() {
        return (rear + 1) % size == front;
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
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        cout << value << " enqueued." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << arr[front] << " dequeued." << endl;

        if (front == rear) {
            front = rear = -1; // queue becomes empty
        } else {
            front = (front + 1) % size;
        }
    }

    // Peek operation
    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    // Display operation
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }
};

// Main function to test queue
int main() {
    Queue q(5); // size of queue = 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // should be full now

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.peek();

    q.enqueue(60);
    q.enqueue(70); // try to enqueue in circular way

    q.display();

    return 0;
}





/*


#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Check if queue is empty
bool isEmpty() {
    return front == -1;
}

// Check if queue is full
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
        front = rear = -1; // Queue is now empty
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

// Display queue
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
    enqueue(50); // full now

    display();

    dequeue();
    dequeue();

    display();

    peek();

    enqueue(60);
    enqueue(70); // circular insert

    display();

    return 0;
}



*/
