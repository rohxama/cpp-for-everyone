// Program: Calculates area, perimeter, and diagonal of a rectangle

#include <iostream>
#include <cmath> // For sqrt()
using namespace std;

int main() {
    double length, width;


    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;


    double area = length * width;
    double perimeter = 2 * (length + width);
    double diagonal = sqrt(length * length + width * width);


    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;
}
