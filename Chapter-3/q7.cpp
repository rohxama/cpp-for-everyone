// Program: Check if numbers are increasing, decreasing, or neither

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a < b && b < c) {
        cout << "increasing" << endl;
    } else if (a > b && b > c) {
        cout << "decreasing" << endl;
    } else {
        cout << "neither" << endl;
    }

    return 0;
}
