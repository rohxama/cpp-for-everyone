// Program: Prints the sum of the first ten positive integers (1 + 2 + ... + 10)

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;   
    }

    cout << "The sum of the first ten positive integers is: " << sum << endl;

    return 0;
}