// Program: Write a program that takes a single character as input and checks whether it is a vowel or a consonant.

#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    string input;
    cout << "Enter a single character: ";
    cin >> input;


    if (input.length() != 1) {
        cout << "Error: Invalid input!" << endl;
        return 0;
    }

    char ch = input[0];

 
    if (!isalpha(ch)) {
        cout << "Error: Invalid input!" << endl;
        return 0;
    }

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }

    return 0;
}