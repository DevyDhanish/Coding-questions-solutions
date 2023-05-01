#include <iostream>

using std::cout;

class Solution {
  public:
    int binarysearch(int arr[], int size, int target) {
        int low = 0;
        int high = size - 1;
        
        while(low <= high){
            int mid = (low + high) / 2;

            if(target < arr[mid]){
                high = mid - 1;
            }

            if(target > arr[mid]){
                low = mid + 1;
            }
            if(target == arr[mid]){
                return mid;
            }
        }

        return -1;
        
    }
};

int main(){

    Solution sol;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    cout << sol.binarysearch(arr, 10, 14);
    return 0;
}