/* 
 * Derek Rodriguez
 * 3/17/17
 * U37516832
 *
 * Driver file for Essay and GradedActivity classes. Takes in user input for essay scores, 
 * prints out the results.
 *
 */

#include "Essay.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    Essay *essay1 = new Essay;
    GradedActivity *grActivity = essay1;
    
    double grammar, content, length, spelling;
    
    cout << "How many grammar points did the student earn? (0 - 30): " << endl;
    
    cin >> grammar;
    
    if (grammar >= 30.0 || grammar <= 0.0) {
        
        cerr << "Invalid. Enter a number from 0 through 30:" << endl;
        cin >> grammar;
        
    }
    
    cout << "How many spelling points did the student earn? (0 - 20): " << endl;
    
    cin >> spelling;
    
    if (spelling >= 20.0 || spelling <= 0.0) {
        
        cerr << "Invalid. Enter a number from 0 through 20:" << endl;
        cin >> spelling;
        
    }
    
    cout << "How many points for length did the student earn? (0 - 20): " << endl;
        
    cin >> length;
    
    if (length >= 20.0 || length <= 0.0) {
        
        cerr << "Invalid. Enter a number from 0 through 20:" << endl;
        cin >> length;
        
    }
    
    cout << "How many points for content did the student earn? (0 - 30): " << endl;
    
    cin >> content;
    
    if (content >= 30.0 || content <= 0.0) {
        
        cerr << "Invalid. Enter a number from 0 through 30:" << endl;
        cin >> content;
        
    }
    
    // Set the scores to the object
    essay1->setContentScore(content);
    essay1->setGrammarScore(grammar);
    essay1->setSpellingScore(spelling);
    essay1->setCorrectLengthScore(length);
    
    cout << setprecision(2);
    
    // Print the individual points
    cout << "Grammar points: " << essay1->getGrammarScore() << endl;
    
    cout << "Spelling points: " << essay1->getSpellingScore() << endl;
    
    cout << "Length points: " << essay1->getCorrectLengthScore() << endl;
    
    cout << "Content points: " << essay1->getContentScore() << endl;
    
    // Print the overall score
    cout << "Overall score: " << grActivity->getScore() << endl;
    
    // Set the score using getScore call, and print the final output
    grActivity->setScore(grActivity->getScore());
    
    cout << "Letter grade: " << grActivity->getLetterGrade() << endl;
    
    return 0;
}
