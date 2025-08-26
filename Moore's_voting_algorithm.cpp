///.    Moore's_voting_algorithm
// tc = O(n)
// sc = O(1)

// majority element means element shoul be appear more then n/2 times


// C++ implementation for the above approach
#include <iostream>
using namespace std;
// Function to find majority element
int findMajority(int arr[], int n)
{
    int i, candidate = -1, votes = 0;
    // Finding majority candidate
    for (i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = arr[i];
            votes = 1;
        }
        else {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    return -1;
}

int main() {
  //  int arr[] = { 1, 1, 1, 1, 2, 3, 4 }; 
    int arr[] = {3,3,2,3,3,1,2,3,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = findMajority(arr, n);
    cout << " The majority element is : " << majority;
    return 0;
}
