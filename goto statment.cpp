// continue statment



#include<iostream>
using namespace std;

int main() {

    cout << "Hello World!" << endl;
    goto end;
    cout << "aditya" << endl;
end:
    cout << "end" << endl;
    /*

        cout << "Hello World!" << endl;

        cout << "hi baby" << endl;
        cout << "awesome" << endl;
        top:
        cout << "Aditya " << endl;
        cout << "shambhavi" << endl;
        goto top;
        cout << "end program" << endl;

    */


    /*

    for (int k = 1; k <= 5; k++) {
        int age;
        cout << "enter age : " ;
        cin >> age;

        if (age > 10) {
            continue;
        }

        cout << "love you" << endl;
    }

    cout << endl << endl;

    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip iteration when i is 3
        }
        cout << i << " ";
    }

    */

    cout << endl << endl;

    /*

        for (int j = 1; j <= 5; j++) {
            string name;  // Use string to store the name
            cout << "Enter any girl name : ";
            cin >> name;
            cout << "awesome " << endl;

            if (name == "apurva" || name == "shambhavi") { // Compare name with strings
                continue;
                cout << "beautiful" << endl;
            }


            cout << "Hello ";
        }


    */

    return 0;
}



/*

#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip iteration when i is 3
        }
        cout << i << " ";
    }

    cout << endl << endl;

    for (int j = 1; j <= 5; j++) {
        char name[50];
        cout << "enter any girl name : ";
        cin >> name;

        char apurva , shambhavi;
        if (name ==  "apurva" ||  "shambhavi") {
            cout << "beautiful" << endl;
        }

        cout << "hello ";

    }

    return 0;
}


*/