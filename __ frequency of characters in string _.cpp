// frequency of characters in string 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "Enter the name : ";
    getline(cin, name);

    int j = 0;
    while (name[j] != '\0') {
        char checkcharacter = name[j];
        int count = 0;
        for(int i = 0; name[i] != '\0'; i++) {
            if (name[i] == checkcharacter)
                count++;
        }
        cout << checkcharacter << " is appear " << count << " times" << endl;
        j++;
    }

    /*
        int i = 0 , j = 0, count = 0, dublicate;
        while (name[j] != '\0') {
            dublicate = name[j];
            count = 0;
            while (name[i] != '\0') {
                if (dublicate == name[i]) {
                    count++;
                    //i++;
                }
                i++;
            }
            cout << name[i] << " is appear " << count << " times" << endl;
            j++;
        }
    */

    return 0;
}