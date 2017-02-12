/*
 * Derek Rodriguez
 * U37516832
 * 2/12/17
 *
 * Class definition file, containing private and public members, 
 * With the member function definitions, and accessor functions.
 *
 */

#ifndef Fraction_h
#define Fraction_h

#include <iostream>

using namespace std;


class Fraction {
    
    
private:
    
    int numerator;
    int denominator;
    
    void simplify();
    
public:
    // Constructor
    Fraction();
    
    // Accessors
    
    int getNumerator() const {
        
        return numerator;
        
    }
    
    int getDenominator() const {
        
        return denominator;
        
    }
    
    // Mutator
    void setFraction(int, int);
    
    
    // Overloaded operator functions
    Fraction operator+ (const Fraction &);
    Fraction operator* (const Fraction &);
    Fraction operator- (const Fraction &);
    Fraction operator/ (const Fraction &);
    friend ostream& operator<< (ostream&, const Fraction&);
    friend istream& operator>> (istream&, Fraction&);

    
    
};

#endif /* Fraction_h */
