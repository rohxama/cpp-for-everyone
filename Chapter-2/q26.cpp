// Program: Calculates liquid temperature from thermistor resistance

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
   
    const double R0 = 1075.0;   
    const double T0_C = 85.0;   
    const double Beta = 3969.0; 

    double R;

    
    cout << "Enter the thermistor resistance R (ohms): ";
    cin >> R;

    if (R <= 0) {
        cout << "Error: Resistance must be positive." << endl;
        return 1;
    }

   
    double T0_K = T0_C + 273.0;

    
    double T_K = 1.0 / ((1.0 / T0_K) + (1.0 / Beta) * log(R / R0));


    double T_C = T_K - 273.0;

   
    cout << "Liquid temperature: " << T_C << " °C" << endl;

    return 0;
}
