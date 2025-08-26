#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count the frequency of each character
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Store characters and their frequencies in a vector
        vector<pair<int, char>> freqVec;
        for (auto &it : freq) {
            freqVec.push_back({it.second, it.first});
        }

        // Step 3: Sort the vector in decreasing order of frequency
        sort(freqVec.rbegin(), freqVec.rend());

        // Step 4: Build the result string
        string result = "";
        for (auto &it : freqVec) {
            result += string(it.first, it.second); // Append character 'it.first' times
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "tree";
    cout << sol.frequencySort(s) << endl;

    return 0;
}
