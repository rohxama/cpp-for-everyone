// Program: Count digits in an integer

#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0) num = -num;

    int digits = 1;
    while (num >= 10) {
        num /= 10;
        digits++;
    }

    cout << "The number has " << digits << " digits." << endl;
    return 0;
}
