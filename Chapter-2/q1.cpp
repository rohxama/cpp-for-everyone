// Program: Letter-size Paper Dimensions in Millimeters

#include <iostream>
using namespace std;

int main() {
    const double INCH_TO_MM = 25.4;
    const double WIDTH_INCH = 8.5;
    const double HEIGHT_INCH = 11.0;

    double width_mm = WIDTH_INCH * INCH_TO_MM;
    double height_mm = HEIGHT_INCH * INCH_TO_MM;

    cout << "Letter-size paper dimensions:" << endl;
    cout << "Width: " << width_mm << " mm" << endl;
    cout << "Height: " << height_mm << " mm" << endl;

    return 0;
}
