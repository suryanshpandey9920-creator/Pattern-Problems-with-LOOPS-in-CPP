// Program printing sum form 1 to N, using loops 

#include <iostream>
using namespace std;

int main(){
    // created variable n 
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    
    // created the sum variable to store the value 
    int sum=0;

    //  used the for loop 
    for (int i = 1; i<=n; i++){
        // everytime the loop repeate then 
        // it will add or assign the value of I to sum variable 

        sum+=i;
        
    }
         
        cout << "sum form 1 to n is : " << sum ;

    return 0;
}