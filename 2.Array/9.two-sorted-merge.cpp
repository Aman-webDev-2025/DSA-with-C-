// mearge two array with while loop

#include<iostream>
using namespace std;

void sort(int *p , int *q , int m , int n){
    int i=0 , j=0 ;
    while(i<m && j<n){
        if(p[i] <= q[j]){
            cout<<p[i]<<" , ";
            i++;
        }
        else{
            cout<<q[j]<<" , ";
            j++;
        }
    }

    while(i<m){
        cout<<p[i]<<" , ";
        i++;
    }
    
    while(j<n){
        cout<<q[j]<<" , ";
        j++;
    }
    cout << endl;
}


int main(){

    int *p , *q;
    int m , n;
    cout<<"enter size of array 1 : ";
    cin>>m;
    cout<<"enter size of array 2 : ";
    cin>>n;
    p = new int[m];
    q = new int[n];

    cout<<"array 1"<<endl;
    for(int i=0 ; i<m ; i++){
        cin>>p[i];
    }

    cout<<"array 2"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>q[i];
    }

    sort(p , q , m , n);
    delete[] p;
    delete[] q;

    return 0;
}