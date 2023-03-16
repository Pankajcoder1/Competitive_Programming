/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Add main code here

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> temp;
            if (i == 1)
            {
                temp.push_back(1);
            }
            else
            {
                temp.push_back(1);
                for (int j = 2; j < i; j++)
                {
                    temp.push_back(ans[ans.size() - 1][j - 2] + ans[ans.size() - 1][j - 1]);
                }
                temp.push_back(1);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};