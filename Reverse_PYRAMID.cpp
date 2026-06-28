#include <iostream>
using namespace std;

int main() {

    //  1 2 3 4 3 2 1 
    //    1 2 3 2 1 
    //      1 2 1 
    //        1

    int n ;
    cout << "Enter the value of n: ";
    cin >> n;
     
    for (int i =0 ; i < n ; i++){

        // Inner loop 1 for printing ( I )spaces 
        for (int j =0;  j<=i ; j++){
            cout << " ";
        }
        // Inner loop 2 fpr printing ( N-I ) number of elements in each row 
        for (int j=1; j<=n-i ; j++){
            cout << j;
        }
        // Inner loop 3 for printing ( N-i-1 ) elements in each row reverse 
        for (int  k= n-i-1 ; k>0 ; k--){
            cout << k;
        }
        cout << endl;

    }
   
    return 0;
}