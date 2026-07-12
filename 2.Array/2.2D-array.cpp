//print element in 2d array using single and double pointer

#include<iostream>
using namespace std;

int main(){
    
    //using single pointer
    int c=1;
    int *a[2];
    a[0] = new int[3];
    a[1] = new int[3];
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            a[i][j] = c;
            c++;
        }
    }

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //using double pointer
    int **b;
    b = new int*[2];
    b[0] = new int[3];
    b[1] = new int[3];
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            b[i][j] = c;
            c++;
        }
    }

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}