// Program: Circumference and Diagonal of Letter-size Paper in Inches

#include <iostream>
#include <cmath> 
using namespace std;

int main() {

    const double WIDTH = 8.5;   
    const double HEIGHT = 11.0;

    // circumference formula
    double circumference = 2 * (WIDTH + HEIGHT);

    // diagonal formula 
    double diagonal = sqrt(WIDTH * WIDTH + HEIGHT * HEIGHT);

 
    cout << "Letter-size paper dimensions:" << endl;
    cout << "Width: " << WIDTH << " inches" << endl;
    cout << "Height: " << HEIGHT << " inches" << endl;
    cout << "Circumference: " << circumference << " inches" << endl;
    cout << "Diagonal: " << diagonal << " inches" << endl;

    return 0;
}
