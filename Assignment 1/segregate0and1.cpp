#include<bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr){
    int res = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            swap(arr[i],arr[res]);
            res++;
        }
    }
}

int main(){
    vector<int> a = {0,1,0,1,0,1,0,1};
    segregate0and1(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
