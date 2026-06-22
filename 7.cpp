#include <iostream>
using namespace std;

// A
// B B
// C C C    (Character pattern problem)

int main(){

    int n ;
    cout << "Enter the value of n : ";
    cin >> n;

    char ch = 'A';

    for (int i =0 ;i< n ; i++){  // Outer loop for line

            for (int j =0; j<i+1; j++){  //Inner loop for Character printing 
                
                cout << ch  << " ";
                // Every line CH get print (i+1) times 
            }
            ch++;
            // ch get Updated after One Iteration 

        cout << endl;
        
    }

    return 0;
}