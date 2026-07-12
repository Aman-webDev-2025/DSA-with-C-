//make an array with pointer

#include<iostream>
using namespace std;

int main(){
    int c = 5;
    int *p;
    p = new int[5];
    for(int i=0 ; i<5 ; i++){
        p[i] = c;
        c++;
    }
    
    for(int i=0 ; i<5 ; i++){
        cout<<p[i]<<" ";
    }
}