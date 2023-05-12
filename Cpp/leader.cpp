#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> output;
        int i = n - 1;
        int j = i;

        while (j >= 0)
        {
            if (a[j] >= a[i])
            {
                output.push_back(a[j]);
                i = j;
            }
            j--;
        }

        i = 0;
        j = output.size() - 1;

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
    auto ans = sol.leaders(arr, 7);
    for (auto i : ans)
    {
        cout << " " << i;
    }
    return 0;
}