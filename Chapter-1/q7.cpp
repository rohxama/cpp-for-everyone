// Program: Displays name inside a box

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Roma";   
    int length = name.length();

    // Top
    cout << "+";
    for (int i = 0; i < length + 2; i++) cout << "-";
    cout << "+" << endl;

    // Middle
    
    cout << "| " << name << " |" << endl;

    // Bottom 
    cout << "+";
    for (int i = 0; i < length + 2; i++) cout << "-";
    cout << "+" << endl;

    return 0;
}
