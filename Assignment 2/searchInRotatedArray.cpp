#include<bits/stdc++.h>
using namespace std;

int searchInRotated(vector<int> arr, int key){
    int beg = 0, last = arr.size();
    while(beg<=last){
        int mid = beg + (last - beg) / 2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[beg]<arr[mid]){
            if(key>=arr[beg] && key<arr[mid]){
                last = mid - 1;
            }
            else
                beg = mid + 1;
        }
        else{
            if(key>arr[mid] && key<arr[last]){
                beg = mid + 1;
            }
            else{
                last = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> a = {10, 20, 40, 60 ,70, 80, 1, 2};
    int find = searchInRotated(a,1);
    if(find == -1) cout<<"Not found";
    else cout<<find;
    return 0;
}
