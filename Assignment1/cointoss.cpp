/*
 * Derek Rodriguez
 * Program that simulates a coin toss
 *
 *
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

bool realisticOrNot(int side, int numTimes);

int coinFlip(void);


int main() {
    
    srand(static_cast <unsigned int>(time(0)));
    
    int numOfTimes;
    int randomNumber{0}, count{0}, countHeads{0}, countTails{0};
    string headsOrTails = "";
    
    bool sim;
    
    cout << "Enter the number of times you want to toss the coin: " << endl;
    cin >> numOfTimes;
    
    if (numOfTimes < 10) {
        
        cerr << "Number of tosses must be greater than 10." << endl;
        return 0;
        
    }
    
    while (count < numOfTimes) {
        
        randomNumber = coinFlip();
        
        if (randomNumber == 0) {
            
            headsOrTails = "Heads";
            countHeads++;
            
        } else {
            
            headsOrTails = "Tails";
            countTails++;
        
        }
        
        cout << setw(6) << headsOrTails;
        
        if (count % 10 == 9) {
            
            cout << endl;
            
        }
        
        count++;
        
    }
    
    cout << "\nNumber of Heads = " << countHeads << endl
    << "Number of Tails = " << countTails << endl;
    
    sim = realisticOrNot(countHeads, numOfTimes);
    
    if (sim == true) {
        
        cout << "This simulation is realistic." << endl;
        
    } else {
        
        cout << "This simulation is not realistic." << endl;
        
    }
    
    
    return 0;
    
}

int coinFlip(void) {
    
    int random{rand() % 2};
    
    return random;
    
}

bool realisticOrNot(int side, int numTimes) {
    
    double result;
    
    result = (static_cast<double>(side) / numTimes);
    
    if (result >= 0.45 && result <= 0.55) {
        
        return true;
        
    }
    
    return false;
    
}
