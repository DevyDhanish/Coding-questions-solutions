#include <iostream>
#include <map>

using std::map;
using std::cout;

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        // unordered_map to count
        // occurrences of each element
        map<int, int> count_map;
        for (int i = 0; i < n; i++) {
 
            count_map[a[i]]++;
        }
        // count_map[arr[i]]++;
 
        for (int i = 0; i < n;i++) // if count of element == k ,then
        // it is the required first element
        {
            if (count_map.find(a[i]) != count_map.end()) {
            if (count_map[a[i]] == k)
            return a[i];
            }
        }
        return -1;
    }
};


int main(){
    Solution sol;
    int n[] = {1,4,4,2,6,8,6};
    cout << sol.firstElementKTime(n, 7, 2);
}