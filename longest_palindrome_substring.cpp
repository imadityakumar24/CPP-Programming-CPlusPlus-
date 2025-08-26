// Longest palindrome substring leetcode medium of hard level 

// tc = o(n^2)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int start = 0, maxLen = 0;
    int n = s.size();

    // Helper function to expand around center
    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1; // Length of palindrome
    };

    for (int i = 0; i < n; i++) {
        int len1 = expand(i, i);       // Odd-length palindrome
        int len2 = expand(i, i + 1);   // Even-length palindrome
        int len = max(len1, len2);

        if (len > maxLen) {
            maxLen = len;
            start = i - (len - 1) / 2; // Update start position
        }
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = longestPalindrome(s);

    cout << "Longest palindrome string : " << result << endl;

    return 0;
}



/*
// tc = o(n^3)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    string ans = "";
    int maxLen = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++){
            string copystring = s.substr(i, j - i + 1); // always use j-i+1 for extracting string don't use j++
            // string copystring = s.substr(i, j++); // wrong
            // string copystring = s.substr(i, j+1); // wrong
            string reversestring = copystring;
            reverse(reversestring.begin(), reversestring.end());

            if (reversestring == copystring) {
                int length = j-i+1;

               // maxLen = max(maxLen, length);
               // if (maxLen > length) {
               //     string ans = copystring;
              //  }
                if (length > maxLen) { // Update longest palindrome
                    maxLen = length;
                    ans = copystring;
                }
            }

        }
    }

    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = longestPalindrome(s);

    cout << "Longest palindrome string : " << result << endl;

    return 0;
}
*/