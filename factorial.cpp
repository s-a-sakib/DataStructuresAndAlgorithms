//Factorial

#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    else return n * factorial ( n - 1);
}

int32_t main(){
    cout <<"Input a number to find the factorial : " ;
    int num , fact ;
    cin >> num ;
    cout << num << endl;

    fact = factorial(num);
    cout <<"The Factorial of " << num << " is " << fact <<" . "  << endl;
    return 0;
}