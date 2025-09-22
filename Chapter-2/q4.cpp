// Program: Computes sum, difference, product, and average of two integers

#include <iostream>
using namespace std;

int main() {
    int num1, num2;


    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;


    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double average = (num1 + num2) / 2.0; 


    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;

    return 0;
}
