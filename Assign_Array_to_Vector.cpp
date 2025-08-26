#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    int arr[5] ={2,4,78,8,1};
    vector <int> v = { begin(arr), end(arr) };
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "" << endl;
    for(auto value : v) {
        cout << value << " ";
    }
    return 0;
}