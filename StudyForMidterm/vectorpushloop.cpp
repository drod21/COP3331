//
//  vectorpushloop.cpp
//  
//
//  Created by Derek Rodriguez on 3/2/17.
//
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector <int> vec;
 
    int j;
    
    
    
    for (int i = 0; i < 5; i++) {
        
        cout << "Enter a variable." << endl;
        
        cin >> j;
        
        vec.push_back(j);
        
    }
    
    cout << endl;
    
    for (int vecs : vec) {
        
        cout << vecs << endl;
        
    }
    
    return 0;
}
