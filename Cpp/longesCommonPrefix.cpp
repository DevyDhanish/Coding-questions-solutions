#include <iostream>

using std::cout;
using std::string;

class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
        string result = arr[0];
        int len = result.length();

        for (int i = 1; i < N; i++)
        {
            while (arr[i].find(result) != 0)
            {

                result = result.substr(0, len - 1);
                len--;

                if (result.empty())
                {
                    return "-1";
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    string arr[] = {"apple", "ap", "april"};
    cout << sol.longestCommonPrefix(arr, sizeof(arr) / sizeof(arr[0])) << "\n";
    return 0;
}