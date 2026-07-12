//reverse the array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10 , 20 , 30 , 40 , 50};
    int ans[5];
    for(int i=4 ; i>=0 ; i--){
        ans[i] = arr[i];
        cout<<ans[i]<<" ";
    }
}