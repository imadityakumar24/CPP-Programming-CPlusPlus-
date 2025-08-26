/*

Concept: What is a Circular Array?
A circular array (or ring buffer) is a linear data structure that treats the array as if it were connected end-to-end.

When we reach the end of the array, we wrap around to the beginning.

Useful in queues, buffering, round-robin scheduling, etc.

Key Idea: Index Wrapping
If you're at index i, and want to go to the next index:

cpp
Copy
Edit
next_index = (i + 1) % size;
To go to the previous index:

cpp
Copy
Edit
prev_index = (i - 1 + size) % size;
This % size ensures circular behavior.

*/



#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int circularArray[n] = {10, 20, 30, 40, 50};

    // Traverse circularly from index 0 to 2n - 1 (10 elements total)
    for (int i = 0; i < 10; i++) {
        int index = i % n;
        cout << "Element at circular index " << i << " is: " << circularArray[index] << endl;
    }

    return 0;
}


/*

Element at circular index 0 is: 10
Element at circular index 1 is: 20
Element at circular index 2 is: 30
Element at circular index 3 is: 40
Element at circular index 4 is: 50
Element at circular index 5 is: 10
Element at circular index 6 is: 20
Element at circular index 7 is: 30
Element at circular index 8 is: 40
Element at circular index 9 is: 50

*/