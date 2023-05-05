#include <iostream>
#include <map>
#include <vector>

using std::vector;
using std::map;
using std::cout;
using std::string;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "") return vector<string> {};

        vector<string> output;
        int s_ptr =  0;

        map<char, string> dtol = {
            {'1', ""},
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        while(s_ptr < digits.length()){
            
            s_ptr++;
        }
        return output;
    }
};

int main(){
    Solution sol;
    sol.letterCombinations("23");
    return 0;
}