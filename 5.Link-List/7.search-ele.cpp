#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    int arr[5] = {1,2,3,4,5};
    int srch;
    cout<<"enter element to search"<<endl;
    cin>>srch;

    Node* head = new Node{arr[0] , NULL};
    Node* temp = head;

    for(int i=1 ; i<5 ; i++){
        temp->next = new Node{arr[i] , NULL};
        temp = temp->next;
    }

    temp = head;
    bool found = false;
    while(temp != NULL){
        if(srch == temp->data){
            found = true;
            break;
        }
        temp = temp->next;
    }
    if(found){
        cout<<"got";
    }
    else{
        cout<<"not got";
    }
    return 0;
}