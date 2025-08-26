#include<iostream>
using namespace std;

int main() {

    int totalDays;
    cout << "Enter the number of days: ";
    cin >> totalDays;

    if (totalDays < 7)
        cout << totalDays << " days" << endl;
    else if (totalDays == 7 || totalDays < 365) {
        int remainingDays, weeks;
        remainingDays = totalDays % 7;
        weeks = totalDays / 7;
        cout << weeks << " week(s) " << remainingDays << " day(s)" << endl;
    }
    else {
        int years, remainingDaysAfterYears, weeks, remainingDays;
        if (totalDays >= 365) {
            years = totalDays / 365;  // years
            remainingDaysAfterYears = totalDays % 365;  // days left after calculating years
            weeks = remainingDaysAfterYears / 7;  // weeks from the remaining days
            remainingDays = remainingDaysAfterYears % 7;  // remaining days
        }
        cout << years << " year(s) " << weeks << " week(s) " << remainingDays << " day(s)" << endl;
    }

    return 0;
}
