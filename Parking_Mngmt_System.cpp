
/*

========== PARKING LOT MANAGEMENT SYSTEM ==========

*/

#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

// Base Vehicle class
class Vehicle {
protected:
    string number;
    time_t entryTime;
    time_t exitTime;

public:
    Vehicle(string num) : number(num) {
        entryTime = time(0); // store entry time
    }

    virtual double calculateFee() = 0;

    virtual string getType() = 0;

    void exit() {
        exitTime = time(0); // store exit time
    }

    double getDurationHours() {
        return difftime(exitTime, entryTime) / 3600.0; // duration in hours
    }

    void printInfo() {
        cout << "\nVehicle Type: " << getType()
             << "\nNumber: " << number
             << "\nEntry Time: " << ctime(&entryTime)
             << "Exit Time: " << ctime(&exitTime)
             << fixed << setprecision(2)
             << "Duration: " << getDurationHours() << " hours"
             << "\nFee: ₹" << calculateFee() << "\n";
    }

    string getNumber() {
        return number;
    }
};

// Derived classes
class Bike : public Vehicle {
public:
    Bike(string num) : Vehicle(num) {}

    double calculateFee() override {
        double hours = getDurationHours();
        return 10 + hours * 5; // base + hourly
    }

    string getType() override {
        return "Bike";
    }
};

class Car : public Vehicle {
public:
    Car(string num) : Vehicle(num) {}

    double calculateFee() override {
        double hours = getDurationHours();
        return 20 + hours * 10;
    }

    string getType() override {
        return "Car";
    }
};

class Truck : public Vehicle {
public:
    Truck(string num) : Vehicle(num) {}

    double calculateFee() override {
        double hours = getDurationHours();
        return 30 + hours * 20;
    }

    string getType() override {
        return "Truck";
    }
};

// Parking lot manager
class ParkingLot {
private:
    vector<Vehicle*> parkedVehicles;

public:
    void parkVehicle() {
        int type;
        string number;
        cout << "\nEnter Vehicle Number: ";
        cin >> number;
        cout << "Select Vehicle Type:\n1. Bike\n2. Car\n3. Truck\nChoice: ";
        cin >> type;

        Vehicle* v = nullptr;
        switch (type) {
            case 1: v = new Bike(number); break;
            case 2: v = new Car(number); break;
            case 3: v = new Truck(number); break;
            default: cout << "Invalid type!\n"; return;
        }

        parkedVehicles.push_back(v);
        cout << "Vehicle parked successfully!\n";
    }

    void exitVehicle() {
        string number;
        cout << "\nEnter Vehicle Number to Exit: ";
        cin >> number;

        for (auto it = parkedVehicles.begin(); it != parkedVehicles.end(); ++it) {
            if ((*it)->getNumber() == number) {
                (*it)->exit();
                (*it)->printInfo();
                delete *it;
                parkedVehicles.erase(it);
                return;
            }
        }

        cout << "Vehicle not found!\n";
    }

    void showParkedVehicles() {
        cout << "\n--- Currently Parked Vehicles ---\n";
        for (auto* v : parkedVehicles) {
            cout << v->getType() << " - " << v->getNumber() << "\n";
        }
        if (parkedVehicles.empty()) {
            cout << "No vehicles parked.\n";
        }
    }
};

int main() {
    ParkingLot lot;
    int choice;

    do {
        cout << "\n========== PARKING LOT MENU ==========\n";
        cout << "1. Park Vehicle\n2. Exit Vehicle\n3. Show Parked Vehicles\n4. Exit Program\n";
        cout << endl << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lot.parkVehicle(); break;
            case 2: lot.exitVehicle(); break;
            case 3: lot.showParkedVehicles(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}


/*

======= OUTPUT FORMAT ======== 

========== PARKING LOT MENU ==========

1. Park Vehicle
2. Exit Vehicle
3. Show Parked Vehicles
4. Exit Program1
Enter your choice: 1

Enter Vehicle Number: UP32AB1234
Select Vehicle Type:
1. Bike
2. Car
3. Truck
Choice: 2
Vehicle parked successfully!

========== PARKING LOT MENU ==========
Enter your choice: 3
--- Currently Parked Vehicles ---
Car - UP32AB1234

========== PARKING LOT MENU ==========
Enter your choice: 2
Enter Vehicle Number to Exit: UP32AB1234

Vehicle Type: Car
Number: UP32AB1234
Entry Time: Tue Jun 25 15:12:05 2025
Exit Time: Tue Jun 25 15:15:05 2025
Duration: 0.05 hours
Fee: ₹20.50

*/