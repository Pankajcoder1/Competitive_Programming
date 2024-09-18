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
    int findMinDifference(vector<string> &timePoints)
    {
        int ans = INT_MAX;
        int n = timePoints.size();
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            string s = timePoints[i];
            v[i] = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + ((s[3] - '0') * 10 + s[4] - '0');
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, v[j] - v[i]);
                ans = min(ans, 1440 - (v[j] - v[i]));
            }
        }
        return ans;
    }
};
