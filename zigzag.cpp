#include <iostream>

using std::cout;

class Solution
{
public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n)
    {
        bool flag = true;

        for (int i = 0; i <= n - 2; i++)
        {
            if (flag)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            flag = !flag;
        }
    }
};

int main()
{
    Solution sol;
    int arr[7] = {4, 3, 7, 8, 6, 2, 1};
    sol.zigZag(arr, sizeof(arr) / sizeof(int));
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}