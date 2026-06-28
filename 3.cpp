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
            //   i + 1 time print values im each row 
                  //   1st row -> ( i= 0 )+1
                  //   2nd row -> ( i= 1 )+1 
                  //   3rd row -> ( i= 2 )+2
                  //  for all the row's 
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}