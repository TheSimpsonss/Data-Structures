// Find first occurrence in the given array

#include <bits/stdc++.h>
using namespace std;

void findFirstOccu(int arr[], int size, int target, int &ansIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ansIndex = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
}

int main()
{

    int arr[6] = {10, 10, 20, 20, 30, 40};
    int size = 6;
    int target = 20;
    int ansIndex = -1;

    findFirstOccu(arr, size, target, ansIndex);

    cout << target << " found at index: " << ansIndex;
    return 0;
}