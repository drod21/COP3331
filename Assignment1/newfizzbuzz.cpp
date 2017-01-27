/*
 * Derek Rodriguez
 * This program prints Fizz for multiples of 3, Buzz for multiples of 5,
 * Woof for multiples of 7, FizzBuzz for multiples of 3 and 5,
 * FizzWoof for multiples of 3 and 7, and BuzzWoof for multiples of 5 and 7.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    int count{0};
    int j, k, l;
    
    string fizz = "Fizz";
    string buzz = "Buzz";
    string fizzbuzz = "FizzBuzz";
    string woof = "Woof";
    string fizzwoof = "FizzWoof";
    string buzzwoof = "BuzzWoof";
    
    for (i = 1; i <= 100; i++) {
        
        j = i % 3;
        
        k = i % 5;
        
        l = i % 7;
        
        if (!j && !k) {
            
            cout << fizzbuzz << " ";
            
        } else if (!j && !l) {
            
            cout << fizzwoof << " ";
            
        } else if (!k && !l) {
            
            cout << buzzwoof << " ";
            
        } else if (!j) {
            
            cout << fizz << " ";
            
        } else if (!k) {
            
            cout << buzz << " ";
            
        } else if (!l) {
            
            cout << woof << " ";
            
        } else {
            
            cout << i << " ";
            
        }

        
        
        if (count % 5 == 4) {
            
            cout << endl;
            
        }
        
        count++;
    }
    
    cout << endl;
    
    return 0;
    
}
