#include<iostream>
using namespace std;
void A(int);
void B(int);

void A(int n){
    if(n>0){
        cout<<n<<" ";
        B(n-1);
    }
}
void B(int n){
    if(n>1){
        cout<<n<<" ";
        A(n/2);
    }
}
int main(){
    int n=20;
    A(n);
    return 0;
}



//output 20 19 9 8 4 3 1 