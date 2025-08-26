#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> digits = {89, 8, 0, 5, 3, 6};

    // Clear all elements
    digits.clear();

    // Free unused memory
    digits.shrink_to_fit();

    // Check size and capacity
    cout << "Size: " << digits.size() << endl;
    cout << "Capacity: " << digits.capacity() << endl;

    return 0;
}
    