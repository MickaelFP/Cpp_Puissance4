#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    /* int tab [6][7]; */ 
    cout << "____";
    for (int i = 0; i < 6; i++){
        cout << "____" ;
        
    }
        
    cout << endl; 
    for (int i = 0; i < 6; i++) {
      
        for (int j = 0; j < 7; j++){
            cout << " X |";
     
        }
        
        cout << endl;
        for (int j = 0; j < 7; j++){
            cout << "____";
            
        }
        
        cout << endl;
    }
    
}
