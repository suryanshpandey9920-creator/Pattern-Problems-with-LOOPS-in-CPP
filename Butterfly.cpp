#include <iostream>
using namespace std;

int main() {

    //   *             *
    //   * *         * *
    //   * * *     * * *
    //   * * * * * * * *
    //   * * * * * * * *
    //   * * *     * * *
    //   * *         * *
    //   *             *
    
    // Butterfly Pattern 

    int n;
    cout << "enter the value of n :  ";
    cin >> n;


    // code for the Top part of butterfly pattern
    
    //   *             *
    //   * *         * *
    //   * * *     * * *
    //   * * * * * * * *

    for (int i=0; i<n; i++){

        // Printing the right angle triangle 
        for (int j=0; j<i+1; j++){
            cout << "*";
        }

        // Using formula  2*(n-i)-2  for space printing 
        for (int j=0; j< 2*(n-i)-2; j++){
            cout << " ";
        }

        // Inner loop 3 for reverse triangle 
        for (int k=0; k<i+1; k++){
            cout<< "*";
        }

        // endl of line after 1 iteration 
        cout << endl;
    }


    // Code for the BOTTOM part of butterfly pattern

    //   * * * * * * * *
    //   * * *     * * *
    //   * *         * *
    //   *             *

    for (int i=0; i<n; i++){

        // Inner loop 1 for the flyods pattern triangle 
        for (int k=0; k<n-i; k++){
            cout << "*";
        }


        // Formula for printing the even spaces but in increasing order 
        // if(i !=0){ 
           for (int k=0; k<(i*2); k++){
                 cout << " ";
           }
        // }

        // Inner loop 3 for printing reverse Flyod's triangle 
        for (int k=0; k<n-i; k++){
            cout << "*";
        }

        // After 1 iteration the patter should print in new line 
        cout << endl;
    }



    return 0;
}