#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {2, 4, 31, 65, 78, 89, 90};
    int size = 7;
    int target = 78;

    int ans = binarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << "Not found!";
    }

    else
    {
        cout << target << " found at the index: " << ans;
    }

    return 0;
}