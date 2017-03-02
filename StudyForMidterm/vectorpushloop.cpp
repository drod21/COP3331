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
    
    
    cout << "Reading in integers to vector." << endl;
    
    for (int i = 0; i < 5; i++) {
        
        cout << "Enter an integer." << endl;
        
        cin >> j;
        
        vec.push_back(j);
        
    }
    
    cout << endl;
    cout << "Values in the vector: " << endl;
    // Range based for loop loops over VALUES, not indices.
    
    for (int vecs : vec) {
        
        cout << vecs << endl;
        
    }
    
    cout << "Removing items in the vector: " << endl;
    int i = 0;
    
    while (!vec.empty()) {
        
        cout << "Removing value in vector of size " << vec.size() << endl;
        
        vec.pop_back();
        
    }
    
    return 0;
}
