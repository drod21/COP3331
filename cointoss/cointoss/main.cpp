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

int coinToss(void);

int main(int argc, const char * argv[]) {
    
    srand(static_cast <unsigned int>(time(0)));
    
    int numOfTimes;
    int randomNumber = 0;
    string headsOrTails = "";
    int count = 0;
    int countHeads = 0, countTails = 0, tracker = 0;
    
    cout << "Please enter number of times you wish to toss: " << endl;
    
    cin >> numOfTimes;
    
    if (numOfTimes < 10) {
        
        cerr << "Number of tosses must be greater than 10." << endl;
        
        return 0;
        
    }
    
    randomNumber = coinToss();
    
    while (count < numOfTimes) {
        
        if (randomNumber == 0) {
            
            headsOrTails = "Heads";
            countHeads++;
            
        } else if (randomNumber == 1) {
            
            headsOrTails = "Tails";
            countTails++;
            
        }
        
        cout << headsOrTails << setw(10);
        
       /* if (tracker % 5  == 4) {

            
            cout << endl;
          
        }
        */
        count++;
        //tracker++;
        
        randomNumber = coinToss();
    
    }
    
    cout << "\nNumber of Heads = " << countHeads << endl;
    
    cout << "Number of Tails = " << countTails << endl;
    
    
    return 0;
    
}

int coinToss(void) {
    
    int random{0};

    random = rand() % 2;
    
    return random;
    
}
