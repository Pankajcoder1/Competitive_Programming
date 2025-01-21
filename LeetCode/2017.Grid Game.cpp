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
    long long gridGame(vector<vector<int>> &grid)
    {
        long long m = grid[0].size(), mini = LONG_MAX;

        // we will calculate prefix of 1st row and suffix of 0th row
        vector<long long> pre(m, 0), suff(m, 0);

        // calculate prefix sum
        pre[0] = grid[1][0];
        for (int i = 1; i < m; i++)
        {
            pre[i] += grid[1][i] + pre[i - 1];
        }

        // calculate suffix sum
        suff[m - 1] = grid[0][m - 1];
        for (int i = m - 2; i >= 0; i--)
        {
            suff[i] += suff[i + 1] + grid[0][i];
        }

        for (int i = 0; i < m; i++)
        {
            long long temp1 = 0, temp2 = 0;
            if (i != 0)
            {
                temp1 = pre[i - 1];
            }
            if (i != m - 1)
            {
                temp2 = suff[i + 1];
            }
            long long temp_maxo = max(temp1, temp2);
            mini = min(mini, temp_maxo);
        }

        return mini;
    }
};
