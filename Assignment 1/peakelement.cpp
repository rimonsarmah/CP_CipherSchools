#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr){
    int beg = 0, last = arr.size()-1;
    while(beg<last){
        int mid = beg + (last - beg) / 2;
        if(arr[mid]>arr[mid+1])
            last = mid;
        else
            beg = mid + 1;
    }
    return beg;
}

int main(){
    vector<int> nums = {1,2,5,4,1};
    int peakindex = findPeak(nums);
    cout<<"The peak element is: "<<nums[peakindex];
    return 0;
}
