// Program: Breaks an integer into individual digits

#include <iostream>
using namespace std;

int main() {
    int number;

  
    cout << "Enter an integer (0 - 99999): ";
    cin >> number;

    if (number < 0 || number > 99999) {
        cout << "Error: Number must be between 0 and 99999." << endl;
        return 1;
    }

    
    int ten_thousands = number / 10000;
    int thousands = (number / 1000) % 10;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int ones = number % 10;

   
    if (ten_thousands != 0) cout << ten_thousands << " ";
    if (ten_thousands != 0 || thousands != 0) cout << thousands << " ";
    if (ten_thousands != 0 || thousands != 0 || hundreds != 0) cout << hundreds << " ";
    if (ten_thousands != 0 || thousands != 0 || hundreds != 0 || tens != 0) cout << tens << " ";
    cout << ones << endl;

    return 0;
}
