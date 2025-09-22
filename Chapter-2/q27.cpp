// Program: Calculates source voltage Vs based on power factor pf

#include <iostream>
#include <cmath>  
using namespace std;

int main() {

    const double P = 260.0;   
    const double Vt = 120.0;  
    const double R = 10.0;    
    double pf; 

  
    cout << "Enter power factor (between 0 and 1): ";
    cin >> pf;

    if (pf <= 0 || pf > 1) {
        cout << "Error: Power factor must be between 0 and 1." << endl;
        return 1;
    }

 
    double term1 = Vt * Vt * (R * P) / (Vt * Vt * pf * pf);
    double term2 = pow(R * P / Vt, 2);
    double Vs = sqrt(Vt * Vt + (R * P / (Vt * pf)) * (R * P / (Vt * pf)) - term2);

 
    cout << "Required source voltage Vs: " << Vs << " Vrms" << endl;

    return 0;
}
