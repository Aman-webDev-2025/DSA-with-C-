//on sorted array find missing element

#include<iostream>
using namespace std;
int main(){

    int arr[] = {5 , 10 , 15 , 20 , 30};
    int diff = arr[1] - arr[0];
    int ans=-1;
    for(int i=0 ; i<4 ; i++){
        
        if(arr[i+1] - arr[i] != diff){
            ans = diff + arr[i];
            break;
        }
    }
    if(ans != -1){
        cout<<"missing ele is : "<<ans;
    }
    else{
        cout<<"no missing element";
    }

    return 0;
}