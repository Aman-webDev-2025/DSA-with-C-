#include<iostream>
using namespace std;
void head(int n){
    if(n>0){
        head(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n=5;
    head(n);
}

//output 1 2 3 4 5 