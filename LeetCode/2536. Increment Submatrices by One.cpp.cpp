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
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> s(n, vector<int>(n, 0));
        for (auto &q : queries)
        {
            ++q[2], ++q[3];
            s[q[0]][q[1]]++;
            if (q[2] < n)
                s[q[2]][q[1]]--;
            if (q[3] < n)
                s[q[0]][q[3]]--;
            if (q[2] < n && q[3] < n)
                s[q[2]][q[3]]++;
        }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
            {
                if (i > 0)
                    s[i][j] += s[i - 1][j];
                if (j > 0)
                    s[i][j] += s[i][j - 1];
                if (i > 0 && j > 0)
                    s[i][j] -= s[i - 1][j - 1];
            }
        return s;
    }
};