// Program: Calculates change in dollars and coins

#include <iostream>
using namespace std;

int main() {
    double amount_due, amount_received;
    cout << "Enter the amount due ($): ";
    cin >> amount_due;
    cout << "Enter the amount received ($): ";
    cin >> amount_received;

    if (amount_received < amount_due) {
        cout << "Amount received is less than the amount due!" << endl;
        return 1;
    }

 
    int change_cents = static_cast<int>((amount_received - amount_due) * 100 + 0.5);


    int dollars = change_cents / 100;
    change_cents %= 100;


    int quarters = change_cents / 25;
    change_cents %= 25;

 
    int dimes = change_cents / 10;
    change_cents %= 10;


    int nickels = change_cents / 5;
    change_cents %= 5;


    int pennies = change_cents;

 
    cout << "Change to give:" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
