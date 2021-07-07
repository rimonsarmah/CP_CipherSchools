#include<bits/stdc++.h>  
using namespace std;  

class Interval  
{
    public:  
    int s, e;  
};  

bool comp(Interval a, Interval b)  
{ 
    return (a.s < b.s); 
}  
  
void mergeIntervals(vector<Interval> &arr)  
{
    sort(arr.begin(), arr.end(), comp);  
  
    int index = 0;
    for (int i=1; i<arr.size(); i++)  
    {
        if (arr[index].e >=  arr[i].s)  
        {  
            arr[index].e = max(arr[index].e, arr[i].e);  
            arr[index].s = min(arr[index].s, arr[i].s);  
        }  
        else { 
            index++; 
            arr[index] = arr[i];  
        }     
    }  
    cout << "\n The Merged Intervals are: ";  
    for (int i = 0; i <= index; i++)  
        cout << "[" << arr[i].s << ", " << arr[i].e << "] ";  
}  

int main()  
{  
    vector<Interval> arr = { {6,8}, {1,9}, {2,4}, {4,7} };  
    mergeIntervals(arr);  
    return 0;  
}  