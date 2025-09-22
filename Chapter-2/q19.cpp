// Program: Prints a Tic-Tac-Toe grid

#include <iostream>
#include <string>
using namespace std;

int main() {

    string comb = "+--+--+--+";
    string row = "|  |  |  |";


    for (int i = 0; i < 3; i++) {
        cout << comb << endl;
        cout << row << endl;
    }

    cout << comb << endl;

    return 0;
}
