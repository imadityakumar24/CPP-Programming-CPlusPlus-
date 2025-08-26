
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int hash[26] = {0}; // For lowercase letters

    // Hashing characters
    for (char c : s) {
        hash[c - 'a']++; // Convert 'a' to index 0, 'b' to 1, etc.
    }

    // Check frequency of a character
    char query = 'l';
    cout << "Frequency of '" << query << "' is: " << hash[query - 'a'] << endl;

    return 0;
}



/*

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "Hello123@Hello!";
    unordered_map<char, int> hash;

    // Hashing characters
    for (char c : s) {
        hash[c]++;
    }

    // Check frequency of a character
    char query = 'H';
    cout << "Frequency of '" << query << "' is: " << hash[query] << endl;

    return 0;
}


*/