#include <iostream>
using namespace std;

// Function to display menu
void displayMenu() {
    cout << "\n------ Restaurant Menu ------\n";
    cout << "1. Burger        Rs.250\n";
    cout << "2. Pizza         Rs.800\n";
    cout << "3. Sandwich      Rs.200\n";
    cout << "4. Fries         Rs.150\n";
    cout << "5. Soft Drink    Rs.100\n";
    cout << "0. Exit\n";
}

// Function to calculate cost of selected item
double calculateItemCost(int choice, int quantity) {
    double price = 0;

    switch (choice) {
        case 1: price = 250;
		 break;
        case 2: price = 800;
		 break;
        case 3: price = 200;
		 break;
        case 4: price = 150;
		 break;
        case 5: price = 100;
		 break;
        default: price = 0;
    }

    return price * quantity;
}

// Function to calculate final bill with tax
double calculateFinalBill(double total) {
    double tax = total * 0.10;   // 10% tax
    return total + tax;
}

int main()
 {
    int choice, quantity;
    double totalBill = 0;

    do {
        displayMenu();
        cout << "Enter item number: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemCost = calculateItemCost(choice, quantity);
        totalBill += itemCost;

        cout << "Item cost: Rs." << itemCost << endl;

    } while (true);

    double finalBill = calculateFinalBill(totalBill);

    cout << "\nTotal before tax: Rs." << totalBill << endl;
    cout << "Total after 10% tax: Rs." << finalBill << endl;
    cout << "Thank you for visiting!\n";

    return 0;
}


