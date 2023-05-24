#include <iostream>

using std::cout;
using std::string;

class Solution
{
public:
    string getSmallestWord(string arr[], int Size)
    {
        string smallestWord = arr[0];

        for (int i = 0; i < Size; i++)
        {
            if (arr[i].size() < smallestWord.size())
            {
                smallestWord = arr[i];
            }
        }

        return smallestWord;
    }

    string longestCommonPrefix(string arr[], int N)
    {
        if (N == 0)
            return "-1";
        string smallestWord = getSmallestWord(arr, N);

        int i = 0;
        while (i < N)
        {
            for (int j = smallestWord.size() - 1; j >= 0; j--)
            {
                if (smallestWord.size() <= 0)
                    return "-1";

                if (arr[i][j] != smallestWord[j])
                {
                    smallestWord.resize(smallestWord.size() - 1);
                }
            }
            i++;
        }

        return smallestWord;
    }
};

int main()
{
    Solution sol;
    string arr[] = {"apple", "ap", "april"};
    cout << sol.longestCommonPrefix(arr, sizeof(arr) / sizeof(arr[0])) << "\n";
    return 0;
}