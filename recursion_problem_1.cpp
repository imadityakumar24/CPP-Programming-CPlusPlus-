// recursion problem 1

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    int partialAns = factorial(n-1);
    return n * partialAns;
}

int main() {
    int n;
    cin >> n;
    if(n < 0) {
        cout << "error" << endl;
    } else {
        cout << factorial(n) << endl;
    }
    return 0;
}
    