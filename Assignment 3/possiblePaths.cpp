#include <bits/stdc++.h> 
using namespace std;

int numberOfPaths(int m, int n) 
{
    int dp[n] = { 1 }; 
    dp[0] = 1; 
  
    for (int i = 0; i < m; i++) { 
        for (int j = 1; j < n; j++) { 
            dp[j] += dp[j - 1]; 
        } 
    } 
  
    return dp[n - 1]; 
} 

int main() 
{ 
    cout << numberOfPaths(3, 3);
} 