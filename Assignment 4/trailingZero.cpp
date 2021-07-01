#include <bits/stdc++.h>
using namespace std;

int findTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

int main()
{
    int n = 70;
    cout << "Number of trailing 0s in " << n
         << "! is " << findTrailingZeros(n);
    return 0;
}