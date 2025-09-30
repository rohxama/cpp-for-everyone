// Program: Convert Integer to Roman Numerals (1 to 3999)
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer (1 - 3999): ";
    cin >> num;

    if (num <= 0 || num > 3999) {
        cout << "Error: Number must be between 1 and 3999." << endl;
        return 0;
    }


    string thousands[] = {"", "M", "MM", "MMM"};
    string hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};


    string roman = "";
    roman += thousands[num / 1000];
    roman += hundreds[(num % 1000) / 100];
    roman += tens[(num % 100) / 10];
    roman += ones[num % 10];

    cout << "Roman numeral: " << roman << endl;

    return 0;
}
