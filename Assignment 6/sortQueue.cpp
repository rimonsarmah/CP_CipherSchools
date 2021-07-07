#include <bits/stdc++.h> 
using namespace std; 

void FrontToLast(queue<int>& q, int qsize) 
{
    if (qsize <= 0) 
        return; 
    q.push(q.front()); 
    q.pop(); 
    FrontToLast(q, qsize - 1); 
} 

void pushInQueue(queue<int>& q, int temp, int qsize) 
{
    if (q.empty() || qsize == 0) { 
        q.push(temp); 
        return; 
    } 
    else if (temp <= q.front()) { 
        q.push(temp); 
        FrontToLast(q, qsize); 
    } 
    else { 
        q.push(q.front()); 
        q.pop(); 
        pushInQueue(q, temp, qsize - 1); 
    } 
} 

void sortQueue(queue<int>& q) 
{
    if (q.empty()) 
        return; 
    int temp = q.front(); 
    q.pop(); 
    sortQueue(q); 
    pushInQueue(q, temp, q.size()); 
} 

int main() 
{ 
    queue<int> qu; 
    qu.push(7); 
    qu.push(7); 
    qu.push(5); 
    qu.push(1); 
    qu.push(19); 
    qu.push(8); 
    sortQueue(qu); 
    while (!qu.empty()) { 
        cout << qu.front() << " "; 
        qu.pop(); 
    } 
} 