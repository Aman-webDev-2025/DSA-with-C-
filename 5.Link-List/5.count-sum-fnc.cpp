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

int count(Node* head){
    int c=0;
    while(head != NULL){
        c++;
        head = head->next;
    }
    return c;
}

int sum(Node* head){
    int sum=0;
    while(head != NULL){
        sum += head->data;
        head = head->next;
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};

    Node* head = create(arr , 5);
    cout<<count(head)<<endl;
    cout<<sum(head);
}