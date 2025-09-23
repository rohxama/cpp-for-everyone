// Program: Compare two points in time (military format) and print which comes first

#include <iostream>
using namespace std;

int main() {
    int hour1, minute1, hour2, minute2;
    cout << "Enter first time (hour minute): ";
    cin >> hour1 >> minute1;
    cout << "Enter second time (hour minute): ";
    cin >> hour2 >> minute2;

    if (hour1 < hour2) {
        cout << hour1 << ":" << (minute1 < 10 ? "0" : "") << minute1
             << " comes first, then "
             << hour2 << ":" << (minute2 < 10 ? "0" : "") << minute2 << endl;
    }
    else if (hour1 == hour2) {
        if (minute1 < minute2) {
            cout << hour1 << ":" << (minute1 < 10 ? "0" : "") << minute1
                 << " comes first, then "
                 << hour2 << ":" << (minute2 < 10 ? "0" : "") << minute2 << endl;
        }
        else if (minute1 == minute2) {
            cout << "Both times are the same: "
                 << hour1 << ":" << (minute1 < 10 ? "0" : "") << minute1 << endl;
        }
        else {
            cout << hour2 << ":" << (minute2 < 10 ? "0" : "") << minute2
                 << " comes first, then "
                 << hour1 << ":" << (minute1 < 10 ? "0" : "") << minute1 << endl;
        }
    }
    else {
        cout << hour2 << ":" << (minute2 < 10 ? "0" : "") << minute2
             << " comes first, then "
             << hour1 << ":" << (minute1 < 10 ? "0" : "") << minute1 << endl;
    }

    return 0;
}
