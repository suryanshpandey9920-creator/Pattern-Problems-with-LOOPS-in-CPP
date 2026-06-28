#include <iostream>
using namespace std;

int main() {
//       1
//     1 2
//   1 2 3
// 1 2 3 4

    int n ;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i =0 ; i<=n; i++){
        // Spaces 
        for (int j = 0 ; j<=n-i ; j++){
            cout << " ";
        }
        // Number in one line
        for (int j=1; j<=i ; j++){
            cout << j;
        }
        // New line after every line 
        cout << endl;
    }


    return 0;
}