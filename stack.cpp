#include <bits/stdc++.h>
using namespace std;

int Array[100];
int Size = 0;
void push(int num){
    Array[Size] = num;
    Size++;
}
void pop(){
    if(Size == 0){
        cout <<"Stuck is empty." << endl;
    }else{
        cout <<"Last Element of Stack : " << Array[Size - 1] << endl;
        Size--;
    }
}
void size(){
    cout << "Stuck size : " << Size << endl;
}
void stuck(){
    cout << "Stuck : " ;
    for(int i = 0 ; i < Size ; i++) cout << Array[i] <<" ";
    cout << endl;
}
int32_t main(){
    cout << "Please input 0 for stoping insert data" << endl;
    int a;
    cin >> a;
    if(a == 0) cout <<"Stack have no element"<< endl;

    while(a != 0){
        push(a);
        cin >> a;
    }
    stuck();
    pop();
    size();

    pop();
    pop();
    size();
    

    return 0;
}