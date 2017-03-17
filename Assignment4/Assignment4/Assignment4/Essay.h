/* Derek Rodriguez
 *
 * U37516832
 * 3/11/17
 *
 */

/* Create an Essay class that is derived from the GradedActivity class presented in the first example. The Essay class should determine the grade a student receives on an essay. The student’s essay score can be up to 100, and is determined in the following manner:
 
 Grammar: 30 points
 Spelling: 20 points
 Correct length: 20 points
 Content: 30 points
 */


#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity {
    
private:
    
    double grammarScore;
    double spellingScore;
    double correctLengthScore;
    double contentScore;
    
public:
    // Default Constructor
    
    Essay() {
        
        grammarScore = 0.0;
        spellingScore = 0.0;
        correctLengthScore = 0.0;
        contentScore = 0.0;
        
    }
    
    /* Mutators */
    void setGrammarScore(double s) {
        
        grammarScore = s;
        
    }
    
    void setSpellingScore(double s) {
        
        spellingScore = s;
    
    }
    
    void setCorrectLengthScore(double s) {
        
        correctLengthScore = s;
        
    }
    
    void setContentScore(double s) {
        
        contentScore = s;
        
    }
    
    /* Accessors */
    
    double getGrammarScore() const {
        
        return grammarScore;
        
    }
    
    double getSpellingScore() const {
        
        return spellingScore;
        
    }
    
    double getCorrectLengthScore() const {
        
        return correctLengthScore;
        
    }
    
    double getContentScore() const {
     
        return contentScore;
        
    }
    
    /* Redefined functions */
    
    double getScore() const {
        
        return contentScore + grammarScore + correctLengthScore + spellingScore;;
        
    }
    
    char getLetterGrade() const {
        
        getScore();
        
        return GradedActivity::getLetterGrade();
        
    }
    
    
};

#endif /* ESSAY_H */
