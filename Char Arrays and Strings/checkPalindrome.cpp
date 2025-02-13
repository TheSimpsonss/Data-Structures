#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char arr[])
{

    int len = strlen(arr);
    int i = 0;
    int j = len - 1;

    while (i <= j)
    {

        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[10];
    cin >> arr;

    bool ans = checkPalindrome(arr);

    if (ans)
    {
        cout << "Valid palindrome!";
    }

    else
    {
        cout << "Invalid palindrome!";
    }

    return 0;
}
