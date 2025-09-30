// Program: Water State with Altitude and Error Handling
#include <iostream>
#include <string>
using namespace std;

int main() {
    double temperature;
    char scale;
    double altitude;
    string unit;

    cout << "Enter temperature: ";
    if (!(cin >> temperature)) {
        cerr << "Error: Invalid temperature input!" << endl;
        return 1;
    }

    cout << "Enter scale (C/F): ";
    cin >> scale;
    if (scale != 'C' && scale != 'F' && scale != 'c' && scale != 'f') {
        cerr << "Error: Scale must be C or F." << endl;
        return 1;
    }

    cout << "Enter altitude value: ";
    if (!(cin >> altitude)) {
        cerr << "Error: Invalid altitude input!" << endl;
        return 1;
    }

    cout << "Enter unit (m/ft): ";
    cin >> unit;
    if (unit != "m" && unit != "ft") {
        cerr << "Error: Altitude unit must be 'm' or 'ft'." << endl;
        return 1;
    }

    double boilingPoint = 100.0;
    if (unit == "m") {
        boilingPoint -= altitude / 300.0;
    } else if (unit == "ft") {
        boilingPoint -= altitude / 1000.0;
    }

    if (scale == 'F' || scale == 'f') {
        temperature = (temperature - 32) * 5.0 / 9.0;
    }

    cout << "At altitude " << altitude << " " << unit
         << ", the boiling point of water is approx " << boilingPoint << " °C.\n";

    if (temperature <= 0) {
        cout << "Water is solid (ice)." << endl;
    } else if (temperature >= boilingPoint) {
        cout << "Water is gaseous (steam)." << endl;
    } else {
        cout << "Water is liquid." << endl;
    }

    return 0;
}
