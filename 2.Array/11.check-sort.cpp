//check array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    bool sort = true;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int>ar(n);
    cout<<"enter ele of array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>ar[i];
    }

    cout<<"your array"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<ar[i]<<" ";
    }

    for(int i=0 ; i<n-1 ; i++){
        if(ar[i] > ar[i+1]){
            sort = false;
            break;
        }
    }
    if(!sort){
        cout<<"your array is not sorted";
    }
    else{
        cout<<"your array is sorted";
    }
}