/*
 * Derek Rodriguez
 *
 * Driver program for Employee class.
 * Creates two Employee objects, one pre-constructed, other default constructed.
 * Reads in user input for data for default constructed object, outputs yearly salary,
 * Gives 10% raise stored in the class, outputs new yearly salary.
 */

#include <iostream>
#include "Employee.h"

int main() {
    
    // First employee object created with constructor parameters
    Employee emp1{"Nicole Watterson", 3500};
    // Second employee object created using default constructor
    Employee emp2;
    
    string name;
    int salary;
    
    // Set second employee name and salary
    cout << "Enter an employee name: ";
    getline(cin, name);
    emp2.setName(name);
    
    cout << "Enter the employee's monthly salary: ";
    cin >> salary;
    emp2.setSalary(salary);
    
    // Print employees and multiply monthly salary by 12 for yearly
    cout << "\nHere are the employees and their yearly salaries: " << endl;
    cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
    cout << emp2.getName() << ": $" << emp2.getSalary() * 12 << endl;
    
    // Set salary call to give employees a 10% raise
    emp1.setSalary(emp1.getSalary() * 0.10);
    emp2.setSalary(emp2.getSalary() * 0.10);
    
    // Print the annual salary with 10% raise
    cout << "\nHere are the employees and their yearly salaries with a 10% raise" << endl;
    cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
    cout << emp2.getName() << ": $" << emp2.getSalary() * 12 << endl;

    return 0;
}
