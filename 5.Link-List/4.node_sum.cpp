#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* temp = head;
    int sum=0;
    while(temp !=NULL){
        sum += temp->data;
        temp = temp->next;
    }
    cout<<sum;
}
