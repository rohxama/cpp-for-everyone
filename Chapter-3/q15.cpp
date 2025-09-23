// Program: Bank Transaction Simulation
#include <iostream>
using namespace std;

int main() {
    double checking, savings;

    // Input initial balances
    cout << "Enter initial balance for checking account: ";
    cin >> checking;
    if (checking < 0) {
        cout << "Error: Negative balance not allowed.\n";
        return 1;
    }

    cout << "Enter initial balance for savings account: ";
    cin >> savings;
    if (savings < 0) {
        cout << "Error: Negative balance not allowed.\n";
        return 1;
    }

    // Transaction input
    string transaction, account;
    double amount;

    cout << "\nEnter transaction type (deposit, withdrawal, transfer): ";
    cin >> transaction;

    cout << "Enter account (checking/savings): ";
    cin >> account;

    cout << "Enter amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Error: Amount must be positive.\n";
        return 1;
    }

    // Transaction Process
    if (transaction == "deposit") {
        if (account == "checking")
            checking += amount;
        else if (account == "savings")
            savings += amount;
        else {
            cout << "Error: Invalid account.\n";
            return 1;
        }
    }
    else if (transaction == "withdrawal") {
        if (account == "checking") {
            if (checking >= amount) checking -= amount;
            else {
                cout << "Error: Insufficient funds in checking.\n";
                return 1;
            }
        }
        else if (account == "savings") {
            if (savings >= amount) savings -= amount;
            else {
                cout << "Error: Insufficient funds in savings.\n";
                return 1;
            }
        }
        else {
            cout << "Error: Invalid account.\n";
            return 1;
        }
    }
    else if (transaction == "transfer") {
        if (account == "checking") {
            if (checking >= amount) {
                checking -= amount;
                savings += amount;
            } else {
                cout << "Error: Insufficient funds in checking.\n";
                return 1;
            }
        }
        else if (account == "savings") {
            if (savings >= amount) {
                savings -= amount;
                checking += amount;
            } else {
                cout << "Error: Insufficient funds in savings.\n";
                return 1;
            }
        }
        else {
            cout << "Error: Invalid account.\n";
            return 1;
        }
    }
    else {
        cout << "Error: Invalid transaction type.\n";
        return 1;
    }


    cout << "\nFinal Balances:\n";
    cout << "Checking: " << checking << endl;
    cout << "Savings: " << savings << endl;

    return 0;
}
