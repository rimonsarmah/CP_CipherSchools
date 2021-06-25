#include<bits/stdc++.h>
using namespace std;

int findFirstPos(vector<int> arr, int num){
    int beg = 0, last = arr.size() - 1, res = -1;
    while(beg <= last){
        int mid = beg + (last - beg) / 2;
        if(arr[mid] > num){
            last = mid - 1;
        }
        else if(arr[mid] < num){
            beg = mid + 1;
        }
        else{
            res = mid;
            last = mid - 1;
        }
    }
    return res;
}

int findLastPos(vector<int> arr, int num){
    int beg = 0, last = arr.size() - 1, res = -1;
    while(beg <= last){
        int mid = beg + (last - beg) / 2;
        if(arr[mid] > num){
            last = mid - 1;
        }
        else if(arr[mid] < num){
            beg = mid + 1;
        }
        else{
            res = mid;
            beg = mid + 1;
        }
    }
    return res;
}

int main(){
    vector<int> a = {1,1,2,3,4,4,4,4,5,6,7,7,7,8,9};
    int first = findFirstPos(a,4);
    int last = findLastPos(a,4);
    cout<<"First and Last : "<<first<<" and "<<last;
    return 0;
}
