//mearge two array and sort it with vector and merge and sort function

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int m , n ;
    cout<<"enter size of array 1 and 2: ";
    cin>>m>>n;
    vector<int>ar1(m);
    vector<int>ar2(n);

    cout<<"enter array 1 ele "<<endl;
    for(int i=0 ; i<m ; i++){
        cin>>ar1[i];
    }

    cout<<"enter array 2 ele "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>ar2[i];
    }

    vector<int>ans(m+n);
    merge(ar1.begin(), ar1.end(), ar2.begin(), ar2.end(), ans.begin());
    sort(ans.begin() , ans.end());

    cout<<"mearge and sorted array"<<endl;
    for(int i=0 ; i<m+n ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}