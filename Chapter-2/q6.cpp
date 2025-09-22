// Program: Converts a measurement in meters to miles, feet, and inches

#include <iostream>
using namespace std;

int main() {
    double meters;


    const double METER_TO_MILE = 0.000621371;
    const double METER_TO_FEET = 3.28084;
    const double METER_TO_INCH = 39.3701;


    cout << "Enter measurement in meters: ";
    cin >> meters;


    double miles = meters * METER_TO_MILE;
    double feet = meters * METER_TO_FEET;
    double inches = meters * METER_TO_INCH;


    cout << meters << " meters is equal to:" << endl;
    cout << miles << " miles" << endl;
    cout << feet << " feet" << endl;
    cout << inches << " inches" << endl;

    return 0;
}
