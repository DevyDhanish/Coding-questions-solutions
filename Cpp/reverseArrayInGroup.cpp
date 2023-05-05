#include <iostream>
#include <vector>

using std::cout;
using std::vector;


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k) {
        int i = 0;
        while (i < n) {
            int j = i + k - 1;
            if (j >= n) {
                j = n - 1;
            }

        // reverse subarray
        int left = i, right = j;
        while (left < right) {
            long long temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
            }

        // move i to start of next subarray group
        i += k;
        }
    }
};

int main(){
    Solution sol;
    vector<long long> arr = {36,93,64,48,96,55,70,0,82,30,16,22,38,53,19,50,91,43,70,88,10,57,14,94,13,36,59,32,54,58,18,82,67};
    sol.reverseInGroups(arr, arr.size(), 13);

    for(auto i: arr){
        cout <<i<<" ";
    }
    return 0;
}