#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int x) {
    if (st.size()!=0) {  
        int y = st.top();
        if (x < y) {
            st.pop();
            insert(st, x);
            st.push(y);
        } 
        else {
           st.push(x);
        }
    } 
    else {
        st.push(x); 
    }
}

void sort(stack<int> &st) {
    if (st.size()!=0) {
        int x = st.top();
        st.pop();
        sort(st);
        insert(st, x);
    }
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(1);
    st.push(9);
    st.push(2);
    sort(st);
    while(!st.empty()) 
    { 
        int num=st.top(); 
        st.pop(); 
        cout << num << " "; 
    } 
    return 0;
}