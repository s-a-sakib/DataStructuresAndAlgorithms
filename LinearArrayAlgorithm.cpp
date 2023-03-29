#include <bits/stdc++.h>
using namespace std;

int MAX = 1000;
int LA[1000] = {0};

int32_t main(){
    // Array initial values
    int N = 20;
    for(int i =  1; i <= N ; i++) LA[i] = i ;
    

    cout << "The array was : " << endl;
    for(int i = 1 ; i <= N ; i++) cout << LA[i] << " ";
    cout << endl;

    cout << "Insert : ";
    int ITEM , k;
    cin >> ITEM ;
    cout << ITEM << endl;

    cout << "POSITION : ";
    cin >> k;
    cout << k << endl;

    // Inserting operation

    int j = N; //initialize counter
    while (j >= k)
    {
        LA[j + 1] = LA[j]; // moving the elements dowmwords
        j--; // Decrease the counter
    } // end of loop
    LA[k] = ITEM; // inserted the item
    N = N + 1; // Reset N


    cout << "The array is now : " << endl;
    for(int i = 1 ; i <= N ; i++) cout << LA[i] << " ";
    cout << endl;
    
    
}