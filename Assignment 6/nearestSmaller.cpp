#include<bits/stdc++.h>
using namespace std; 
 
void printNearSmall(vector<int> arr) 
{ 
    stack<int> S;  
    for (int i=0; i<arr.size(); i++) 
    {
        while (!S.empty() && S.top() >= arr[i]) 
            S.pop(); 
        if (S.empty()) 
            cout << "_, "; 
            cout << S.top() << ", "; 
        S.push(arr[i]); 
    } 
} 
int main() 
{ 
    vector<int> arr = {1, 3, 0, 2, 5}; 
    printNearSmall(arr); 
    return 0; 
} 