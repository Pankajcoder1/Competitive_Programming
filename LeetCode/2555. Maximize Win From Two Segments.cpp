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
    int maximizeWin(vector<int> &prizePositions, int k)
    {
        int res = 0, n = prizePositions.size(), j = 0;
        vector<int> dp(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            while (prizePositions[i]-prizePositions[j] > k)
                ++j;
            dp[i + 1] = max(dp[i], i - j + 1);
            res = max(res, i - j + 1 + dp[j]);
        }   

        return res;
    }
};