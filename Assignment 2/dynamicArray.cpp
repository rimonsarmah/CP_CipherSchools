#include<bits/stdc++.h>
using namespace std;

class dynamicArray{
    vector<int> arr;
    public:
        dynamicArray(){
            arr = vector<int> ();
        }
        void insertNum(int n){
            arr.push_back(n);
        }
        void removeNum(){
            arr.pop_back();
        }
        void printArray(){
            for(int a: arr){
                cout<<a<<" ";
            }
        }
};

int main(){
    dynamicArray dA = dynamicArray();
    int temp, n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        dA.insertNum(temp);
    }
    cout<<"Entered elements are: ";
    dA.printArray();
    cout<<"\nDeleting last element";
    dA.removeNum();
    cout<<"\nNumbers after deletion: ";
    dA.printArray();
    cout<<endl;
    return 0;
}