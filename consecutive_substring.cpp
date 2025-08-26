/*
#include <iostream>
#include <vector>
#include <string>

int main() {

    vector<string> str = {"flower", "flight", "flow"};
    string s1 = str[0];
    string s2 = str[1];
    cout << s1 << " " << s2;

    return 0;
}
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;  // Allows using vector and string without std::

int main() {
    // vector<string> str = {"flower", "flight", "flow"};
    vector<string> str = {"flower", "dbbsjs", "dhjs"};
    sort(str.begin(), str.end());
    int strsize = str.size();
    string s1 = str[0];
    string s2 = str[strsize-1];
    int n = s1.size(), m = s2.size();
    
    string ans = ""; int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j]) {
            ans += s1[i];
            i++;
            j++;
        } else {
            break;
        }
    }
    
    cout << "longest common prefix is : " << ans << endl;;    

    return 0;
}
    