/*
 * Derek Rodriguez
 * U37516832
 * 3/26/17
 *
 * Asks the user for filename, reads the file, counts the number of random numbers,
 * returns the sum and average of the numbers in the file.
 *
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    
    ifstream infile;
    string fname;
    
    int num, sum{0}, count{0};
    
    double avg;
    
    cout << "Enter the filename: " << endl;
    // Read in the file name from user using getline() function.
    getline(cin, fname);
    // Open the file
    infile.open(fname);
    
    // If there is an error opening the file (File DNE, null file, etc), print error and exit.
    if (infile.fail()) {
        
        cerr << "Error opening the file. \n";
        return 0;
        
    } else {
        // While there are numbers being read in, sum them up, increment counter.
        while (infile >> num) {
            sum += num;
            count++;
            
        }
        // Find the average, cast to double.
        avg = static_cast<double>(sum) / count;
        // Print out the final outputs.
        cout << "Number of numbers: " << count << endl;
        cout << "Sum of the numbers: " << sum << endl;
        // Print the average, to two decimal points.
        cout <<  fixed << setprecision(2) << "Average of the numbers: " << avg << endl;
        
    }
    // Close the file
    infile.close();
    
    return 0;
    
}
