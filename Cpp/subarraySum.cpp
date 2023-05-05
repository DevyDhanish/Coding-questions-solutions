#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        long long sum = arr[0];
        int sPos = 0;
        for (int i = 1; i <= n; i++)
        {
            while (sum > s && sPos < i - 1)
            {
                sum -= arr[sPos];
                sPos++;
            }

            if (sum == s)
            {
                return vector<int>{sPos + 1, i};
            }

            if (i < n)
            {
                sum += arr[i];
            }
        }
        return vector<int>{-1};
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 20, 10};
    vector<int> output = sol.subarraySum(arr, arr.size(), 50);

    for (int i : output)
    {
        cout << i << " ";
    }
}