class Solution
{
private:
    void helper(vector<string> &ans, int oc, int cc, int n, string s)
    {

        // base-case
        if (oc == n && cc == n)
        {
            ans.push_back(s);
            return;
        }

        if (oc < n)
        {
            helper(ans, oc + 1, cc, n, s + "(");
        }

        if (cc < oc)
        {
            helper(ans, oc, cc + 1, n, s + ")");
        }
    }

public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        int oc = 0;
        int cc = 0;

        helper(ans, oc, cc, n, "");
        return ans;
    }
};