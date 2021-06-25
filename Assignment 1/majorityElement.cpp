#include<bits/stdc++.h>
using namespace std;

int findCandidate(vector<int> a){
    int major_idx = 0, count = 1;
    for(int i = 1; i < a.size(); i++){
        if(a[major_idx] == a[i])
            count++;
        else
            count--;
        if(count == 0){
            major_idx = i;
            count = 1;
        }
    }
    return a[major_idx];
}

bool isMajority(vector<int> arr, int cand){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == cand){
            count++;
        }
    }
    return (count > (arr.size() / 2));
}

void printMaj(vector<int> arr){
    int c = findCandidate(arr);
    if(isMajority(arr,c)){
        cout<<"Majority element is: "<<c;
    }
    else
        cout<<"There's no majority element.";
}

int main(){
    vector<int> a = {1,2,3,3,3,3,3,3,3,1,2};
    printMaj(a);
    cout<<endl;
    return 0;
}