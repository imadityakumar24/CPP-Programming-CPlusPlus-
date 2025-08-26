/*


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isVectorPresent(const vector<vector<int>>& matrix, const vector<int>& vec) {
    // Use std::find to search for vec in the matrix
    return find(matrix.begin(), matrix.end(), vec) != matrix.end();
}

void printMatrix( vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}


int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result;
    
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                vector <int> temp;
                if(nums[i] != nums[j] && 
                   nums[j] != nums[k] && 
                   nums[k] != nums[i] ) 
                {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        temp.push_back( nums[i] );
                        temp.push_back( nums[j] );
                        temp.push_back( nums[k] );
                        if(isVectorPresent(result, temp) == false) {
                            result.push_back(temp);
                        }
                    }
                }
            }
        }
    }
    
    printMatrix(result);



    return 0;
}


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isVectorPresent(const vector<vector<int>>& matrix, const vector<int>& vec) {
    // Check if vec is already present in matrix
    for (const auto& row : matrix) {
        if (row == vec) {
            return true;
        }
    }
    return false;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result;

    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                
                // Sort the temp vector to ignore order
                sort(temp.begin(), temp.end());

                // Check if the elements are distinct and sum to zero
                if (nums[i] != nums[j] && nums[j] != nums[k] && nums[k] != nums[i]) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        // Only add temp if it is not already in result
                        if (!isVectorPresent(result, temp)) {
                            result.push_back(temp);
                        }
                    }
                }
            }
        }
    }

    printMatrix(result);

    return 0;
}




