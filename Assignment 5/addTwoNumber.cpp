#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(Node** head_ref, int new_data)
{
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

Node* addTwoLists(Node* first, Node* second)
{
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;
    while (first != NULL || second != NULL) {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (res == NULL)
            res = temp;
        else
            prev->next = temp;
        prev = temp;
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
        temp->next = newNode(carry);
    return res;
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main(void)
{
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;
    push(&first, 1);
    push(&first, 2);
    push(&first, 3);
    push(&first, 4);
    push(&first, 5);
    printf("First List");
    printList(first);
    push(&second, 1);
    push(&second, 2);
    cout << "Second List";
    printList(second);
    res = addTwoLists(first, second);
    cout << "Sum List ";
    printList(res);
 
    return 0;
}