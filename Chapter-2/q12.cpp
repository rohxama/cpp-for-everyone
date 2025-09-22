// Program: Formats a 10-digit phone number into (XXX) XXX-XXXX

#include <iostream>
#include <string>  
using namespace std;

int main() {
    string phone_number;


    cout << "Enter a 10-digit phone number: ";
    cin >> phone_number;


    if (phone_number.length() != 10) {
        cout << "Error: Please enter exactly 10 digits." << endl;
        return 1;
    }


    string area_code = "(" + phone_number.substr(0, 3) + ")";
    string first_three = phone_number.substr(3, 3);
    string last_four = phone_number.substr(6, 4);


    string formatted_number = area_code + " " + first_three + "-" + last_four;


    cout << "Formatted phone number: " << formatted_number << endl;

    return 0;
}
