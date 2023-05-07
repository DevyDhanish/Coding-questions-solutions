#include <iostream>

class Solution
{
public:
    void merge(int a[], int l, int m, int r)
    {
        int l1 = m - l + 1;
        int r1 = r - m;

        int leftArray[l1];
        int rightArray[r1];

        for (int i = 0; i < l1; i++)
        {
            leftArray[i] = a[l + i];
            std::cout << "Left array = " << leftArray[i] << std::endl;
        }

        for (int i = 0; i < r1; i++)
        {
            rightArray[i] = a[m + 1 + i];
            std::cout << "right array = " << rightArray[i] << std::endl;
        }

        int i = l;
        int j = 0;
        int k = 0;

        while (j < l1 && k < r1)
        {
            if (leftArray[j] <= rightArray[k])
            {
                a[i] = leftArray[j];
                j++;
            }
            else
            {
                a[i] = rightArray[k];
                k++;
            }
            i++;
        }

        while (j < l1)
        {
            a[i] = leftArray[j];
            j++;
            i++;
        }

        while (k < r1)
        {
            a[i] = rightArray[k];
            k++;
            i++;
        }
    }

    void mergeSort(int a[], int left, int right)
    {
        if (left >= right)
        {
            return;
        }

        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
    void sort012(int a[], int n)
    {
        mergeSort(a, 0, n - 1);
    }
};

int main()
{
    int arr[] = {2, 1, 3, 6, 1, 3, 5, 6, 4, 2, 35, 5, 2};
    Solution sol;
    sol.sort012(arr, sizeof(arr) / sizeof(int));
    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    return 0;
}