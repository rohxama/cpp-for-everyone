// Program: Determine the season based on month and day

#include <iostream>
using namespace std;

int main() {
    int month, day;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day (1-31): ";
    cin >> day;

    string season;

    if (month == 1 || month == 2 || month == 3) season = "Winter";
    else if (month == 4 || month == 5 || month == 6) season = "Spring";
    else if (month == 7 || month == 8 || month == 9) season = "Summer";
    else if (month == 10 || month == 11 || month == 12) season = "Fall";

    if (month % 3 == 0 && day >= 21) {
        if (season == "Winter") season = "Spring";
        else if (season == "Spring") season = "Summer";
        else if (season == "Summer") season = "Fall";
        else season = "Winter";
    }

    cout << "Season: " << season << endl;
    return 0;
}
