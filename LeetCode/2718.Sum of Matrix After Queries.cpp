/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    long long matrixSumQueries(int n, vector<vector<int>> &queries)
    {
        set<int> r, c;
        reverse(queries.begin(), queries.end());
        long long ans = 0;
        for (auto it : queries)
        {
            if (it[0] == 0)
            {
                if (r.find(it[1]) == r.end())
                {
                    ans += (n - c.size()) * it[2];
                    r.insert(it[1]);
                }
            }
            else
            {
                if (c.find(it[1]) == c.end())
                {
                    ans += (n - r.size()) * it[2];
                    c.insert(it[1]);
                }
            }
        }
        return ans;
    }
};