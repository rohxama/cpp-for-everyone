// Program: Prints account balance after 1, 2, and 3 years with 5% interest

#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;   
    double rate = 0.05;         

    // Year 1
    balance = balance + balance * rate;
    cout << "Balance after 1 year: " << balance << endl;

    // Year 2
    balance = balance + balance * rate;
    cout << "Balance after 2 years: " << balance << endl;

    // Year 3
    balance = balance + balance * rate;
    cout << "Balance after 3 years: " << balance << endl;

    return 0;
}
