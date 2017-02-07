/* 
 * Derek Rodriguez
 * Contains Employee class
 * Also inline functions, default constructor, and constructor with parameters for
 * employee name and monthly salary
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
        // Increment salary by adding to previous definition
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
