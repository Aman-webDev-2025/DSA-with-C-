#include<iostream>
#include<algorithm>
using namespace std;

int binary(int arr[] , int n , int srch){
    
    int low = 0 , high = n-1;
    
    while(low <= high){
        
        int mid = low + (high-low)/2;

        if(arr[mid] == srch){
            return mid;
        }
        if(srch < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"please enter numbers in array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    } 

    sort(arr , arr+n);
    cout<<"sorted array: "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    int srch;
    cout<<"enter element to search: ";
    cin>>srch;

    int result = binary(arr , n , srch);
    if(result != -1){
        cout << "Element found at index: "<<result<< endl;
    } 
    else{
        cout << "Element not found!" << endl;
    }
    delete[] arr;
    return 0;
}