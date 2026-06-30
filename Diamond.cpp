#include <iostream>
using namespace std ;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;


    // Top part of diamond 
    for (int i =0 ;i< n; i++){

        // Inner Loop 1 for printing ( n-i-1 ) time spaces
        for (int j=0 ; j<n-i-1; j++){
            cout << " ";
        }
        
        cout << "*";


        // Inner loop 2 for printing ( i*2 -1) time spaces
        if (i!=0){
            for (int j=0; j<2*i-1; j++){
                cout << " ";
            }

            cout << "*";
        } 
        
        cout << endl;
    }



    //  Bottom part 
    for (int i=0 ; i<n-1 ;i++){
        
        // loop 1 for space 
        for (int j=0; j<i+1 ;j++){
            cout << " ";
        }
        
        cout << "*";
        
        if(i!=n-2){
            // Loop 2 for space 

            for(int k=0; k< 2*(n-i)-5 ; k++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}