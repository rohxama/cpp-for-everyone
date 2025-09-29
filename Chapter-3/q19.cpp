// Program: U.S. Income Tax Calculator

#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0;

    cout << "Enter your taxable income: ";
    cin >> income;

    if (income <= 50000)
        tax = 0.01 * income;
    else if (income <= 75000)
        tax = 0.01 * 50000 + 0.02 * (income - 50000);
    else if (income <= 100000)
        tax = 0.01 * 50000 + 0.02 * 25000 + 0.03 * (income - 75000);
    else if (income <= 250000)
        tax = 0.01 * 50000 + 0.02 * 25000 + 0.03 * 25000 + 0.04 * (income - 100000);
    else if (income <= 500000)
        tax = 0.01 * 50000 + 0.02 * 25000 + 0.03 * 25000 + 0.04 * 150000 + 0.05 * (income - 250000);
    else
        tax = 0.01 * 50000 + 0.02 * 25000 + 0.03 * 25000 + 0.04 * 150000 + 0.05 * 250000 + 0.06 * (income - 500000);

    cout << "Tax owed = $" << tax << endl;

    return 0;
}
