#include<iostream>
using namespace std;

int linear(int arr[5] , int srch){
    bool found = false;
    for(int i=0 ; i<5 ; i++){
        if(arr[i] == srch){
            cout<<"element found at index: ";
            cout<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"element not found";
    }
}

int main(){
    int arr[5];
    cout<<"enter 5 elements"<<endl;
    for(int i=0 ; i<5 ; i++){
        cin>>arr[i];
    }
    int srch;
    cout<<"enter element which you want to search"<<endl;
    cin>>srch;
    linear(arr , srch);
    return 0;
}