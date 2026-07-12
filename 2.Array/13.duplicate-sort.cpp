//find duplicate element in sorted array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>arr(n);
    
    cout<<"enter elements in array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());

    cout<<"sorted array"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"duplicate element are : ";
    int dup=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == arr[i+1] && dup != arr[i]){
            cout<<arr[i]<<" ";
            dup = arr[i];
        }
    }

    return 0;
}