#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr){
    int size = arr.size();
    int sum = (size + 1) * (size + 2) / 2;
    for(int i : arr){
        sum -= i;
    }
    return sum;
}

int main(){
    vector<int> a = {1,2,3,4,6,7};
    int missing = findMissing(a);
    cout<<"Missing number is: "<<missing<<endl;
    return 0;
}