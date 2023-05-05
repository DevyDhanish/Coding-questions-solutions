#include <iostream>

using std::string;
using std::cout;

class Solution{
public:
    int lengthOfLastWord(string s){
        int low = 0;
        int p1 = s.length() - 1;
        int p2 = p1 - 1;

        while(true){
            if(p2 < 0) return low + 1;
            //Break if p1 is a char and p2 is a blank space
            if(s[p1] != ' ' && s[p2] == ' '){
                return low + 1;
            }
            //Increment low(length of word) if p1 is a char
            if(s[p1] != ' '){
                low++;
            }
            //Advance the pointers
            p1--;
            p2--;
        }
    }
};

int main(){
    Solution sol;
    auto a = sol.lengthOfLastWord("a ");
    cout << a;
}
