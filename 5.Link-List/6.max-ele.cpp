#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* create(int arr[] , int size){
    Node* head = new Node{arr[0] , NULL};
    Node* temp = head;

    for(int i=1 ; i<size ; i++){
        temp->next = new Node{arr[i] , NULL};
        temp = temp->next;
    }
    return head;
}

int max(Node* head){
    int maxEle = head->data;

    while(head != NULL){
        if(head->data > maxEle){
            maxEle = head->data;
        }
        head = head->next;
    }
    return maxEle;
}



int main(){
    int arr[5] = {1,3, 2,4 ,7};
    
    Node* head = create(arr,5);
    cout<<max(head);
}