// Convert days into year , weak and days 

#include<iostream>
using namespace std;

int main() {

    int days ;
    cout << "enter the days : ";
    cin >> days;

    if (days < 7)
        cout << days << " days" << endl;
    else if (days == 7 || days < 365) {
        int remainder, division;
        remainder = days % 7;
        division = days / 7;
        cout << division << " weak " << remainder << " days"<< endl;

    }
    else {
        int upper, niche, saptah, din;
        if (days > 365 || days == 365) {
            upper = days / 365;// year
            niche = days % 365;
            saptah = niche / 7; // weak
            din = niche % 7;
            //  cout << upper << " year " << saptah << " waak " << din << " days"<< endl;
        }
        cout << upper << " year " << saptah << " waak " << din << " days"<< endl;
    }


    return 0;
}