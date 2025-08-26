#include <iostream>
#include <string>

using namespace std;

class StudentRecord {
    private:
    string name;
    int rollno;
    float feepaid;
    float feebalance;

    public:
    // Constructor to initialize data members
    StudentRecord(const string& n, int roll) : name(n), rollno(roll), feepaid(0), feebalance(0) {}

    // Function to save details
    void saveDetails(float totalFee) {
        feebalance = totalFee;
    }

    // Function to pay fee
    void payFee(float amount) {
        feepaid += amount;
        feebalance -= amount;
    }

    // Function to display record
    void displayRecord() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Fee Paid: " << feepaid << endl;
        cout << "Fee Balance: " << feebalance << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main() {
    const int numStudents = 5;
    StudentRecord students[numStudents] = {
        {"Alice", 101},
        {"Bob", 102},
        {"Charlie", 103},
        {"David", 104},
        {"Eve", 105}
    };

    float totalFee = 1000.0;  // Assuming total fee for each student is 1000

    // Saving details and displaying initial records
    for (int i = 0; i < numStudents; ++i) {
        students[i].saveDetails(totalFee);
        cout << "Initial Record for Student " << i + 1 << ":" << endl;
        students[i].displayRecord();
    }

    // Paying fees for some students and displaying updated records
    students[0].payFee(500);  // Alice pays 500
    students[2].payFee(800);  // Charlie pays 800

    cout << "Updated Records after Fee Payment:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayRecord();
    }

    return 0;
}
