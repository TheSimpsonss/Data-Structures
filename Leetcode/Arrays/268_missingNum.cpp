class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        int sumFirst = 0;
        int sumGiven = 0;

        for (int i = 0; i <= n; i++)
        {
            sumFirst = sumFirst + i;
        }

        for (int i = 0; i < n; i++)
        {
            sumGiven = sumGiven + nums[i];
        }

        int missingNum = sumFirst - sumGiven;
        return missingNum;
    }
};