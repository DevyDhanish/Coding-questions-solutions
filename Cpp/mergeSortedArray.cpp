#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (m == 1 && n == 0)
            return;
        vector<int> output;
        int i = 0;
        int j = 0;

        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                output.push_back(nums1[i]);
                i++;
            }
            else
            {
                output.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m)
        {
            output.push_back(nums1[i]);
            i++;
        }

        while (j < n)
        {
            output.push_back(nums2[j]);
            j++;
        }

        nums1 = output;
    }
};

int main()
{
    Solution sol;
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {2, 5, 6};
    sol.merge(n1, n1.size(), n2, n2.size());

    for (auto i : n1)
    {
        cout << i << " ";
    }
    return 0;
}