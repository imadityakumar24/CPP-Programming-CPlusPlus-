#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isVectorPresent(const vector<vector<int>>& matrix, const vector<int>& vec) {
    // Use std::find to search for vec in the matrix
    return find(matrix.begin(), matrix.end(), vec) != matrix.end();
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> vecToCheck = {4, 5, 6};

    if (isVectorPresent(matrix, vecToCheck)) {
        cout << "Vector is present in the matrix." << endl;
    } else {
        cout << "Vector is not present in the matrix." << endl;
    }

    return 0;
}
