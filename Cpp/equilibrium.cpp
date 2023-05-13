#include <iostream>

class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {
        if (n == 1)
            return 1;

        int l = 0;
        int r = 0;
        int m = 0;

        for (int i = 0; i < n; i++)
        {
            r += a[i];
        }

        while (m <= (n - 1))
        {
            printf("Right - %d left - %d \n", r, l);
            l += a[m];
            if (r == l)
            {
                return m + 1;
            }
            r -= a[m];
            m++;
        }

        return -1;
    }
};

int main()
{
    Solution sol;
    long long arr[] = {1, 7, 3, 6, 5, 6};
    std::cout << sol.equilibriumPoint(arr, sizeof(arr) / sizeof(long long));
    return 0;
}