#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    //create node
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    //store data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    //connect node
    head->next = second;
    second->next = third;
    third->next = NULL;

    //traverse the list
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}