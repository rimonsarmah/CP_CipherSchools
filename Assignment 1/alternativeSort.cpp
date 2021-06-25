#include<bits/stdc++.h>
using namespace std;

void alternativeSort(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int beg = 0, last = arr.size()-1;
    while(beg<last){
        cout<<arr[last]<<" "<<arr[beg]<<" ";
        beg++;
        last--;
    }
    if(last%2 != 0){
        cout<<arr[beg];
    }
}

int main(){
    vector<int> a = {1,2,3,5,4,2,2,7,5};
    alternativeSort(a);
    return 0;
}
