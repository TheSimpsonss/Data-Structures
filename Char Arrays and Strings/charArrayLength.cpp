#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

int main()
{

    char arr[100];
    int size = 100;

    cin.getline(arr, 100, '\n');

    int ans = getLength(arr, size);

    cout << "Length of the given character array: " << ans;
    return 0;
}