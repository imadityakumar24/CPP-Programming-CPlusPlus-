
/*
#include<iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string replaceKey(string word, int position) {
    if (word.empty()) {
        return word;
    }
    
    if (word[position] == 'p') {
        if (word[position + 1] == 'i') {
            string leftString = word.substr(0, position+1);
            string rightString = word.substr(position, word.size());
            word = leftString + '3.14' + rightString;
            position += 2;
            replacekey(word, position);
        }
    }
    else {
        position += 1;
        replaceKey(word, position);
    }
}

int main() {

    string word = "pixes";
    string key = "pi";
    
    string newWord = replaceKey(word, 0);
    cout << word << endl;
    cout << newWord << endl;
    
    return 0;
}

*/


#include<iostream>
#include<string>
using namespace std;

string replaceKey(string word, int position) {
    // Base condition: if position reaches end or one before end
    if (position >= word.length() - 1) {
        return word;
    }

    // Check for "pi"
    if (word[position] == 'p' && word[position + 1] == 'i') {
        string left = word.substr(0, position);
        string right = word.substr(position + 2);
        word = left + "3.14" + right;
        return replaceKey(word, position + 4); // move past "3.14"
    } else {
        return replaceKey(word, position + 1);
    }
}

int main() {
    string word = "pixespi";
    string newWord = replaceKey(word, 0);

    cout << "Original: " << word << endl;
    cout << "Modified: " << newWord << endl;

    return 0;
}


/*

#include<iostream>
#include<string>
using namespace std;

void replaceKey(string &word, int position) {
    if (position >= word.length() - 1) {
        return;
    }

    if (word[position] == 'p' && word[position + 1] == 'i') {
        word = word.substr(0, position) + "3.14" + word.substr(position + 2);
        replaceKey(word, position + 4); // move past the inserted "3.14"
    } else {
        replaceKey(word, position + 1);
    }
}

int main() {
    string word = "pixespi";
    replaceKey(word, 0);

    cout << "Modified: " << word << endl;

    return 0;
}


*/
