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
    int minExtraChar(string s, vector<string> &dictionary)
    {
        int n = s.size();
        vector<int> dp(n + 1, n);
        dp[0] = 0;
        for (int i = 0; i < n; i += 1)
        {
            for (auto t : dictionary)
            {
                if (s.substr(i, t.size()) == t)
                {
                    dp[i + t.size()] = min(dp[i + t.size()], dp[i]);
                }
            }
            dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        }
        return dp.back();
    }
};