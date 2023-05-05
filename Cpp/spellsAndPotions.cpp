#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> noOfSucessfullPairs = {};
        int pairs = 0;

        for(int i=0;i<spells.size();i++){
            for(int j=0;j<potions.size();j++){
                if(potions[j] * spells[i] >= success){
                    pairs++;
                }
            }
            noOfSucessfullPairs.push_back(pairs);
            pairs = 0;
        }
        return noOfSucessfullPairs;
    }
};

int main(){
    Solution sol;
    vector<int> spells = {3,1,2};
    vector<int> potions = {8,5,8};

    for(int i : sol.successfulPairs(spells, potions, 16)){
        cout << i;
    }
}