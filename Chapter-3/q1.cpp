// Program: Determine the state of water at a given temperature 

#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temp;
    cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        temp = (temp - 32) * 5.0 / 9.0;
    } else if (unit == 'C' || unit == 'c') {
    } else {
        cout << "Invalid unit entered!" << endl;
        return 1;
    }

    if (temp <= 0) {
        cout << "At this temperature, water is solid (ice)." << endl;
    } else if (temp < 100) {
        cout << "At this temperature, water is liquid." << endl;
    } else {
        cout << "At this temperature, water is gaseous (steam)." << endl;
    }

    return 0;
}
