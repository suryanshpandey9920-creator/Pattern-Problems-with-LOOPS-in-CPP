#include <iostream>
using namespace std ;

int main() {
    // 1
    // 2 1 
    // 3 2 1  
    // 4 3 2 1  
 // Reverse triangle pattern
     int n;
     cout << "enter the value of n : ";
     cin >> n; 

     for (int i =0; i<=n ; i++){   // Outer Loop
        for (int j = i ; j>0 ; j--){ // Inner Reverse Loop
            cout << j;
            
        }
        cout << endl;
     }

    return 0;
}