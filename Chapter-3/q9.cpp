// Program: Translate letter grade into numeric value

#include <iostream>
#include <string>
using namespace std;

int main() {
    string grade;
    cout << "Enter a letter grade: ";
    cin >> grade;

    double value = 0.0;
    char letter = grade[0];
    char sign = (grade.size() > 1) ? grade[1] : ' ';

    if (letter == 'A') value = 4.0;
    else if (letter == 'B') value = 3.0;
    else if (letter == 'C') value = 2.0;
    else if (letter == 'D') value = 1.0;
    else if (letter == 'F') value = 0.0;
    else {
        cout << "Invalid" << endl;
        return 1;
    }

    if (letter != 'F') {
        if (sign == '+') {
            value += 0.3;
            if (letter == 'A') value = 4.0; 
        } else if (sign == '-') {
            value -= 0.3;
        }
    }

    cout << "The numeric value is " << value << endl;
    return 0;
}
