#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int last_in = nums.size() - 1;
        int i = 0;

        while (i <= k)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                nums[i] = nums[i - 1];
            }
            i++;
        }
        for (auto x : nums)
        {
            cout << "," << x;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    sol.rotate(nums, 3);
    return 0;
}