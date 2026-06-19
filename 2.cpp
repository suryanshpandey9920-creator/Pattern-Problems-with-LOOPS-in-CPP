// pattern 1 (Square pattern)

#include <iostream>
using namespace std;

int main(){


    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for (int i=0; i<n ; i++){  // outer loop for line 
        
        for (int j =1 ; j<=n ; j++){  // inner loop for number printing till n 
            
            cout << j << " ";
        }

        cout << endl;  
        // this endl deside that after 1 iteration 
        // it leave 1 line and 2nd iteration start form another line 

    }

    return 0;
}