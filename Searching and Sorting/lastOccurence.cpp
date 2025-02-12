// Find Last occurence of given element in the array

#include <bits/stdc++.h>
using namespace std;

void findLastOcc(int arr[], int size, int target, int &ansIndex)
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
            start = mid + 1;
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
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 40};
    int size = 5;
    int target = 40;
    int ansIndex = -1;

    findLastOcc(arr, size, target, ansIndex);

    cout << target << " last occurence is: " << ansIndex;
    return 0;
}