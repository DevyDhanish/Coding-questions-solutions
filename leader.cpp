#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::reverse;
using std::vector;

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> output;
        int right_total = 0;

        for (int i = (n - 1); i >= 0; i--)
        {
            if (a[i] >= right_total)
            {
                output.push_back(a[i]);
            }

            right_total += a[i];
        }

        int i = 0;
        int j = output.size() - 1;

        while (i < j)
        {
            int temp = output[i];
            output[i] = output[j];
            output[j] = temp;

            i++;
            j--;
        }

        return output;
    }
};

int main()
{
    int arr[7] = {63, 70, 80, 33, 33, 47, 20};
    Solution sol;
    for (auto i : sol.leaders(arr, 7))
    {
        cout << " " << i;
    }
    return 0;
}