class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int n = nums.size();
        int j = 1;
        int i = 0;

        for (j = 1; j < n; j++)
        {
            if (nums[i] != nums[j])
            {
                i = i + 1;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};