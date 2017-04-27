/* 
 * Derek Rodriguez
 * U37516832
 * 4/5/2017
 * Driver for two template functions minimum and maximum. Each function accepts two arguments and returns
 * the lesser or greater of the two values.
 *
 */

#include <iostream>
#include "FeetInches.h"

using namespace std;

template <class T>
T minimum(T val1, T val2) {
    
    if (val1 > val2) {
        
        return val2;
        
    }
    
    return val1;
    
}

template <class T>
T maximum(T val1, T val2) {
    
    if (val1 < val2) {
        
        return val2;
        
    }
    
    return val1;
    
}

int main(int argc, const char * argv[]) {
    
    // Create variables to store values
    int i1, i2;
    double d1, d2;
    string s1, s2;
    
    // Create two FeetInches objects
    FeetInches f1, f2;
    
    // Get integers and print minimum and maximum
    cout << "Enter two integers: " << endl;
    cin >> i1 >> i2;
    
    cout << "The minimum of " << i1 << " and " << i2 << " is: " << minimum(i1, i2) << endl;
    
    cout << "The maximum of " << i1 << " and " << i2 << " is: " << maximum(i1, i2) << endl;
    
    // Get doubles and print minimum and maximum
    cout << "Enter two floating point numbers: " << endl;
    
    cin >> d1 >> d2;
    
    cout << "The minimum of " << d1 << " and " << d2 << " is: " << minimum(d1, d2) << endl;
    
    cout << "The maximum of " << d1 << " and " << d2 << " is: " << maximum(d1, d2) << endl;
    // Required to ignore input to correctly
    // take in strings
    cin.ignore();
    
    // Get strings and print minimum and maximum
    cout << "Enter the first string: " << endl;
    getline(cin, s1);
    cout << "Enter the second string: " << endl;
    getline(cin, s2);
    
    cout << "The minimum of " << s1 << " and " << s2 << " is: " << minimum(s1, s2) << endl;
    
    cout << "The maximum of " << s1 << " and " << s2 << " is: " << maximum(s1, s2) << endl;
    
    // Get distances and print minimum and maximum
    
    cout << "Enter the first distance (in feet, inches format): " << endl;
    cin >> f1;
    cout << "Enter the second distance (in feet, inches format): " << endl;
    cin >> f2;
    
    cout << "The minimum of " << f1 << " and " << f2 << " is: " << minimum(f1, f2) << endl;
    
    cout << "The maximum of " << f1 << " and " << f2 << " is: " << maximum(f1, f2) << endl;
    
    return 0;
}

