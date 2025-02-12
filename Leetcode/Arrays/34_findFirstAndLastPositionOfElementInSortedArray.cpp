class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int target)
    {

        int size = arr.size();
        int start = 0;
        int end = size - 1;

        int firstPos = -1;
        int lastPos = -1;

        int mid = start + (end - start) / 2;

        while (start <= end)
        {

            mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                firstPos = mid;
                end = mid - 1;
            }

            else if (arr[mid] > target)
            {
                end = mid - 1;
            }

            else
            {
                start = mid + 1;
            }
        }

        start = 0;
        end = size - 1;
        while (start <= end)
        {

            mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                lastPos = mid;
                start = mid + 1;
            }

            else if (arr[mid] > target)
            {
                end = mid - 1;
            }

            else
            {
                start = mid + 1;
            }
        }

        return {firstPos, lastPos};
    }
};