// Program: Computes total resistance of a circuit

#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3;

   
    cout << "Enter resistance R1 (ohms): ";
    cin >> R1;
    cout << "Enter resistance R2 (ohms): ";
    cin >> R2;
    cout << "Enter resistance R3 (ohms): ";
    cin >> R3;

    
    double R_parallel = (R2 * R3) / (R2 + R3);


    double R_total = R1 + R_parallel;

  cout << "Total resistance of the circuit: " << R_total << " ohms" << endl;

    return 0;
}
