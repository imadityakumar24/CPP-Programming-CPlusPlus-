// constructor
// class name same as constructor name
// when objects are created then it variables contains garbage values
// to overcome this problem we used constructor
// when objectsa are created tabhi variables mai value assignment ho jati hai 

#include<iostream>
using namespace std;


// problem without constucter 
// it printing garbage values 
class student{
    public:
    int x , y;
    //student() {
        
   // }
};

int main() {
    
    student a1, a2;
    cout << "a1.x = " << a1.x << endl; // now it print garbage values 
    cout << "a1.y = " << a1.y << endl; // now it print garbage values 
    cout << "a2.x = " << a2.x << endl; // now it print garbage values  
    cout << "a2.y = " << a2.y << endl; // now it print garbage values 
    
    return 0;
}


/*


// problem is now solved now in va
class student{
    public:
    int x , y;
    student() {
        cout << "Hello darling" << endl;
    }
};

int main() {
    
    student a1, a2; // when objects are created objects are automatically call don't need to call the funtion
    
    return 0;
}

*/

/*
// now problem is solved in variables dariectly assign 12 , 45 , now garbage values are not assigned to variables 
class student{
    public:
    int x , y;
    student() {
            x = 12;
            y = 45;
        cout << "Hello darling" << endl;
    }
};

int main() {
    
    student a1, a2;
    cout << a2.x << endl; // 12
    cout << a2.y << endl; // 45
    
    return 0;
}

*/

/*
class student{
    public:
    int x , y;
    student() {
            x = 12;
            y = 45;
        cout << "Hello darling" << endl;
    }
};

int main() {
    
    student a1, a2;
    cout << a2.x << endl; // 12
    cout << a2.y << endl; // 45
    a2.x = 5;
    a1.x = 6;
    cout << "a2.x = " << a2.x << endl;
    cout << "a1.x = " << a1.x << endl;
    
    return 0;
}

*/