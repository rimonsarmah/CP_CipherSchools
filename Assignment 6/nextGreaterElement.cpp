#include <bits/stdc++.h>
using namespace std;

void printRes(vector<int> arr)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < arr.size(); i++) 
    {
 
        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }
        while (s.empty() == false
               && s.top() < arr[i]) 
        {
            cout << s.top() << " => " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (s.empty() == false) {
        cout << s.top() << " => " << -1 << endl;
        s.pop();
    }
}
int main()
{
    vector<int> arr = { 11, 13, 21, 3 };
    printRes(arr);
    return 0;
}