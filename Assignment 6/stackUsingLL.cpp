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

class Stack{
    int topi;
    public:
    Node *head;
    Stack(){
        topi = -1;
        head = NULL;
    }
    void push(int i){
        Node *temp = new Node(i);
        if(head == NULL){
            head = temp;
            topi++;
            return;
        }
        Node *ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        topi++;
    }
    void pop(){
        if(head == NULL){
            return;
        }
        if(head->next == NULL){
            head = NULL;
            topi--;
        }
        Node *ptr = head;
        while(ptr->next->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = NULL;
        topi--;
    }
    int top(){
        if(head == NULL) return -1;
        if(head->next == NULL) return head->data;
        Node *ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        return ptr->data;
    }
    void printStack(){
        Node *ptr = head;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(5);
    s.printStack();
    return 0;
}