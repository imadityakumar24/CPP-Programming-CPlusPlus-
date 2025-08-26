
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector<int> nums = {0, 0, 1,1,1, 1, 1, 0, 0, 1, 1, 0, 0};
    int lcount = 0, count = 0, maxv = 0; 
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            count++;
        } else {
            lcount = max(lcount, count);
            count = 0;
        }
    }
    maxv = max(lcount, count);  // This is to check the last sequence of ones if the array ends with ones
    cout << maxv << " consecutive ones in array" << endl;
    return 0;
}



/*

int main()
{
    cout << "Hello World!" << endl;
    vector <int> nums = {0,0,1,1,1,0,0,1,1,0,0};
    int lcount = 0, count = 0, maxv; 
    for(int i = 0; i < nums.size(); i++){
        while(nums[i] != 0) {
            count++;
            i++;
        }
        lcount = count;
        count = 0;
        maxv = *max(maxv , count, lcount);
    }
    cout << maxv << " cosiquotes ones in array " << endl;
    return 0;
}


*/