
/*
// outpot Enter N : 6
1
2
6
*/

#include<iostream>
#include <vector>
using namespace std;

/*
int calculateFactorial(int MaxLimit) {
    int fact = 1;
    for(int i = 1; i <= MaxLimit; i++) {
        fact = fact * i;
    }
    return fact;
}
*/

// int calculateFactorial(int n);

vector <long long> factorialNumber(long long N) {
    vector <long long> factorial;

    for(int i = 1; i <= N; i++) {
        int temp = i;
        int fact = 1;
        for(int i = 1; i <= temp; i++) {
            fact = fact * i;
        }
        if(fact <= N) {
            factorial.push_back(fact);
        }
    }


    return factorial;

}

int main() {
    long long N;
    cout << "Enter N : ";
    cin >> N;

    vector <long long> ans = factorialNumber(N);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " " << endl;
    }
    return 0;
}