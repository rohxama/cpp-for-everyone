// Program: Calculates total money including bills and quarters

#include <iostream>
using namespace std;

int main() {
    int ones, fives, tens, twenties, quarters;


    cout << "Enter number of $1 bills: ";
    cin >> ones;
    cout << "Enter number of $5 bills: ";
    cin >> fives;
    cout << "Enter number of $10 bills: ";
    cin >> tens;
    cout << "Enter number of $20 bills: ";
    cin >> twenties;

 
    cout << "Enter number of quarters: ";
    cin >> quarters;


    double total = ones * 1 + fives * 5 + tens * 10 + twenties * 20 + quarters * 0.25;


    cout << "Total amount: $" << total << endl;

    return 0;
}
