#include <vector>
#include <iostream>
#include <algorithm> // for std::fill
using namespace std;

int main() {
    // Create a vector of 4 pairs
    vector< pair<int, int>> vec(4);

    // Use std::fill to fill all pairs with (0, 0)
    fill(vec.begin(), vec.end(), make_pair(0, 0));

    // Output the vector to check if values are set correctly
    for (const auto& p : vec) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }

    return 0;
}
