#include <iostream>
#include <map>

using std::map;
using std::cout;
using std::string;

class Solution{
public:
    string addBinary(string a, string b){
        int aPt = a.size() - 1;
        int bPt = b.size() - 1;
        string ans = "";
        char carryBit = ' ';

        // current char
        // 0 = 0
        // 1 = 1
        // 2 = 10
        // 3 = 11

        while(aPt >= 0 || bPt >= 0){
            char currentChar = '0';

            if(aPt >= 0){if(a[aPt] == '1'){currentChar++;}}
            if(bPt >= 0){if(b[bPt] == '1'){currentChar++;}}
            if(carryBit == '1'){currentChar++; carryBit='0';}

            if(currentChar == '0' || currentChar == '1'){ans += currentChar;}
            if(currentChar == '2'){ans += '0'; carryBit='1';}
            if(currentChar == '3'){ans += '1'; carryBit='1';}

            aPt--;
            bPt--;
        }

        if(carryBit == '1') {ans += '1';}
        return reverse(ans);
    }

    string reverse(string _s){
        string output = "";
        for(int i=_s.size()-1;i>=0;i--){
            output += _s[i];
        }
        return output;
    }
};

int main(){
    Solution sol;
    auto ans = sol.addBinary("1100","011");
                            // 011
    cout << ans;            //1111 
}
