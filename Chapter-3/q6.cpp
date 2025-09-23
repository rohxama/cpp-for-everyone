// Program: Check if three numbers are all same, all different, or neither

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "all the same" << endl;
    } else if (a != b && b != c && a != c) {
        cout << "all different" << endl;
    } else {
        cout << "neither" << endl;
    }

    return 0;
}
