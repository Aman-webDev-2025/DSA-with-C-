#include<iostream>
using namespace std;

int linear(int *arr , int srch){
    bool found = false;
    for(int i=0 ; i<5 ; i++){
        if(arr[i] == srch){
            cout<<"search element is on index: "<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"element not found";
    }
}

int main(){
    int *arr;
    arr = new int[5];
    cout<<"enter 5 numbers"<<endl;
    for(int i=0 ; i<5 ; i++){
        cin>>arr[i];
    }
    int srch;
    cout<<"enter element for search: ";
    cin>>srch;
    linear(arr , srch);
    delete[] arr;
    return 0;
}