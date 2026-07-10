#include<iostream>
using namespace std;

void transposition(int arr[] , int n , int srch){
    
    bool found = false;

    for(int i=0 ; i<n ; i++){

        if(arr[i] == srch){

            found = true;
            cout<<"element found at index: "<<i<<endl;
            
            if(i>0){
                swap(arr[i] , arr[i-1]);
            }
            break;
        }
    }
    if(!found){
        cout<<"element not found";
    }
}

int main(){

    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"enter elements of an array";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int srch;
    cout<<"enter element which you want to search";
    cin>>srch;
    transposition(arr , n, srch);

    cout << "Array after transposition search: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}