#include <iostream> 
using namespace std;
// 1
// 1 2
// 1 2 3
// 1 2 3 4 (Triangle problem with different elements )


int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    

    for (int i =0 ; i < n ; i++){ // Outer  loop
        for (int j =1 ; j <= i+1 ; j++){ // Inner loop 
            
            cout << j<< " " ; 
        }
        cout << endl;
    }
    return 0;
}