// Program: Strict or lenient increasing/decreasing check

#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b, c;
    string mode;

    cout << "Choose mode (strict/lenient): ";
    cin >> mode;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (mode == "strict") {
        if (a < b && b < c) cout << "increasing" << endl;
        else if (a > b && b > c) cout << "decreasing" << endl;
        else cout << "neither" << endl;
    } else if (mode == "lenient") {
        if (a <= b && b <= c && (a < c)) cout << "increasing" << endl;
        else if (a >= b && b >= c && (a > c)) cout << "decreasing" << endl;
        else if (a == b && b == c) cout << "both increasing and decreasing" << endl;
        else cout << "neither" << endl;
    } else {
        cout << "Invalid mode" << endl;
    }

    return 0;
}
