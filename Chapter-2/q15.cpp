// Program: Calculates cost per 100 miles and distance car can travel

#include <iostream>
using namespace std;

int main() {
    double gallons, mpg, gas_price;

 
    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> gallons;
    cout << "Enter the fuel efficiency (miles per gallon): ";
    cin >> mpg;
    cout << "Enter the price of gas per gallon ($): ";
    cin >> gas_price;

 
    double cost_per_100_miles = (100 / mpg) * gas_price;
    double max_distance = gallons * mpg;


    cout << "Cost per 100 miles: $" << cost_per_100_miles << endl;
    cout << "Distance car can travel with current gas: " << max_distance << " miles" << endl;

    return 0;
}
