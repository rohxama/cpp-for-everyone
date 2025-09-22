// Program: Transforms numbers 1-12 into month names

#include <iostream>
#include <string>
using namespace std;

int main() {
    int month_number;
    
   
    cout << "Enter a month number (1-12): ";
    cin >> month_number;

    if (month_number < 1 || month_number > 12) {
        cout << "Error: Month number must be between 1 and 12." << endl;
        return 1;
    }

  
    const string months =
        "January  "
        "February "
        "March    "
        "April    "
        "May      "
        "June     "
        "July     "
        "August   "
        "September"
        "October  "
        "November "
        "December ";

    int month_length = 9; 
    int start_index = (month_number - 1) * month_length;


    string month_name = months.substr(start_index, month_length);

   
    month_name = month_name.substr(0, month_name.find_last_not_of(' ') + 1);

  
    cout << "Month: " << month_name << endl;

    return 0;
}
