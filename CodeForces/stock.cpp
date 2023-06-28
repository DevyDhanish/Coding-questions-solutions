#include <iostream>
#include <vector>

using std::vector;
using std::cout;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        int l_cost = prices[0];
        short int i_lcost = 0;
        short int i_maxProf = 0;
        
        short int i = 0;

        while(i < prices.size()){
            if(prices[i] > maxProf){
                maxProf = prices[i];
                i_maxProf = i;
            }
            i++;
        }

        short int j = 0;

        while(j < prices.size()){
            if(prices[j] < l_cost && j < i_maxProf){
                l_cost = prices[j];
                i_lcost = j;
            }
            j++;
        }

        cout << "i_lcost = " << i_lcost << "\n";
        cout << "lcost = " << l_cost << "\n";


        cout << "max prof = " << maxProf << "\n";
        cout << "i max prof = " << i_maxProf << "\n";

        int result = maxProf - l_cost;

        if(result > 0) return result;
        else return 0;
    }
};

int main(){
    Solution sol;
    vector<int> input = {7,1,5,3,6,4};
    cout << sol.maxProfit(input);
}