#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        int length = array.size();
        int total = (length + 1) * (length + 2) / 2;

        for (int i = 0; i < length; i++)
        {
            total -= array[i];
        }

        return total;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1};
    cout << sol.MissingNumber(arr, 2);
}