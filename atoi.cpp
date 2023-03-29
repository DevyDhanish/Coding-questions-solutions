#include <iostream>
#include <map>

using std::cout;
using std::map;
using std::string;

class Solution
{
public:
    int myAtoi(string s)
    {
        int sum = 0;
        int p1 = 0;
        int p2 = p1 + 1;
        int sign = 1;
        map<char, int> numbers = {
            {'0', 0},
            {'1', 1},
            {'2', 2},
            {'3', 3},
            {'4', 4},
            {'5', 5},
            {'6', 6},
            {'7', 7},
            {'8', 8},
            {'9', 9}};
        
        while(true){
            if(s[p1] == '-') sign = -1;

            if(p2 > s.length()){
                sum = sum * 1 + numbers[s[p1]];
                break;
            }

            if(s[p1] != ' ' && s[p2] == ' '){ 
                sum = sum * 10 + numbers[s[p1]];
                break;
            }

            if(sum >= 2147483647 && sum <= -2147483647){
                sum = 2147483647;
                break;
            }

            if(s[p1] != ' ') sum = sum * 10 + numbers[s[p1]];

            p1++;
            p2++;
        }

        return sum * sign;
    }
};

int main()
{
    Solution sol;
    auto a = sol.myAtoi("-91283472332");
    cout << a;
}