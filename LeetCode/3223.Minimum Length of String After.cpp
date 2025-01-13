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
    int minimumLength(string s)
    {
        vector<int> v(26, 0);
        int ans = 0;
        for (auto x : s)
        {
            v[x - 'a']++;
        }
        for (auto x : v)
        {
            if (x & 1)
            {
                ans++;
            }
            else if (x > 0)
            {
                ans += 2;
            }
        }

        return ans;
    }
};
