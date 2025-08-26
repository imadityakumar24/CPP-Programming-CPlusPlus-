#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 1. Brute Force Method
bool isPrimeBrute(int n) {
    if (n < 2) return false;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count == 2;
}

// 2. Optimized Prime Check (till sqrt(n))
bool isPrimeOptimized(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 3. Sieve of Eratosthenes (for all primes up to n)
vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "\nPrime numbers up to " << n << " using different methods:\n";

    // Brute force
    cout << "\n[Brute Force] Primes: ";
    for (int i = 2; i <= n; i++) {
        if (isPrimeBrute(i)) cout << i << " ";
    }

    // Optimized
    cout << "\n[Optimized] Primes: ";
    for (int i = 2; i <= n; i++) {
        if (isPrimeOptimized(i)) cout << i << " ";
    }

    // Sieve
    cout << "\n[Sieve] Primes: ";
    vector<int> primes = sieve(n);
    for (int p : primes) cout << p << " ";

    return 0;
}
