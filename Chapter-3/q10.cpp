// Program: Translate a number between 0 and 4 into the closest letter grade

#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a number between 0 and 4: ";
    cin >> num;

    string grade;

    if (num >= 3.85) grade = "A";
    else if (num >= 3.5) grade = "A-";
    else if (num >= 3.15) grade = "B+";
    else if (num >= 2.85) grade = "B";
    else if (num >= 2.5) grade = "B-";
    else if (num >= 2.15) grade = "C+";
    else if (num >= 1.85) grade = "C";
    else if (num >= 1.5) grade = "C-";
    else if (num >= 1.15) grade = "D+";
    else if (num >= 0.85) grade = "D";
    else if (num >= 0.5) grade = "D-";
    else grade = "F";

    cout << "The corresponding letter grade is: " << grade << endl;
    return 0;
}
