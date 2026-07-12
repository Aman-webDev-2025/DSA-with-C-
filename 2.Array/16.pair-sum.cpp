//find the pair whose sum is equal to k in unsorted array

#include<iostream>
using namespace std;

int main(){

    int a[] = {1, 10 , 20 , 30 , 5 , 8 , 2 , 7 , 12};
    int k;
    cout<<"enter number to check pair :";
    cin>>k;

    for(int i=0 ; i<8 ; i++){
        for(int j=i+1 ; j<9 ; j++){

            if( a[i] + a[j] == k){
                cout<<a[i]<<" , "<<a[j]<<endl;
            }
        }
    }

    return 0;
}