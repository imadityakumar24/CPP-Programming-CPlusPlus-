/*

        ==============================
            EVENT MANAGEMENT SYSTEM
        ==============================

*/

#include <iostream>
#include <iomanip>
using namespace std;

// Abstract base class
class Event {
protected:
    string venue;
    string food;
    int guests;
    double costPerGuest;
    double baseCost;

public:
    virtual void inputDetails() = 0;
    virtual void calculateBudget() = 0;
    virtual void generateInvoice() = 0;
};

// Wedding event class
class Wedding : public Event {
public:
    void inputDetails() override {
        cout << "\n--- Wedding Booking ---\n";
        cout << "Enter Venue Name: ";
        cin.ignore();
        getline(cin, venue);
        cout << "Enter Food Type (Veg/Non-Veg): ";
        getline(cin, food);
        cout << "Enter Number of Guests: ";
        cin >> guests;

        baseCost = 50000; // decoration, stage, etc.
        costPerGuest = (food == "Veg") ? 700 : 1000;
    }

    void calculateBudget() override {
        // Already set values
    }

    void generateInvoice() override {
        double total = baseCost + (guests * costPerGuest);
        cout << fixed << setprecision(2);
        cout << "\n--- Wedding Invoice ---\n";
        cout << "Venue: " << venue << "\nFood: " << food
             << "\nGuests: " << guests
             << "\nBase Cost: ₹" << baseCost
             << "\nFood Cost: ₹" << guests * costPerGuest
             << "\nTotal Budget: ₹" << total << "\n";
    }
};

// Conference event class
class Conference : public Event {
public:
    void inputDetails() override {
        cout << "\n--- Conference Booking ---\n";
        cout << "Enter Venue Name: ";
        cin.ignore();
        getline(cin, venue);
        cout << "Enter Food Type (Veg/Non-Veg): ";
        getline(cin, food);
        cout << "Enter Number of Attendees: ";
        cin >> guests;

        baseCost = 30000; // equipment, mic, projector
        costPerGuest = (food == "Veg") ? 400 : 600;
    }

    void calculateBudget() override {}

    void generateInvoice() override {
        double total = baseCost + (guests * costPerGuest);
        cout << fixed << setprecision(2);
        cout << "\n--- Conference Invoice ---\n";
        cout << "Venue: " << venue << "\nFood: " << food
             << "\nAttendees: " << guests
             << "\nBase Cost: ₹" << baseCost
             << "\nFood Cost: ₹" << guests * costPerGuest
             << "\nTotal Budget: ₹" << total << "\n";
    }
};

// Party event class
class Party : public Event {
public:
    void inputDetails() override {
        cout << "\n--- Party Booking ---\n";
        cout << "Enter Venue Name: ";
        cin.ignore();
        getline(cin, venue);
        cout << "Enter Food Type (Veg/Non-Veg): ";
        getline(cin, food);
        cout << "Enter Number of Guests: ";
        cin >> guests;

        baseCost = 20000; // DJ, lights
        costPerGuest = (food == "Veg") ? 300 : 500;
    }

    void calculateBudget() override {}

    void generateInvoice() override {
        double total = baseCost + (guests * costPerGuest);
        cout << fixed << setprecision(2);
        cout << "\n--- Party Invoice ---\n";
        cout << "Venue: " << venue << "\nFood: " << food
             << "\nGuests: " << guests
             << "\nBase Cost: ₹" << baseCost
             << "\nFood Cost: ₹" << guests * costPerGuest
             << "\nTotal Budget: ₹" << total << "\n";
    }
};

int main() {
    int choice;
    Event* event = nullptr;

    do {
        cout << "\n==============================\n";
        cout << "     EVENT MANAGEMENT SYSTEM\n";
        cout << "==============================\n";
        cout << "1. Book Wedding\n2. Book Conference\n3. Book Party\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                event = new Wedding();
                break;
            case 2:
                event = new Conference();
                break;
            case 3:
                event = new Party();
                break;
            case 4:
                cout << "Thank you for using the system!\n";
                break;
            default:
                cout << "Invalid choice.\n";
                continue;
        }

        if (choice >= 1 && choice <= 3) {
            event->inputDetails();
            event->calculateBudget();
            event->generateInvoice();
            delete event;
        }

    } while (choice != 4);

    return 0;
}


/*

======= OUTPUT FORMAT ======== 

==============================
     EVENT MANAGEMENT SYSTEM
==============================
1. Book Wedding
2. Book Conference
3. Book Party
4. Exit
Enter your choice: 1

--- Wedding Booking ---
Enter Venue Name: Royal Palace
Enter Food Type (Veg/Non-Veg): Non-Veg
Enter Number of Guests: 100

--- Wedding Invoice ---
Venue: Royal Palace
Food: Non-Veg
Guests: 100
Base Cost: ₹50000.00
Food Cost: ₹100000.00
Total Budget: ₹150000.00

*/