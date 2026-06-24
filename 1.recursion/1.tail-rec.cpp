#include<iostream>
using namespace std;
void tail(int n){
    if(n>0){
        cout<<n<<" ";
        tail(n-1);
    }
}
int main(){
    int n=5;
    tail(n);
    return 0;
}

//output 5 4 3 2 1 