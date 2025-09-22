// Program: Computes the difference between two military times

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int time1, time2;

    
    cout << "Please enter the first time (HHMM): ";
    cin >> time1;
    cout << "Please enter the second time (HHMM): ";
    cin >> time2;

   
    int h1 = time1 / 100;
    int m1 = time1 % 100;
    int h2 = time2 / 100;
    int m2 = time2 % 100;

   
    int total_minutes1 = h1 * 60 + m1;
    int total_minutes2 = h2 * 60 + m2;

   
    int diff_minutes = total_minutes2 - total_minutes1;

  
    if (diff_minutes < 0)
        diff_minutes += 24 * 60;

 
    int diff_hours = diff_minutes / 60;
    int diff_remaining_minutes = diff_minutes % 60;

  
    cout << diff_hours << " hours " << diff_remaining_minutes << " minutes" << endl;

    return 0;
}
