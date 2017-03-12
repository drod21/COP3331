//
//  main.cpp
//  Assign3
//
//  Created by Derek Rodriguez on 2/11/17.
//  Copyright © 2017 Derek Rodriguez. All rights reserved.
//

#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    
    Fraction f1;
    Fraction f2;
    Fraction f3;
    
    cout << "Enter the first fraction in the form a / b: " << endl;
    
    cin >> f1;
    
    cout << "Enter the second fraction in the form a / b: " << endl;
    
    cin >> f2;
    
    cout << "Fraction 1: " << f1 << endl;
    f2.setFraction(4, 5);
    cout << "Fraction 2: " << f2 << endl;
    
    f3 = f1 + f2;
    
    cout << f1 << " + " << f2 << " = " << f3 << endl;
    
    f3 = f1 - f2;
    
    cout << f1 << " - " << f2 << " = " << f3 << endl;
    
    f3 = f1 * f2;
    
    cout << f1 << " * " << f2 << " = " << f3 << endl;
    
    f3 = f1 / f2;
    
    cout << "(" << f1 << ")" << " / " << "(" << f2 << ")" << " = " << f3 << endl;
    
    return 0;
}
