#include <iostream>
#include <limits> 

using namespace std;

int main() {
    double balance = 1000.00; 
    int choice;
    double amount;

    while (true) {
        cout << "          ATM MENU            \n"
             << "1. Check Balance\n"
             << "2. Deposit Money\n"
             << "3. Withdraw Money\n"
             << "4. Exit\n"
             << "Enter your choice (1-4): ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a valid number from the menu.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; 
        }

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Successfully deposited $" << amount << ".\n";
                    cout << "New Balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount. Must be greater than 0.\n";
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid withdrawal amount. Must be greater than 0.\n";
                } else if (amount > balance) {
                    cout << "Transaction Declined: Insufficient funds!\n";
                } else {
                    balance -= amount;
                    cout << "Successfully withdrew $" << amount << ".\n";
                    cout << "Remaining Balance: $" << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0; 

            default:
                cout << "Invalid choice! Please choose an option between 1 and 4.\n";
                break;
        }
    }

    return 0;
}