// queue data structures 

#include <iostream>
#include <queue>

using namespace std;

int main() {


    queue<int> q;
    
    q.push(12);
    q.push(23);
    q.push(34);
    
    cout << "queue front is : " << q.front() << endl;
    
    cout << "size of queue is : " << q.size() << endl;
    
    q.pop();
    cout << "size of queue is : " << q.size() << endl;
    
    
    



    return 0;
}