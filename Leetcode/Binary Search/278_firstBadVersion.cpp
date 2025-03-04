// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int low = 1;
        int high = n;

        int mid = high + (low - high) / 2;
        int result = n;

        while (low <= high)
        {
            mid = high + (low - high) / 2;

            if (isBadVersion(mid))
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return result;
    }
};