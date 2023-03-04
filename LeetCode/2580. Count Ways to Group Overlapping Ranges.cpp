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
    ll power(ll x, ll y, ll mod)
    {
        ll result = 1;
        x %= mod;
        while (y > 0)
        {
            if (y & 1)
            {
                result *= x;
                result %= mod;
            }
            y >>= 1;
            x *= x;
            x %= mod;
        }
        return result;
    }

    int countWays(vector<vector<int>> &ranges)
    {
        int ways = 1, n = ranges.size();
        sort(ranges.begin(), ranges.end());
        int start = ranges[0][0], end = ranges[0][1];
        for (int i = 1; i < n; i++)
        {
            if (ranges[i][0] <= end)
            {
                end = max(end, ranges[i][1]);
            }
            else
            {
                ways++;
                end = ranges[i][1];
            }
        }


        return power(2,ways,mod1);
    }
};