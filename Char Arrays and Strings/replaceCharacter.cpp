/*

------------Replace Character-----------

Input: My@Name@is@vanshita
Output: My__Name__is__vanshita

*/

#include <bits/stdc++.h>
using namespace std;

void replaceChar(char arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '@')
        {
            arr[i] = '__';
        }
    }
}

int main()
{

    char arr[100];
    int size = 100;

    cin.getline(arr, 100, '\n');
    replaceChar(arr, size);

    cout << arr;

    return 0;
}