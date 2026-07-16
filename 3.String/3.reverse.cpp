// reverse a string

#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string s;
//     cout<<"enter a string : ";
//     getline(cin , s);

//     for(int i=s.length()-1 ; i>=0 ; i--){
//         cout<<s[i];
//     }

//     return 0;
// }



int main(){
    string s;
    getline(cin , s);
    int index =-1;
    for(int i=0 ; i<=s.length() ; i++){
        if(i == s.length() || s[i] == ' '){
            int start = index + 1;
            int end = i-1;
            while(start < end){
                swap(s[start] , s[end]);
                start++;
                end--;
            }
            index = i;
        }
    }
    cout<<s;
}