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
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        int m = rolls.size();
        int sum = mean * (n + m);
        for (auto x : rolls)
        {
            sum -= x;
        }
        int a = sum / n, b = sum % n;
        vector<int> ans(n, a), temp;
        if (sum > 6 * n || sum < n)
        {
            return temp;
        }
        for (int i = 0; i < b; i++)
        {
            ans[i]++;
        }
        return ans;
    }
};
