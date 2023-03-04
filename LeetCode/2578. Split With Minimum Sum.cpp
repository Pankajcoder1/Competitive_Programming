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
    int splitNum(int x)
    {
        string s = to_string(x);
        int n = s.size();
        sort(s.begin(), s.end());
        int ret = 2e9;
        for (int mask = 1; mask < (1 << n); ++mask)
        {
            int x = 0, y = 0;
            for (int i = 0; i < n; ++i)
            {
                if ((mask >> i) & 1)
                {
                    x = x * 10 + (s[i] - '0');
                }
                else
                {
                    y = y * 10 + (s[i] - '0');
                }
            }
            int cur = x + y;
            ret = min(ret, cur);
        }
        return ret;
    }
};