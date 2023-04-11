#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Solution{
    public:
        bool contains(string s, char l){
            for(int i=0;i<s.length();i++){
                if(s[i] == l){
                    return true;
                }
            }
            return false;
        }
        int lengthOfLongestSubstring(string s){
            string subString;

            int i = 0;
            while(i < s.length()){
                int j = i + 1;
                if(s[i] == s[j] || contains(subString, s[i])){
                    return subString.length();
                }
                if(contains(subString, s[i]) == false && s[i] != s[j]){
                    subString += s[i];
                }
                i++;
            }
            return subString.length();
        }
};

int main(){
    Solution sol;
    cout << sol.lengthOfLongestSubstring("bbbbb");
}