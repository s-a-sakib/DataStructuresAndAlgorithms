//Fs'th value of a fibonacci series
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n , int pre , int post , int count){
    
    if(count == n) cout <<"Fibonnaci Fs : " << post << endl;
    else{
        int Fs = pre + post;
        pre = post;
        post = Fs;
        fibonacci(n , pre , post , count + 1);
    }
}

int32_t main(){
    int num , Fs;
    cout <<"Input a number : ";
    cin >> num;
    cout << num << endl;
    fibonacci(num , 1 , 0 , 1);
    return 0;
}