// Program: Reads a number with comma and prints it without comma

#include <iostream>
#include <string>
using namespace std;

int main() {
    string number_with_comma;

    
    cout << "Please enter an integer between 1,000 and 999,999: ";
    cin >> number_with_comma;

    int n = number_with_comma.length();

  
    if (n < 5 || n > 7 || number_with_comma[n-4] != ',') {
        cout << "Error: Input must be in the format X,XXX or XX,XXX or XXX,XXX." << endl;
        return 1;
    }

  
    string first_part = number_with_comma.substr(0, n - 4);
    string last_part = number_with_comma.substr(n - 3, 3);

   
    string number_without_comma = first_part + last_part;

  
    cout << number_without_comma << endl;

    return 0;
}
