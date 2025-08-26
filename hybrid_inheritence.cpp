// hybrid inheritence 
// it is a combination of two or more then two inheritences
// it is an example  of herarical and multiple inheritence

#include <bits/stdc++.h>
using namespace std;

class home {
public:
    string houseName = "Prajapati niwas";
};

class father : public home {
public:
    string s1Name = {"Shri ram"};
};

class mother : public home {
public:
    string s2Name = {"Yashoda devi"};
};

class daughter : public mother , public father {
public:
    string daughterName = "Shambhavi";
};

int main() {

    father object_1;
    cout  << endl << "with the help of father object , acces father , home" << endl;
    cout << "House name is : " << object_1.houseName << endl;
    cout << "Fathe name is : " << object_1.s1Name << endl;

    mother object_2;
    cout << endl << "with the help of mother object , access mother , home" << endl;
    cout << "Mother name is : " << object_2.s2Name << endl;
    cout << "House name is : " << object_1.houseName << endl;

    daughter object_3;
    cout << endl << "with the help of daughter object, access father, mother, home" << endl;
    cout << "Fathe name is : " << object_1.s1Name << endl;
    cout << "Mother name is : " << object_2.s2Name << endl;
    cout << "House name is : " << object_1.houseName << endl << endl;

    return 0;
}

/* // output is like this 

with the help of father object , acces father , home
House name is : Prajapati niwas
Fathe name is : Shri ram

with the help of mother object , access mother , home
Mother name is : Yashoda devi
House name is : Prajapati niwas

with the help of daughter object, access father, mother, home
Fathe name is : Shri ram
Mother name is : Yashoda devi
House name is : Prajapati niwas

*/