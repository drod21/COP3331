//
//  main.cpp
//  Assignment4
//
//  Created by Derek Rodriguez on 3/11/17.
//  Copyright © 2017 Derek Rodriguez. All rights reserved.
//

#include "Essay.h"
#include <iostream>

using namespace std;

int main() {

    Essay essay1;
    
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
    
    essay1.setContentScore(content);
    essay1.setGrammarScore(grammar);
    essay1.setSpellingScore(spelling);
    essay1.setCorrectLengthScore(length);
    essay1.setScore(essay1.getScore());
    
    
    cout << "Grammar points: " << essay1.getGrammarScore() << endl;
    cout << "Spelling points: " << essay1.getSpellingScore() << endl;
    cout << "Length points: " << essay1.getCorrectLengthScore() << endl;
    cout << "Content points: " << essay1.getContentScore() << endl;
    
    cout << "Overall score: " << essay1.getScore() << endl;
    
    cout << "Letter grade: " << essay1.getLetterGrade() << endl;
    
    return 0;
}
