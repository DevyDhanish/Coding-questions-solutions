#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    int stonesToRemove = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            stonesToRemove++;
        }
    }

    cout << stonesToRemove;

    return 0;
}