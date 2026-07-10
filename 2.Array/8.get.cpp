#include <iostream>
using namespace std;

void display(int *arr , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int get(int *arr , int n , int index){
    if(index >=0 && index < n){
        return arr[index];
    }
    else{
        cout << "Error: Invalid index!"<<endl;
        return -1;
    }
}


void set(int *arr , int n , int index , int value){
    if(index >= 0 && index < n){
        arr[index] = value;
        cout<<arr[index];
    }
    else{
        cout<<"invalid index";
    }
}


int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int *arr = new int[n];

    cout<<"enter element in array"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    display(arr , n);

    int index;
    cout<<"enter element to see it index: ";
    cin>>index;
    cout<<"element at index: "<<get(arr , n , index);

    int set_index=1;
    int value;
    cout<<"enter value to set: ";
    cin>>value;
    set(arr , n , set_index , value);
  
    delete[] arr;

}
