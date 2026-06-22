#include <iostream>
using namespace std;

// FLoyd's Triangle Pattern  

int main() {
    int n ;
    cout << "Enter the value of  n : ";
    cin >> n;
    int count =1;

    for (int i = 0 ; i <= n-1 ; i++){   // Outer Loop
        for (int j = i+1 ; j > 0; j--){  // Inner Loop contaun reverse loop properties 
            cout << count << " ";
            count++;
        }
        cout << endl;
    }


    return 0;
} 