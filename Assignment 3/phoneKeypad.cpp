#include <bits/stdc++.h>
using namespace std;

vector<string> keypad ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generatePossibleCombinationsHelper(string digits, vector<string>& result, int index, string resSoFar) {
    if (index == digits.size()) {
        result.push_back(resSoFar);
        return;
    } 

    string possibleMoves = keypad[digits[index] - '0'];
    for (int i = 0; i < possibleMoves.size(); i++) {
        resSoFar.push_back(possibleMoves[i]);
        generatePossibleCombinationsHelper(digits, result, index + 1, resSoFar);
        resSoFar.pop_back();
    }

}
vector<string> generatePossibleCombinations(string digits) {
    if (digits.empty()) {
        return vector<string>{};
    }
    vector<string> result;
    generatePossibleCombinationsHelper(digits, result, 0, "");
    return result;
}

int main() {
    vector<string> res = generatePossibleCombinations("12345");
    for(string s : res){
        cout<<s<<endl;
    }
    return 0;
}