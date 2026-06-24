#include<iostream>
using namespace std;

int fnc(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fnc(fnc(n+11));
    }
}
int main(){
    int n=95;
    cout<<fnc(n);
    return 0;
}

//output 91