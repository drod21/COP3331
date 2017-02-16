/* 
 * Derek Rodriguez
 * U37516832
 * 2/12/17
 *
 * Driver program to receive user input to set the two fractions,
 * And perform arithmetic (add, subtract, multiply, divide).
 * Prints the output.
 *
 */

#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    
    Fraction f1;
    Fraction f2;
    Fraction f3;
    
    // Get user input for fractions using overloaded >> operator
    
    cout << "Enter the first fraction in the form a / b: " << endl;
    
    cin >> f1;
    
    cout << "Enter the second fraction in the form a / b: " << endl;
    
    cin >> f2;
    
    // Display fractions using overloaded << operator
    
    cout << "Fraction 1: " << f1 << endl;
    
    cout << "Fraction 2: " << f2 << endl;
    
    // Add and store in object f3
    
    f3 = f1 + f2;
    
    cout << f1 << " + " << f2 << " = " << f3 << endl;
    
    // Subtract and store in object f3
    
    f3 = f1 - f2;
    
    cout << f1 << " - " << f2 << " = " << f3 << endl;
    
    // Multiply and store in object f3
    
    f3 = f1 * f2;
    
    cout << f1 << " * " << f2 << " = " << f3 << endl;
    
    // Divide and store in object f3
    
    f3 = f1 / f2;
    
    cout << "(" << f1 << ")" << " / " << "(" << f2 << ")" << " = " << f3 << endl;
    
    return 0;
}
