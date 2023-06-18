#include <iostream>
#include <cctype>

using std::string;
using std::tolower;
using std::cout;
using std::isalpha;
using std::isalnum;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        string word = "";
        string reverse = "";
        while(i < s.size() && j >= 0){
            if(s[i] != ' ' && isalpha(s[i]) || isalnum(s[i])){
                word += tolower(s[i]);
            }
            if(s[j] != ' ' && isalpha(s[j]) || isalnum(s[j])){
                reverse += tolower(s[j]);
            }

            i++;
            j--;
        }

        i = 0;
        while(i < word.size()){
            if(word[i] != reverse[i]){
                return false;
            }
            i++;
        }

        return true;
    }
};

int main(){
    Solution sol;
    if(sol.isPalindrome("0p")){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}