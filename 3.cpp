#include <iostream>
using namespace std ;
int main(){
    
    // *
    // * *
    // * * *
    // * * * *  
    // The (RIGHT angle Triangle ) pattern problem using nested for loop
    
    
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for (int i =0; i<=n-1; i++){  // outer loop for N number of lines 

        for (int j=0; j<=i; j++){   

            n-i;  // everytime the loop run the value of N is get subtracted by I,
                //   n=1, i=0  1-0= 1, for 1st line , same logic for all lines till n.

            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}