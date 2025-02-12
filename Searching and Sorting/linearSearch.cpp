#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {12, 21, 31, 4, 2};
    int size = 5;
    int key = 21;

    int ans = linearSearch(arr, size, key);

    if (ans == -1)
    {
        cout << "Key is not found!";
    }

    else
    {
        cout << key << " is found at index: " << ans;
    }

    return 0;
}