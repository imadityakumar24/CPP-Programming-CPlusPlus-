/*

        ======================================
            CRIME RECORD MANAGEMENT SYSTEM
        ======================================

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class FIR {
public:
    string firID, date, crimeType, victimName, location, status, officer;

    FIR(string id, string d, string ct, string vn, string loc)
        : firID(id), date(d), crimeType(ct), victimName(vn), location(loc), status("Pending"), officer("None") {}
};

class Criminal {
public:
    string criminalID, name, crimeInvolved, arrestDate, firID;
    int age;

    Criminal(string cid, string n, int a, string crime, string ad, string fid)
        : criminalID(cid), name(n), age(a), crimeInvolved(crime), arrestDate(ad), firID(fid) {}
};

class CrimeSystem {
private:
    vector<FIR> firList;
    vector<Criminal> criminalList;

    FIR* findFIR(string id) {
        for (auto& fir : firList) {
            if (fir.firID == id) return &fir;
        }
        return nullptr;
    }

public:
    void addFIR() {
        string id, date, crime, victim, location;
        cout << "\n--- Add New FIR ---\n";
        cout << "Enter FIR ID: ";
        cin >> id;
        cout << "Enter Date (DD-MM-YYYY): ";
        cin >> date;
        cout << "Enter Crime Type: ";
        cin.ignore();
        getline(cin, crime);
        cout << "Enter Victim Name: ";
        getline(cin, victim);
        cout << "Enter Location: ";
        getline(cin, location);
        firList.push_back(FIR(id, date, crime, victim, location));
        cout << "FIR added successfully.\n";
    }

    void viewFIRs() {
        cout << "\n--- All FIR Records ---\n";
        for (const auto& fir : firList) {
            cout << "\nFIR ID: " << fir.firID << "\nDate: " << fir.date << "\nCrime: " << fir.crimeType
                 << "\nVictim: " << fir.victimName << "\nLocation: " << fir.location
                 << "\nStatus: " << fir.status << "\nOfficer Assigned: " << fir.officer << "\n";
        }
    }

    void addCriminal() {
        string cid, name, crime, arrestDate, fid;
        int age;
        cout << "\n--- Add New Criminal ---\n";
        cout << "Enter Criminal ID: ";
        cin >> cid;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Crime Involved: ";
        getline(cin, crime);
        cout << "Enter Arrest Date (DD-MM-YYYY): ";
        cin >> arrestDate;
        cout << "Enter Associated FIR ID: ";
        cin >> fid;
        criminalList.push_back(Criminal(cid, name, age, crime, arrestDate, fid));
        cout << "Criminal record added successfully.\n";
    }

    void viewCriminals() {
        cout << "\n--- Criminal Records ---\n";
        for (const auto& c : criminalList) {
            cout << "\nCriminal ID: " << c.criminalID << "\nName: " << c.name << "\nAge: " << c.age
                 << "\nCrime: " << c.crimeInvolved << "\nArrested On: " << c.arrestDate
                 << "\nAssociated FIR: " << c.firID << "\n";
        }
    }

    void assignOfficer() {
        string fid, officer;
        cout << "\n--- Assign Officer ---\n";
        cout << "Enter FIR ID: ";
        cin >> fid;
        FIR* fir = findFIR(fid);
        if (fir) {
            cout << "Enter Officer Name: ";
            cin.ignore();
            getline(cin, officer);
            fir->officer = officer;
            cout << "Officer assigned successfully.\n";
        } else {
            cout << "FIR not found.\n";
        }
    }

    void updateStatus() {
        string fid, status;
        cout << "\n--- Update Case Status ---\n";
        cout << "Enter FIR ID: ";
        cin >> fid;
        FIR* fir = findFIR(fid);
        if (fir) {
            cout << "Enter New Status (Pending / Under Investigation / Closed): ";
            cin.ignore();
            getline(cin, status);
            fir->status = status;
            cout << "Case status updated successfully.\n";
        } else {
            cout << "FIR not found.\n";
        }
    }

    void searchFIR() {
        int option;
        string keyword;
        cout << "\n--- Search FIR ---\nSearch by:\n1. Victim Name\n2. Date\n3. Crime Type\n\nEnter your choice: ";
        cin >> option;
        cin.ignore();
        if (option == 1) {
            cout << "Enter Victim Name: ";
            getline(cin, keyword);
            for (auto& fir : firList) {
                if (fir.victimName == keyword)
                    displayFIR(fir);
            }
        } else if (option == 2) {
            cout << "Enter Date: ";
            getline(cin, keyword);
            for (auto& fir : firList) {
                if (fir.date == keyword)
                    displayFIR(fir);
            }
        } else if (option == 3) {
            cout << "Enter Crime Type: ";
            getline(cin, keyword);
            for (auto& fir : firList) {
                if (fir.crimeType == keyword)
                    displayFIR(fir);
            }
        } else {
            cout << "Invalid option.\n";
        }
    }

    void displayFIR(FIR& fir) {
        cout << "\nSearch Results:\nFIR ID: " << fir.firID << "\nDate: " << fir.date
             << "\nVictim: " << fir.victimName << "\nStatus: " << fir.status
             << "\nOfficer: " << fir.officer << "\n";
    }
};

int main() {
    CrimeSystem system;
    int choice;
    do {
        cout << "\n======================================\n";
        cout << "     CRIME RECORD MANAGEMENT SYSTEM\n";
        cout << "======================================\n";
        cout << "\n1. Add FIR\n2. View FIRs\n3. Add Criminal\n4. View Criminals\n";
        cout << "5. Assign Officer to Case\n6. Update Case Status\n7. Search Case\n8. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) system.addFIR();
        else if (choice == 2) system.viewFIRs();
        else if (choice == 3) system.addCriminal();
        else if (choice == 4) system.viewCriminals();
        else if (choice == 5) system.assignOfficer();
        else if (choice == 6) system.updateStatus();
        else if (choice == 7) system.searchFIR();
        else if (choice == 8) cout << "\nExiting Crime Record Management System...\nThank you!\n";
        else cout << "\nInvalid choice. Try again.\n";

    } while (choice != 8);

    return 0;
}


/*

========= OUTPUT FORMAT ==============


======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

1. Add FIR
2. View FIRs
3. Add Criminal
4. View Criminals
5. Assign Officer to Case
6. Update Case Status
7. Search Case
8. Exit

Enter your choice: 1

--- Add New FIR ---
Enter FIR ID: FIR101
Enter Date (DD-MM-YYYY): 25-06-2025
Enter Crime Type: Robbery
Enter Victim Name: Rahul Verma
Enter Location: Sector 12
FIR added successfully.

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 2

--- All FIR Records ---

FIR ID: FIR101
Date: 25-06-2025
Crime: Robbery
Victim: Rahul Verma
Location: Sector 12
Status: Pending
Officer Assigned: None

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 3

--- Add New Criminal ---
Enter Criminal ID: C001
Enter Name: Rakesh Yadav
Enter Age: 32
Enter Crime Involved: Robbery
Enter Arrest Date (DD-MM-YYYY): 24-06-2025
Criminal record added successfully.

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 4

--- Criminal Records ---

Criminal ID: C001
Name: Rakesh Yadav
Age: 32
Crime: Robbery
Arrested On: 24-06-2025
Associated FIR: FIR101

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 5

--- Assign Officer ---
Enter FIR ID: FIR101
Enter Officer Name: Insp. Arjun
Officer assigned successfully.

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 6

--- Update Case Status ---
Enter FIR ID: FIR101
Enter New Status (Pending / Under Investigation / Closed): Closed
Case status updated successfully.

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 7

--- Search FIR ---
Search by:
1. Victim Name
2. Date
3. Crime Type

Enter your choice: 3
Enter Crime Type: Robbery

Search Results:
FIR ID: FIR101
Date: 25-06-2025
Victim: Rahul Verma
Status: Closed
Officer: Insp. Arjun

======================================
     CRIME RECORD MANAGEMENT SYSTEM
======================================

Enter your choice: 8

Exiting Crime Record Management System...
Thank you!


*/
