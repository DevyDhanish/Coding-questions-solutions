#include <iostream>
#include <vector>
#include <unordered_map>

using std::unordered_map;
using std::vector;
using std::cout;

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<long long> A, vector<long long> B, int N) {
        //Since they are equal we are not checking for it

        unordered_map<int, int> mp;

        for(int i=0;i<N;i++){
            mp[A[i]]++;
        }

        for(int i=0;i<N;i++){

            if(mp[B[i]] == 0){
                return false;
            }

            mp[B[i]]--;
        }

        return 1;
    }
};

int main(){
    Solution sol;
    vector<long long> n = {1,2,0,4};
    vector<long long> m = {1,2,3,4};
    cout << sol.check(n, m, n.size());
    return 0;
}