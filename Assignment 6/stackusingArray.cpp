#include <bits/stdc++.h>
using namespace std;

class Stack{
    int topi;
    public:
    vector<int> st;
    Stack(){
        topi = -1;
    }
    void push(int i){
        st.push_back(i);
        topi++;
    }
    void pop(){
        if(topi == -1){
            return;
        }
        st.pop_back();
        topi--;
    }
    int top(){
        return st[topi];
    }
    void printStack(){
        for(int i = 0; i <= topi; i++){
            cout << st[i] << " ";
        }
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(5);
    s.printStack();
    return 0;
}
