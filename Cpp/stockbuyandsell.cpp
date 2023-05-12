#include <iostream>
#include <vector>

using std::vector;

class Solution
{
public:
    // Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {
        vector<vector<int>> output;
        if (n == 1)
            return output;
        int max_profit = 0;
        int i = 0;
        int j = 0;

        while (i < n)
        {
            while (i < n && A[i + 1] <= A[i])
                i++;

            if (i == n - 1)
                break;
            j = i++;

            while (i < n && A[i] > A[i - 1])
                i++;

            output.push_back(vector<int>{j, i - 1});
        }
        return output;
    }
};

int main()
{
    Solution sol;
    vector<int> stocks = {4, 2, 2, 2, 4};
    auto ans = sol.stockBuySell(stocks, stocks.size());
    for (auto i : ans)
    {
        for (auto j : i)
        {
            std::cout << j << " ";
        }
    }
    return 0;
}