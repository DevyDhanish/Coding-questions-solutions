#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Solution{
    public:
        bool contains(vector<char> v, char l){
            for(char i:v){
                if(l == i) return true;
            }
            return false;
        }

        int lengthOfLongestSubstring(string s){
            vector<char> u;

            int i = 0;
            while(i < s.length()){
                if(contains(u, s[i])){
                    if(u[u.size()-1] == s[i]){
                        u.clear();
                        u.push_back(s[i]);
                    }
                    else{
                        return u.size();
                    }
                }
                else{
                    u.push_back(s[i]);
                }
                i++;
            }
            return u.size();
        }
};

int main(){
    Solution sol;
    cout << sol.lengthOfLongestSubstring("geeksforgeeks");
}
