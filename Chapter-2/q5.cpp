// Program: Computes distance, maximum, and minimum of two integers

#include <iostream>
#include <cmath>     
#include <algorithm>  
using namespace std;

int main() {
    int num1, num2;


    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;


    int distance = abs(num1 - num2);


    int maximum = max(num1, num2);
    int minimum = min(num1, num2);


    cout << "Distance: " << distance << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;

    return 0;
}
