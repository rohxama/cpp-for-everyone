// Program: Calculates dew point temperature from relative humidity and actual temperature

#include <iostream>
#include <cmath> // for log()
using namespace std;

int main() {
    const double a = 17.27;
    const double b = 237.7;

    double T, RH;


    cout << "Enter the actual temperature (°C): ";
    cin >> T;
    cout << "Enter the relative humidity (between 0 and 1): ";
    cin >> RH;

   
    if (RH < 0 || RH > 1) {
        cout << "Error: Relative humidity must be between 0 and 1." << endl;
        return 1;
    }

    
    double alpha = ((a * T) / (b + T)) + log(RH);

  
    double Td = (b * alpha) / (a - alpha);

    
    cout << "Dew point temperature: " << Td << " °C" << endl;

    return 0;
}
