#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution{
public:
    vector<int> plusOne(vector<int>& digits){
        int n = digits.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                digits[i]++;
            if(digits[i] == 10){
                digits[i] = 0;
                if(i != 0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }
        return digits;
    }
};

int main(){
    Solution sol;
    vector<int> myNums = {6,0};
    auto ans = sol.plusOne(myNums);
    for(auto i : ans){
        cout << i << endl;
    }
}