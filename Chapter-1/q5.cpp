// Program: Prints the product of the first ten positive integers (1 × 2 × ... × 10)

#include <iostream>
using namespace std;

int main() {
    long long product = 1;  

    for (int i = 1; i <= 10; i++) {
        product *= i;
    }

    cout << "The product of the first ten positive integers is: " << product << endl;

    return 0;
}
