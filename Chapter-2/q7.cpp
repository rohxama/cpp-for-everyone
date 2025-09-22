// Program: Calculates area and circumference of a circle, and volume and surface area of a sphere

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double radius;


    cout << "Enter radius: ";
    cin >> radius;

    // Circle calculations
    double circle_area = M_PI * radius * radius;
    double circle_circumference = 2 * M_PI * radius;

    // Sphere calculations
    double sphere_volume = (4.0/3.0) * M_PI * pow(radius, 3);
    double sphere_surface_area = 4 * M_PI * radius * radius;

    cout << "Circle Area: " << circle_area << endl;
    cout << "Circle Circumference: " << circle_circumference << endl;
    cout << "Sphere Volume: " << sphere_volume << endl;
    cout << "Sphere Surface Area: " << sphere_surface_area << endl;

    return 0;
}
