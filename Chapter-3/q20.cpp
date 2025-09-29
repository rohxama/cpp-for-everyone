// Program: Compute actual U.S. federal income tax using 2025 brackets 

#include <iostream>
using namespace std;

double taxForSingle(double income) {
    double tax = 0.0;
    if (income <= 11925) {
        tax = 0.10 * income;
    } else if (income <= 48475) {
        tax = 0.10 * 11925 + 0.12 * (income - 11925);
    } else if (income <= 103350) {
        tax = 0.10 * 11925
            + 0.12 * (48475 - 11925)
            + 0.22 * (income - 48475);
    } else if (income <= 197300) {
        tax = 0.10 * 11925
            + 0.12 * (48475 - 11925)
            + 0.22 * (103350 - 48475)
            + 0.24 * (income - 103350);
    } else if (income <= 250525) {
        tax = 0.10 * 11925
            + 0.12 * (48475 - 11925)
            + 0.22 * (103350 - 48475)
            + 0.24 * (197300 - 103350)
            + 0.32 * (income - 197300);
    } else if (income <= 626350) {
        tax = 0.10 * 11925
            + 0.12 * (48475 - 11925)
            + 0.22 * (103350 - 48475)
            + 0.24 * (197300 - 103350)
            + 0.32 * (250525 - 197300)
            + 0.35 * (income - 250525);
    } else {
        tax = 0.10 * 11925
            + 0.12 * (48475 - 11925)
            + 0.22 * (103350 - 48475)
            + 0.24 * (197300 - 103350)
            + 0.32 * (250525 - 197300)
            + 0.35 * (626350 - 250525)
            + 0.37 * (income - 626350);
    }
    return tax;
}

double taxForMarried(double income) {
    double tax = 0.0;
    if (income <= 23850) {
        tax = 0.10 * income;
    } else if (income <= 96950) {
        tax = 0.10 * 23850 + 0.12 * (income - 23850);
    } else if (income <= 206700) {
        tax = 0.10 * 23850
            + 0.12 * (96950 - 23850)
            + 0.22 * (income - 96950);
    } else if (income <= 394600) {
        tax = 0.10 * 23850
            + 0.12 * (96950 - 23850)
            + 0.22 * (206700 - 96950)
            + 0.24 * (income - 206700);
    } else if (income <= 501050) {
        tax = 0.10 * 23850
            + 0.12 * (96950 - 23850)
            + 0.22 * (206700 - 96950)
            + 0.24 * (394600 - 206700)
            + 0.32 * (income - 394600);
    } else if (income <= 751600) {
        tax = 0.10 * 23850
            + 0.12 * (96950 - 23850)
            + 0.22 * (206700 - 96950)
            + 0.24 * (394600 - 206700)
            + 0.32 * (501050 - 394600)
            + 0.35 * (income - 501050);
    } else {
        tax = 0.10 * 23850
            + 0.12 * (96950 - 23850)
            + 0.22 * (206700 - 96950)
            + 0.24 * (394600 - 206700)
            + 0.32 * (501050 - 394600)
            + 0.35 * (751600 - 501050)
            + 0.37 * (income - 751600);
    }
    return tax;
}

int main() {
    string status;
    double income;

    cout << "Enter filing status (single / married): ";
    cin >> status;
    cout << "Enter taxable income: ";
    cin >> income;

    double tax = 0.0;
    if (status == "single") {
        tax = taxForSingle(income);
    } else if (status == "married") {
        tax = taxForMarried(income);
    } else {
        cout << "Invalid status entered!" << endl;
        return 1;
    }

    cout << "Tax owed = $" << tax << endl;
    return 0;
}
