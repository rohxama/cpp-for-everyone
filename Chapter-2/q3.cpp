// Program: Computes square, cube, and fourth power of a number

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num;


    cout << "Enter a number: ";
    cin >> num;


    double square = num * num;
    double cube = num * num * num;


    double fourth = pow(num, 4);


    cout << "Square: " << square << endl;
    cout << "Cube: " << cube << endl;
    cout << "Fourth power: " << fourth << endl;

    return 0;
}
