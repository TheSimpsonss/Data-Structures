#include <bits/stdc++.h>
using namespace std;

void reverseCharArr(char arr[])
{

    int i = 0;
    int j = strlen(arr) - 1;

    while (i < j)
    {

        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reverse character array: " << arr;
}

int main()
{
    char arr[10];
    cin.getline(arr, 10, '\n');

    reverseCharArr(arr);
    return 0;
}