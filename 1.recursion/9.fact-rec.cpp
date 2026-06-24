#include<iostream>
using namespace std;

//approach 1 which time complexity is o(n^2)
int fib1(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fib1(n-2)+fib1(n-1);
    }
}

//best approach which time complexity is o(n)
int fib2(int n){
    int arr[n];
    for(int i=0 ; i<n ; i++){
        arr[i] = -1;
    }

    if(n <= 1){
        arr[n] = n;
        return n;
    }
    else{
        if(arr[n-2] == -1){
            arr[n-2] = fib2(n-2);
        }
        if(arr[n-1] == -1){
            arr[n-1] = fib2(n-1);
        }
        return arr[n-2] + arr[n-1];
    }
}

int main(){
    int n;
    cin>>n;
    cout<<fib1(n)<<endl;
    cout<<fib2(n);
}