// iterator are like pointers
// with the help of these we can print the vectors values

#include<iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> v = {1,2,3,4,5,6,7};
    vector <int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // it start from 2 means we can start traversing from where we want
    cout << endl << endl;
    for(it = v.begin()+1; it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl << endl;
    for(it = v.begin()+1; it != v.end()-2; it++) {
        cout << *it << " ";
    }
    
    cout << endl << endl;
    vector <int> x = {1,2,3,4,5,6,7};
    vector <int> :: reverse_iterator rev;
    for(rev = x.rbegin(); rev != x.rend(); rev++) {
        cout << *rev << " ";
    }

    return 0;
}