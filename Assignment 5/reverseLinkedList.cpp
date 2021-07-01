#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int i){
        data = i;
        next = NULL;
    }
};

Node* reverseLL(Node *head){
    if(head == NULL)
        return NULL;
    Node *prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

int main(){
    Node *head = new Node(1);
    Node *ptr = new Node(2);
    Node *ptr1 = new Node(3);
    head->next = ptr;
    ptr->next = ptr1;
    Node *ptr2 = reverseLL(head);
    while(ptr2!=NULL){
        cout<<"->"<<ptr2->data;
        ptr2 = ptr2->next;
    }
    return 0;
}