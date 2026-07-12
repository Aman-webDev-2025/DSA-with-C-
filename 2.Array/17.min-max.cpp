//find min and max in one scan

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[] = { 3 , 4 , 1 , 5 , 32 ,6};
    int min=a[0] , max=a[0];
    
    for(int i=1 ; i<6 ; i++){

        if(min > a[i]){
            min = a[i];
        }
        else if(max < a[i]){
            max = a[i];
        }
    }
    cout<<"minimum : "<<min<<endl<<"maximum : "<<max;

    return 0;
}