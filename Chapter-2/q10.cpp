// Program: Determines 5-year total cost of owning a hybrid car

#include <iostream>
using namespace std;

int main() {
    double car_cost, miles_per_year, gas_price, resale_value, mpg;


    cout << "Enter the cost of the new car ($): ";
    cin >> car_cost;

    cout << "Enter estimated miles driven per year: ";
    cin >> miles_per_year;

    cout << "Enter estimated gas price ($ per gallon): ";
    cin >> gas_price;

    cout << "Enter estimated resale value after 5 years ($): ";
    cin >> resale_value;

    cout << "Enter fuel efficiency (miles per gallon): ";
    cin >> mpg;


    double total_miles = miles_per_year * 5;
    double total_gas_cost = (total_miles / mpg) * gas_price;
    double total_cost = car_cost + total_gas_cost - resale_value;


    cout << "\nTotal gas cost over 5 years: $" << total_gas_cost << endl;
    cout << "Total cost of owning the car for 5 years: $" << total_cost << endl;

    return 0;
}
