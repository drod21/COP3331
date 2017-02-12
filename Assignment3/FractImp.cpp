/*
 * Derek Rodriguez
 * U37516832
 * 2/12/17
 *
 * Implementation program to add the class function definitions,
 * For constructor, overloading, simplification, and mutator function.
 *
 */

#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction() {
    
    numerator = 0;
    denominator = 1;
    
}


// Simplify via a for loop
void Fraction::simplify() {
    
    // Loop through and divide if no remainder
    // Divide by i if and only if number is divisible by both
    // numerator and denominator
    
    for (int i = numerator * denominator; i > 1; i--) {
        
        if ((denominator % i == 0) && (numerator % i == 0)) {
            
            denominator /= i;
            numerator /= i;
            
        }
    }
    
}

// Mutator function
void Fraction::setFraction(int num, int denom) {
    
    cin >> num >> denom;
    
    numerator = num;
    denominator = denom;
    
}


// Overloaded operator for addition
Fraction Fraction::operator+ (const Fraction &f) {
    
    Fraction temp;
    
    // Multiply both numerators by denominators and add
    temp.numerator = numerator * f.denominator + f.numerator * denominator;
    temp.denominator = denominator * f.denominator;
    temp.simplify();
    
    return temp;
    
}

// Overloaded operator for multiplication
Fraction Fraction::operator* (const Fraction &f) {
    
    Fraction temp;
    
    // Multiply the two numerators and two denominators
    temp.numerator = numerator * f.numerator;
    temp.denominator = denominator * f.denominator;
    temp.simplify();
    
    return temp;
}

// Overloaded operator for subtraction
Fraction Fraction::operator- (const Fraction &f) {
    
    Fraction temp;
    
    // Multiply both numerators by denominators and subtract
    temp.numerator = numerator * f.denominator - f.numerator * denominator;
    temp.denominator = denominator * f.denominator;
    temp.simplify();
    
    return temp;
    
}

// Overloaded operator for division
Fraction Fraction::operator/ (const Fraction &f) {
    
    Fraction temp;
    
    // Multiply numerators by denominators
    temp.numerator = numerator * f.denominator;
    temp.denominator = denominator * f.numerator;
    temp.simplify();
    
    return temp;

}



ostream& operator << (ostream& os, const Fraction& fraction) {
    
    //note that we print out a / as it is simply easier to do so!
    os << fraction.numerator << " / " << fraction.denominator;
    
    return os;
    
}

//overload the operator >>
istream& operator>> (istream& is, Fraction& fraction) {
    
    char ch;
    
    is >> fraction.numerator; //get the numerator
    is >> ch; //read and discard the '/'
    is >> fraction.denominator; //get the denominator
    return is;
    
}
