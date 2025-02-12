#include <bits/stdc++.h>
using namespace std;

void upperToLower(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
    cout << "Upper to lower case: " << arr << endl;
}

void lowerToUpper(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
    cout << "Lower to upper case: " << arr;
}

int main()
{
    char arr[100];
    int size = 100;

    cin.getline(arr, 100, '\n');

    upperToLower(arr, size);

    lowerToUpper(arr, size);

    return 0;
}