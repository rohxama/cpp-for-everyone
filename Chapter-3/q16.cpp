// Program: Employee Paycheck Calculation

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string employeeName;
    double hourlyWage;
    double hoursWorked;
    double totalPay;

    const int standardHours = 40;
    const double overtimeRate = 1.5;

 
    std::cout << "Enter the employee's name: ";
    std::getline(std::cin, employeeName);

 
    std::cout << "Enter the employee's hourly wage: $";
    std::cin >> hourlyWage;

 
    std::cout << "Enter the number of hours worked in the past week (can be fractional): ";
    std::cin >> hoursWorked;

 
    if (hourlyWage < 0 || hoursWorked < 0) {
        std::cout << "Error: Hourly wage and hours worked cannot be negative." << std::endl;
        return 1; 
    }

 
    if (hoursWorked <= standardHours) {
    
        totalPay = hoursWorked * hourlyWage;
    } else {
       
        double regularPay = standardHours * hourlyWage;
        double overtimeHours = hoursWorked - standardHours;
        double overtimePay = overtimeHours * hourlyWage * overtimeRate;
        totalPay = regularPay + overtimePay;
    }

  
    std::cout << std::endl; 
    std::cout << "--------------------" << std::endl;
    std::cout << "      PAYCHECK      " << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Employee Name: " << employeeName << std::endl;
    std::cout << "Hourly Wage:   $" << std::fixed << std::setprecision(2) << hourlyWage << std::endl;
    std::cout << "Hours Worked:  " << std::fixed << std::setprecision(2) << hoursWorked << std::endl;
    std::cout << "Total Pay:     $" << std::fixed << std::setprecision(2) << totalPay << std::endl;
    std::cout << "--------------------" << std::endl;
     std::cout << "--------------------" << std::endl;

    return 0;
}
