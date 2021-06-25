#include<bits/stdc++.h>
using namespace std;

bool willMeet(int x1, int v1, int x2, int v2){
    if(x1 < x2 && v1 < v2) 
        return false;
    if(x1 > x2 && v1 > v2)
        return false;
    if(x1 < x2){
        swap(x1, x2);
        swap(v1, v2);
    }
    if((x1 - x2) % (v1 - v2) == 0)
        return true;
    else
        return false;

}

int main(){
    int x1, v1, x2, v2;
    cout<<"Enter x1, v1, x2, v2";
    cin>>x1>>v1>>x2>>v2;
    if(willMeet(x1,v1,x2,v2))
        cout<<"They will meet";
    else
        cout<<"They will not meet";
    return 0;
}
