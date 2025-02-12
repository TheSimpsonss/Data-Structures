class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        int minValue = INT_MAX;
        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[left] <= nums[right])
            {
                minValue = min(minValue, nums[left]);
                break;
            }

            if (nums[left] <= nums[mid])
            {

                minValue = min(minValue, nums[left]);

                left = mid + 1;
            }
            else
            {
                minValue = min(minValue, nums[mid]);
                right = mid - 1;
            }
        }
        return minValue;
    }
};