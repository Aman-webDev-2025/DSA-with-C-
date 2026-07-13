//check both string is of same length and contain same alphabet or not

#include<iostream>
#include<string>
using namespace std;

int main(){

    string p , q ,ans="";
    bool visited[1000] = {false};
    cout<<"please enter two string : "<<endl;
    getline(cin , p);
    getline(cin , q);

    if(p.length() != p.length()){
        cout<<"given string is not an anagram";
        return 0;
    }

    for(int i=0 ; i<p.length() ; i++){
        for(int j=0 ; j<q.length() ; j++){
            
            if(p[i] == q[j] && !visited[j]){ 
                ans += p[i];   
                visited[j] = true; 
                break;         
            } 
        }
    }
    if(p.length() != q.length() || p.length() != ans.length()){ 
        cout<<"given string is not an anagram"; 
    } 
    else{ 
        cout<<"given string is an anagram"; 
    } 

    return 0;
}