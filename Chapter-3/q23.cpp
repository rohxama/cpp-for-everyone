// Program: Days in a Month
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 0;
    }

    bool has31 = (month == 1 || month == 3 || month == 5 || 
                  month == 7 || month == 8 || month == 10 || month == 12);

    bool has30 = (month == 4 || month == 6 || month == 9 || month == 11);

    if (month == 2) {
        cout << "28 or 29 days" << endl;
    } else if (has31) {
        cout << "31 days" << endl;
    } else if (has30) {
        cout << "30 days" << endl;
    }

    return 0;
}
