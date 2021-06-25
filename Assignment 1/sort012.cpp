#include <bits/stdc++.h> 
using namespace std; 
void sort012(vector<int> &a) 
{ 
    int arr_size = a.size();
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
    while (mid <= hi) { 
        switch (a[mid]) { 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
        } 
    } 
} 
int main() 
{ 
    vector<int> arr = { 0, 1, 1, 0, 1, 2, 2, 1, 1, 2, 1, 2, 0, 0, 0, 1 };
  
    sort012(arr); 
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
  
    return 0; 
} 