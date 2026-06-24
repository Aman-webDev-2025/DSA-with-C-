#include<iostream>
using namespace std;
void tree(int n){
    if(n>0){
        cout<<n<<" ";
        tree(n-1);
        tree(n-1);
    }
}
int main(){
    int n=5;
    tree(n);
    return 0;
}

//output 5 4 3 2 1 1 2 1 1 3 2 1 1 2 1 1 4 3 2 1 1 2 1 1 3 2 1 1 2 1 1 