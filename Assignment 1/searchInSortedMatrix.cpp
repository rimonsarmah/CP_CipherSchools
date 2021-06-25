#include<bits/stdc++.h>
using namespace std;

bool searchInMatrix(vector<vector<int>> matrix, int key){
    int m = matrix.size(), n = matrix[0].size(), i = 0, j = n - 1;
    while(i < m && j >= 0){
        if(matrix[i][j] == key){
            cout<<"Found at index ["<<i<<"]["<<j<<"]";
            return true;
        }
        else if(matrix[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> m = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    bool found = searchInMatrix(m,20);
    if(found == false)
        cout<<"Not found";
    return 0;
}
