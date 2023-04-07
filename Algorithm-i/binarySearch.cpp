#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (target < nums[mid])
            {
                high = mid - 1;
            }
            if (target > nums[mid])
            {
                low = mid + 1;
            }
            if (target == nums[mid])
            {
                return mid;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << sol.search(nums, 2);
    return 0;
}