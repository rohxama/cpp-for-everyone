// Program: Computes the total price of a bookstore order including tax and shipping

#include <iostream>
using namespace std;

int main() {
    double total_book_price;
    int number_of_books;


    cout << "Enter total book price ($): ";
    cin >> total_book_price;

    cout << "Enter number of books: ";
    cin >> number_of_books;

 
    double tax = total_book_price * 0.075;


    double shipping = number_of_books * 2.0;


    double order_price = total_book_price + tax + shipping;


    cout << "Total price of the order: $" << order_price << endl;

    return 0;
}
