#include<iostream>
#include<string>

using namespace std;
int main(){

    string name;
    cout<<"enter name : ";
    getline(cin , name);
    for(int i=0 ; i<name.length() ; i++){
        
        if(name[i] >= 65 && name[i] <=90){
            name[i] += 32; 
        }
        else if(name[i] >= 97 && name[i] <=122){
            name[i] -= 32;
        }
        cout<<name[i];
    }

    return 0;
}