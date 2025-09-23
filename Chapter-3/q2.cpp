// Program: Determine the state of water considering altitude effect

#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;
    double altitude;
    char altUnit;

    cout << "Enter temperature value: ";
    cin >> temp;
    cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;
    cout << "Enter altitude: ";
    cin >> altitude;
    cout << "Is this in meters (M) or feet (F)? ";
    cin >> altUnit;

    if (unit == 'F' || unit == 'f') {
        temp = (temp - 32) * 5.0 / 9.0;
    } else if (unit != 'C' && unit != 'c') {
        cout << "Invalid" << endl;
        return 1;
    }

    double boilingPoint = 100.0;
    if (altUnit == 'M' || altUnit == 'm') {
        boilingPoint -= altitude / 300.0;
    } else if (altUnit == 'F' || altUnit == 'f') {
        boilingPoint -= altitude / 1000.0;
    }

    if (temp <= 0) {
        cout << "At this temperature, water is solid." << endl;
    } else if (temp < boilingPoint) {
        cout << "At this temperature, water is liquid." << endl;
    } else {
        cout << "At this temperature, water is gas." << endl;
    }

    return 0;
}
