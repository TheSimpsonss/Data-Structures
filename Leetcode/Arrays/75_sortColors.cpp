class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                countZero++;
            }
            else if (nums[i] == 1)
            {
                countOne++;
            }
            else if (nums[i] == 2)
            {
                countTwo++;
            }
        }

        int index = 0;
        while (countZero--)
        {
            nums[index] = 0;
            index++;
        }
        while (countOne--)
        {
            nums[index] = 1;
            index++;
        }
        while (countTwo--)
        {
            nums[index] = 2;
            index++;
        }
    }
};