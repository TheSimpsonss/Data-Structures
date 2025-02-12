#include <bits/stdc++.h>
using namespace std;

void findFirstOccu(int arr[], int size, int target, int &ansFirst)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ansFirst = mid;
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

void findLastOcc(int arr[], int size, int target, int &ansLast)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ansLast = mid;
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
    int arr[5] = {10, 20, 40, 40, 40};
    int size = 5;
    int target = 40;
    int ansFirst = -1;
    int ansLast = -1;

    findFirstOccu(arr, size, target, ansFirst);
    findLastOcc(arr, size, target, ansLast);

    cout << target << " first occurence is: " << ansFirst << endl
         << " last occurence is: " << ansLast;
    return 0;
}