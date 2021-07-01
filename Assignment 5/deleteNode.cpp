#include <bits/stdc++.h>
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

void deleteNode(Node *head, int i){
    if(i == head->data){
        head = head->next;
    }
    Node *ptr = head->next;
    Node *prev = head;
    while(ptr!=NULL){
        if(ptr->data == i){
            prev->next = ptr->next;
            delete ptr;
            return;
        }
        prev = ptr;
        ptr = ptr->next;
    }
}

void printLinkedList(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main(){
    Node * head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    deleteNode(head, 3);
    printLinkedList(head);
}