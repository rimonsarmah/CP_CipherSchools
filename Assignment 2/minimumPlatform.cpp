#include<bits/stdc++.h>
using namespace std;

int findPlatform(vector<int> arr, vector<int> dep)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end());
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            plat_needed++;
            i++;
        }
        else if (arr[i] > dep[j]) {
            plat_needed--;
            j++;
        }
        if (plat_needed > result)
            result = plat_needed;
    }
 
    return result;
}

int main()
{
    vector<int> arr = { 900, 940, 950, 1100, 1500, 1800 };
    vector<int> dep = { 910, 1200, 1120, 1130, 1900, 2000 };
    cout << "Minimum Number of Platforms Required = "<< findPlatform(arr, dep);
    return 0;
}
