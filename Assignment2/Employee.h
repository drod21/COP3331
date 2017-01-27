/* 
 * Derek Rodriguez
 * Contains Employee class
 *
 */

#include <iostream>
#include <string>


using namespace std;

class Employee {
    
    private:
    
    string name;
    int salary;
    
    public:
    // Constructors
    Employee() {
        
        name = " ";
        salary = 0;
        
    }
    
    Employee(string empName, int monthSalary) {
        
        name = empName;
        salary = monthSalary;
        
    }
    
    void setSalary(int mSalary) {
        
        salary += mSalary;
        
    }
    
    int getSalary() const {
        
        return salary;
        
    }
    
    
    void setName(string empName) {
        
        name = empName;
        
    }
    
    string getName() const {
        
        return name;
        
    }
    
};
