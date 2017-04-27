#ifndef FEETINCHES_H
#define FEETINCHES_H

// Derek Rodriguez
// U37516832
// 4/5/2017
// The FeetInches class holds distances or measurements
// expressed in feet and inches.

using namespace std;

class FeetInches
{
private:
    int feet;        // To hold a number of feet
    int inches;      // To hold a number of inches
public:
    // Constructor
    FeetInches(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }
    
    // Mutator functions
    void setFeet(int f) {
        feet = f;
    }
    
    void setInches(int i) {
        inches = i;
    }
    
    // Accessor functions
    int getFeet() const {
        return feet;
    }
    
    int getInches() const {
        return inches;
    }
    
    // Overloaded operator functions
    bool operator > (const FeetInches &); // Overloaded >
    bool operator < (const FeetInches &); // Overloaded <
    
    // Overload the operator <<
    friend ostream& operator << (ostream& os, const FeetInches& feetInches);
    
    // Overload the operator >>
    friend istream& operator >> (istream& is, FeetInches& feetInches);

};

bool FeetInches::operator > (const FeetInches &right) {
    
    bool greaterThan = false;// create boolean variable
    
    // if feet is greater than right.feet
    //           Set variable to true
    // otherwise if feet is equal to right.feet and inches is
    //                 greater than right.inches)
    //         Set variable to true
    //otherwise
    //  Set variable to false
    
    if (feet > right.feet) {
        
        greaterThan = true;
        
    } else if (feet == right.feet && inches > right.inches) {
        
        greaterThan = true;
        
    } else {
        
        greaterThan = false;
        
    }
    
    return greaterThan;
    
}

bool FeetInches::operator < (const FeetInches &right) {
    
    bool lessThan = false;
    
    // if feet is less than right.feet
    //           Set variable to true
    // otherwise if feet is equal to right.feet and inches is
    //                 less than right.inches)
    //         Set variable to true
    //otherwise
    //  Set variable to false
    
    if (feet < right.feet) {
        
        lessThan = true;
        
    } else if (feet == right.feet && inches < right.inches) {
        
        lessThan = true;
        
    } else {
        
        lessThan = false;
        
    }
    
    return lessThan;
    
}


ostream& operator << (ostream& os, const FeetInches& feetInches) {
    // Print out " feet, "  " inches" for fomat: 3 feet, 7 inches
    os << feetInches.feet << " feet, " << feetInches.inches << " inches";
    
    return os;
}

istream& operator >> (istream& is, FeetInches& feetInches) {
    
    // Empty character for space and comma
    char ch;
    
    is >> feetInches.feet; // Get the feet
    is >> ch; // Discard the comma and empty space
    is >> feetInches.inches; // Get the inches
    
    return is;
    
}

#endif
