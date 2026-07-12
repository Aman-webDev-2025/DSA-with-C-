//find duplicate element in unsorted array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {8 , 3 , 6 , 5 , 6 , 8 , 2 ,7};
    int c=0;
    int dup=arr[c];
    for(int i=0 ; i<7 ; i++){
        for(int j=i+1 ; j<8 ; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
                c++;
                break;
            }
        }
    }


    return 0;
}