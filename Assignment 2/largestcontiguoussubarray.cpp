#include<bits/stdc++.h>
using namespace std;

int largestContiguousArraySum(vector<int> vec){
    int curr_sum = vec[0], max_sum = vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]>curr_sum+vec[i]){
            curr_sum = vec[i];
        }
        else{
            curr_sum += vec[i];
        }
        max_sum = max(curr_sum,vec[i]);
    }
    return max_sum;
}

int main(){
    vector<int> ip = {1,2,3,7,8,9,1,1,1,4,5,3};
    int ms = largestContiguousArraySum(ip);
    cout<<ms<<" ";
    return 0;
}
