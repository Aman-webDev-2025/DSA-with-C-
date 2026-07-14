//diagonal matrix using 2-d array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of matrix : ";
    cin>>n;
    int a[n][n];

    cout<<"enter element in diagonal array :"<<endl;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;

        for(int j=0 ; j<n ; j++){
            if(i == j){
                a[i][j] = x;
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}