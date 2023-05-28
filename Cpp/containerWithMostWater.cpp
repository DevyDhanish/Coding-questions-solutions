#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    int updateArea(int &area, int a, int b)
    {
        int na = a * b;
        if (na > area)
        {
            area = na;
        }
        return area;
    }
    int maxArea(vector<int> &height)
    {
        int first = 0;
        int last = height.size() - 1;
        int area = 0;

        while (first < last)
        {

            if (height[first] < height[last])
            {
                updateArea(area, height[first], (last - first));
                first++;
            }
            else
            {
                updateArea(area, height[last], (last - first));
                last--;
            }
        }

        return area;
    }
};

int main()
{
    Solution sol;
    vector<int> a = {1, 1};
    cout << sol.maxArea(a);
    return 0;
}