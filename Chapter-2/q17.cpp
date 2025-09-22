// Program: Prints a number with a comma separating the thousands

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int number;
    

    cout << "Please enter an integer between 1000 and 999999: ";
    cin >> number;

 
    if (number < 1000 || number > 999999) {
        cout << "Error: Number must be between 1000 and 999999." << endl;
        return 1;
    }

 
    int thousands = number / 1000;
    int remainder = number % 1000;

    
    cout << thousands << "," << setw(3) << setfill('0') << remainder << endl;

    return 0;
}
