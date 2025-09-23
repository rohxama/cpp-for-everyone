// Program: Compare two floating point numbers up to 2 decimal places

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two floating point numbers: ";
    cin >> num1 >> num2;

    int n1 = round(num1 * 100);
    int n2 = round(num2 * 100);

    if (n1 == n2)
        cout << "They are the same up to two decimal places" << endl;
    else
        cout << "They are different." << endl;

    return 0;
}
