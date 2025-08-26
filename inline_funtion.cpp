// inline funtion is a funtion that is expanded inline when it is called
// for reducing the time complexity we use the inline funtion
// when the inline funtion is called whole code of the inline funtion getss insserted or subsituted at the point of inline funtion call
// the susbsittution is performed by the c++ compoler at compile time
// inline funtion mau increase afficency if it is small
// if we used loops then we cant able to use inline funtion

#include <bits/stdc++.h>
using namespace std;

inline void rahul() {
    cout << "hello handsome" << endl;
}

int main() {

    rahul(); // rahul defination full code is now here, we can't see but now after write inline , funton defination is here
    rahul();
    cout << "friend" << endl;

    return 0;
}