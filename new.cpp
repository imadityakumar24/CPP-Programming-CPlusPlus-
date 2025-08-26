#include<iostream>
using namespace std;

vector <long long> factorialNumber(long long N) {
    int const temp = N;
    if (N < 0) {
        return factorialNumber;
    }
    factorialNumber(N-1);
    int fact = 0;
    for(int i = 0; i < N; i++) {
        fact = fact * (N - i);
    }
    if(fact <= temp) 
        
}

int main() {
    int N;
    cout << "Enter N : ";
    cin >> N;
    
    factorialNumber(N);
    return 0;
}