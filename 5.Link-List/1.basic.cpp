#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

int main(){
    //creting first node
    Node* head = new Node();
    head->data = 10;
    head->next = NULL;

    cout<<head->data;

    return 0;
}