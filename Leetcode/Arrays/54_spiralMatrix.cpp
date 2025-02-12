class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();
        int total_ele = m * n;

        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;

        int count = 0;
        vector<int> ans;

        while (count < total_ele)
        {

            // Print starting row
            for (int i = startingCol; i <= endingCol && count < total_ele; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }

            startingRow++;

            // Print ending column
            for (int i = startingRow; i <= endingRow && count < total_ele; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Print ending row
            for (int i = endingCol; i >= startingCol && count < total_ele; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // Print starting column
            for (int i = endingRow; i >= startingRow && count < total_ele; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};