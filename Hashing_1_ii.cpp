/*
    Write a program to store some data (54, 26, 93, 17, 77, 31, 44, 55, 20) to a hash table 
    (Size of hash table is a prime number).While storing data if there is a collision use the Linear Probing technique.
    Next search for an item. [Rewrite the program for (i) plus 3 probing (ii) Quadratic Probing and (iii) Chaining.]
*/
//Solve (ii) . Quadratic Probing

#include <bits/stdc++.h>
using namespace std;

int Hasing(int a ){
    return a % 11;
}

int32_t main(){
    //Seting the size of table 11 which is a prime number
    //If the any index of bool table is 0 , then it is empty

    int prime = 11, table[prime],bool_table[prime] = {0} , a , Hs;

    //Using k mod 11 to store data and linear hashing
    for(int i = 0 ; i < prime - 2 ; i++){
        cin >> a;
        int index = Hasing(a);
        if(bool_table[index] == 0){
            table[index] = a;
            bool_table[index] = 1;
        }else{
            int c = 1 , ix = index;
            while(bool_table[ix] != 0){
                ix  = index + c * c;
                if(ix >= prime) ix = ix % prime;
                if(bool_table[ix] == 0){
                    table[ix] = a;
                    bool_table[ix] = 1;
                    break;
                }
                c++;
            }
        }
    }

    cout << "Hasing Table : " << endl;

    cout << " Hash index || Hash Data " << endl << endl;

    for(int i = 0 ; i < prime ; i++)
        cout << "         "<<i<<"||"<<"      "<<table[i]<<endl;
    return 0;
}