#include <iostream>
using namespace std;

int main() {
    
    //  Pyramid Pattern problem 

    //        1
    //      1 2 1
    //    1 2 3 2 1
    //  1 2 3 4 3 2 1

    int n;
    cout <<"  enter the value of n : ";
    cin >> n;
    
    for (int i = 0 ; i< n ; i++) {
        // Inverted triangle space
        for (int j= 0; j< n-i ; j++){
            cout << " ";
        }
        // Number in 1 line printing 
        for (int j=1 ; j< i ;j++){
            cout << j ; 
        }
        // Right angle Reverse triangle 
        for (int k =i; k>0 ;k--){
            cout << k ;
        }
        // end of line 
        cout << endl;

    }

    return 0;
}