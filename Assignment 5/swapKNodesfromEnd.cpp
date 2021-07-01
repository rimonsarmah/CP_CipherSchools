#include <bits/stdc++.h>
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
void push(Node **head, int new_data) 
{ 
    Node *new_node = new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head); 
    (*head) = new_node; 
} 
  
void printLinkedList(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int countNodes(Node *s) 
{ 
    int count = 0; 
    while (s != NULL) 
    { 
        count++; 
        s = s->next; 
    } 
    return count; 
} 

void swapKth(Node **head, int k) 
{ 
    int n = countNodes(*head); 
    if (n < k)  return; 
    if (2*k - 1 == n) return; 
    Node *x = *head; 
    Node *x_prev = NULL; 
    for (int i = 1; i < k; i++) 
    { 
        x_prev = x; 
        x = x->next; 
    } 
    Node *y = *head; 
    Node *y_prev = NULL; 
    for (int i = 1; i < n-k+1; i++) 
    { 
        y_prev = y; 
        y = y->next; 
    } 
    if (x_prev) 
        x_prev->next = y; 
    if (y_prev) 
        y_prev->next = x; 
    Node *temp = x->next; 
    x->next = y->next; 
    y->next = temp; 
    if (k == 1) 
        *head = y; 
    if (k == n) 
        *head = x; 
} 
  
int main() 
{
    Node *head = NULL; 
    for (int i = 8; i >= 1; i--) 
       push(&head, i); 
  
    cout << "Original Linked List: "; 
    printLinkedList(head); 
  
    for (int k = 1; k < 9; k++) 
    { 
        swapKth(&head, k); 
        cout << " Modified List for k = " << k << endl; 
        printLinkedList(head); 
    } 
  
    return 0; 
}