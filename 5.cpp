#include <iostream>
using namespace std ;

int main(){

    //    1 2 3
    //    4 5 6
    //    7 8 9

    // .Pattern problem 

    int n;
    cout << "enter the value of n :";
    cin >> n;
    int num =0 ;

    for (int i =0 ; i<=n -1;i++){   // Outer loop for lines 


            for (int j=1; j<=n ; j++){  // IOne row print n number of values

                num++;  // Num variable adds value by 1 
                cout << num;

            }
            cout << endl;   
    }

    return 0;

}









