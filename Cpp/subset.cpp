#include <iostream>

using std::cout;
using std::string;

void merge(int a[], int l, int m, int r)
{
    int l1 = m - l + 1;
    int r1 = r - m;

    int leftArray[l1];
    int rightArray[r1];

    for (int i = 0; i < l1; i++)
    {
        leftArray[i] = a[l + i];
    }

    for (int i = 0; i < r1; i++)
    {
        rightArray[i] = a[m + 1 + i];
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

string isSubset(int a1[], int a2[], int n, int m)
{
    if (m > n)
        return "No";

    mergeSort(a1, 0, n - 1);
    mergeSort(a2, 0, m - 1);

    if (a1[n - 1] < a2[0])
        return "No";

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (a1[i] > a2[j])
        {
            return "No";
        }
        if (a1[i] < a2[j])
        {
            i++;
        }
        if (a1[i] == a2[j])
        {
            i++;
            j++;
        }
    }
    return "Yes";
}

int main()
{
    int n1[5] = {1, 2, 3, 4, 5};
    int n2[3] = {1, 3, 4};
    cout << isSubset(n1, n2, 5, 3);
    return 0;
}