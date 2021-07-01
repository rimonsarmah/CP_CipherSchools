#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){
            data = 0;
            next = NULL;
        }
        Node(int i){
            data = i;
            next = NULL;
        }
};

Node* oddEvenList(Node* head) {
    if(head == NULL) return head;
    Node *odd = head, *even = head->next, *evenHead = even;
    while(even!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

void printLinkedList(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main(){
    Node *head = new Node(1);
    Node *ptr1 = new Node(2);
    Node *ptr2 = new Node(3);
    Node *ptr3 = new Node(4);
    Node *ptr4 = new Node(5);
    head->next = ptr1;
    head->next->next = ptr2;
    head->next->next->next = ptr3;
    head->next->next->next->next = ptr4;
    Node *eoList = oddEvenList(head);
    printLinkedList(eoList);
    return 0;
}