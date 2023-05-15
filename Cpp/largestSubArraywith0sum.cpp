#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout;
using std::max;
using std::unordered_map;
using std::vector;

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        // Map to store the previous sums
        unordered_map<int, int> presum;

        int sum = 0;     // Initialize the sum of elements
        int max_len = 0; // Initialize result

        // Traverse through the given array
        for (int i = 0; i < n; i++)
        {

            // Add current element to sum
            sum += A[i];
            if (sum == 0)
                max_len = i + 1;

            // Look for this sum in Hash table
            if (presum.find(sum) != presum.end())
            {

                // If this sum is seen before, then update
                // max_len
                max_len = max(max_len, i - presum[sum]);
            }
            else
            {
                // Else insert this sum with index
                // in hash table
                presum[sum] = i;
            }
        }
        return max_len;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << sol.maxLen(arr, arr.size());
    return 0;
}