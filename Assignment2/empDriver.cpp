//
//  main.cpp
//  Employee
//
//  Created by Derek Rodriguez on 1/27/17.
//  Copyright © 2017 Derek Rodriguez. All rights reserved.
//

#include <iostream>
#include "Employee.h"

int main() {
    
    Employee emp1{"Nicole Watterson", 3500};
    Employee emp2;
    
    string name;
    int salary;
    
    cout << "Enter an employee name: ";
    getline(cin, name);
    
    emp2.setName(name);
    
    cout << "Enter the employee's monthly salary: ";
    cin >> salary;
    
    emp2.setSalary(salary);
    
    cout << "\nHere are the employees and their yearly salaries: " << endl;
    cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
    cout << emp2.getName() << ": $" << emp2.getSalary() * 12 << endl;
    
    emp1.setSalary(emp1.getSalary() * 0.10);
    emp2.setSalary(emp2.getSalary() * 0.10);
    
    
    cout << "\nHere are the employees and their yearly salaries with a 10% raise" << endl;
    cout << emp1.getName() << ": $" << emp1.getSalary() * 12 << endl;
     cout << emp2.getName() << ": $" << emp2.getSalary() * 12 << endl;
    
    
    
    return 0;
}
