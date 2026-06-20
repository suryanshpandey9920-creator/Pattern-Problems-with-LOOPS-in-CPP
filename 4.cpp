#include <iostream>
using namespace std;

int main(){

    // * * * *
    // * * *
    // * *
    // *


    int n=5;
    for (int i=0; i<=n-1; i++ ){  // outer loop 

        for (int j =0; j<n-i ; j++){ // Inner loop

            cout << "* ";

        }

        cout << endl;

    }

    return 0;
}