//check the giving string is valid or not means its should not contain any spaces and symbol only contain number and letter

#include<iostream>
#include<string>

using namespace std;

void valid(string s){
    bool is_valid = true;
    for(int i=0 ; i<s.length() ; i++){

        if(!(s[i] >= 65 && s[i] <=90)  &&  !(s[i] >= 97 && s[i] <=122)   &&  !(s[i] >= 48 && s[i] <= 57)){
            is_valid = false;
            break;
        }
    }
    if(!is_valid){
        cout<<"string is invalid";
    }
    else{
        cout<<"string is valid";
    }
}

int main(){
    string s;
    cout<<"enter a string : ";
    getline(cin , s);

    valid(s);
}