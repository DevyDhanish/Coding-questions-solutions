#include <iostream>

using std::cout;
using std::endl;

class Solution{
public:
    int sqrt(int x){
        int i = 0;
        int sq = i*i;
        while(x >= sq){
            i++;
            sq = i*i;
        }
        return (int) (i - 1);
}
};

int main(){
    Solution sol;
    auto ans = sol.sqrt(180);
    cout << ans;
}