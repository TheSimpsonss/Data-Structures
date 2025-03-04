class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {

        int oneCount = INT_MIN;
        int rowNo = 0;
        int n = mat.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }
            if (count > oneCount)
            {
                oneCount = count;
                rowNo = i;
            }
        }
        ans.push_back(rowNo);
        ans.push_back(oneCount);

        return ans;
    }
};