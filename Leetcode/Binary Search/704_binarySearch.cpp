class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int size = arr.size();
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

            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
        }

        return -1;
    }
};