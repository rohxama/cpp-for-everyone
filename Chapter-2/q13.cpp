// Program: Extracts dollars and cents from a price

#include <iostream>
using namespace std;

int main() {
    double price;
    int dollars, cents;


    cout << "Enter the price: $";
    cin >> price;

 
    dollars = static_cast<int>(price);


    cents = static_cast<int>((price - dollars) * 100 + 0.5);

 
    cout << "Dollars: " << dollars << endl;
    cout << "Cents: " << cents << endl;

    return 0;
}
