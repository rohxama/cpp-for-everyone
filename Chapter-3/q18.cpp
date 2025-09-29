// Program: Tax Calculator

#include <iostream>
#include <string>
using namespace std;

int main() {
    string status;
    double income, tax = 0.0;

    cout << "Enter filing status (single/married): ";
    cin >> status;
    cout << "Enter taxable income: ";
    cin >> income;

    if (status == "single") {
        if (income <= 8000)
            tax = 0.10 * income;
        else if (income <= 32000)
            tax = 800 + 0.15 * (income - 8000);
        else
            tax = 4400 + 0.25 * (income - 32000);
    }
    else if (status == "married") {
        if (income <= 16000)
            tax = 0.10 * income;
        else if (income <= 64000)
            tax = 1600 + 0.15 * (income - 16000);
        else
            tax = 8800 + 0.25 * (income - 64000);
    }
    else {
        cout << "Invalid status entered!" << endl;
        return 1;
    }

    cout << "Tax owed = $" << tax << endl;

    return 0;
}
